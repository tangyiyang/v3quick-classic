
#import "AppController.h"

#include "AppDelegate.h"
#include "glfw3.h"
#include "glfw3native.h"

#include "cocos2d.h"
#include "CCLuaEngine.h"

#include "PlayerMac.h"

USING_NS_CC;

@implementation AppController

std::string getCurAppPath(void)
{
    return [[[NSBundle mainBundle] bundlePath] UTF8String];
}

- (void) dealloc
{
    if (_buildTask)
    {
        [_buildTask interrupt];
        _buildTask = nil;
    }
    [super dealloc];
}

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification
{
    auto player = player::PlayerMac::create();
    player->setController(self);

    _isAlwaysOnTop = NO;
    _debugLogFile = 0;

    _buildTask = nil;
    _isBuildingFinished = YES;

    // load QUICK_V3_ROOT from ~/.QUICK_V3_ROOT
    NSMutableString *path = [NSMutableString stringWithString:NSHomeDirectory()];
    [path appendString:@"/.QUICK_V3_ROOT"];
    NSError *error = [[[NSError alloc] init] autorelease];
    NSString *env = [NSString stringWithContentsOfFile:path
                                              encoding:NSUTF8StringEncoding
                                                 error:&error];
    if ([error code] || env.length == 0)
    {
        [self showAlertWithoutSheet:@"Please run \"setup_mac.sh\", set quick-cocos2d-x root path."
                          withTitle:@"quick player error"];
        [[NSApplication sharedApplication] terminate:self];
    }

    env = [env stringByTrimmingCharactersInSet:[NSCharacterSet newlineCharacterSet]];
    SimulatorConfig::getInstance()->setQuickCocos2dxRootPath([env cStringUsingEncoding:NSUTF8StringEncoding]);

    [self updateProjectFromCommandLineArgs:&_project];
    [self createWindowAndGLView];
    [self registerEventsHandler];
    [self startup];
}

-(void) applicationDidResignActive: (NSNotification*) note
{
    cocos2d::EventCustom event("APP.EVENT");
    std::stringstream buf;

    buf << "{\"name\":\"focusOut\"}";

    event.setDataString(buf.str());
    Director::getInstance()->getEventDispatcher()->dispatchEvent(&event);
}

- (void) applicationDidBecomeActive:(NSNotification *)notification
{
    cocos2d::EventCustom event("APP.EVENT");
    std::stringstream buf;

    buf << "{\"name\":\"focusIn\"}";

    event.setDataString(buf.str());
    Director::getInstance()->getEventDispatcher()->dispatchEvent(&event);
}

- (BOOL) windowShouldClose:(id)sender
{
    return YES;
}

- (void) windowWillClose:(NSNotification *)notification
{
    [[NSRunningApplication currentApplication] terminate];
}

- (BOOL) applicationShouldTerminateAfterLastWindowClosed:(NSApplication*)theApplication
{
    return YES;
}

- (NSMutableArray*) makeCommandLineArgsFromProjectConfig
{
    return [self makeCommandLineArgsFromProjectConfig:kProjectConfigAll];
}

- (NSMutableArray*) makeCommandLineArgsFromProjectConfig:(unsigned int)mask
{
    _project.setWindowOffset(Vec2(_window.frame.origin.x, _window.frame.origin.y));
    NSString *commandLine = [NSString stringWithCString:_project.makeCommandLine(mask).c_str()
                                               encoding:NSUTF8StringEncoding];
    return [NSMutableArray arrayWithArray:[commandLine componentsSeparatedByString:@" "]];
}

- (void) updateProjectFromCommandLineArgs:(ProjectConfig*)config
{
    NSArray *nsargs = [[NSProcessInfo processInfo] arguments];
    long n = [nsargs count];
    if (n >= 2)
    {
        vector<string> args;
        for (int i = 0; i < [nsargs count]; ++i)
        {
            string arg = [[nsargs objectAtIndex:i] cStringUsingEncoding:NSUTF8StringEncoding];
            if (arg.length()) args.push_back(arg);
        }

        if (args.size() && args.at(1).at(0) == '/')
        {
            // for Code IDE before RC2
            config->setProjectDir(args.at(1));
            config->setDebuggerType(kCCLuaDebuggerCodeIDE);
        }
        config->parseCommandLine(args);
    }

    if (config->getProjectDir().length() == 0)
    {
        config->resetToWelcome();
    }
}

- (void) launch:(NSArray*)args
{
    NSURL *url = [NSURL fileURLWithPath:[[NSBundle mainBundle] bundlePath]];
    NSMutableDictionary *configuration = [NSMutableDictionary dictionaryWithObject:args forKey:NSWorkspaceLaunchConfigurationArguments];
    NSError *error = [[[NSError alloc] init] autorelease];
    [[NSWorkspace sharedWorkspace] launchApplicationAtURL:url
                                                  options:NSWorkspaceLaunchNewInstance
                                            configuration:configuration error:&error];
}

- (void) relaunch:(NSArray*)args
{
    [self launch:args];
    [[NSApplication sharedApplication] terminate:self];
}

- (void) relaunch
{
    [self relaunch:[self makeCommandLineArgsFromProjectConfig]];
}

- (void) showAlertWithoutSheet:(NSString*)message withTitle:(NSString*)title
{
    NSAlert *alert = [[[NSAlert alloc] init] autorelease];
	[alert addButtonWithTitle:@"OK"];
	[alert setMessageText:message];
	[alert setInformativeText:title];
	[alert setAlertStyle:NSWarningAlertStyle];
    [alert runModal];
}

- (void) loadLuaConfig
{
    LuaEngine* pEngine = LuaEngine::getInstance();
    ScriptEngineManager::getInstance()->setScriptEngine(pEngine);

    luaopen_PlayerLuaCore(pEngine->getLuaStack()->getLuaState());
    luaopen_PlayerLuaCore_Manual(pEngine->getLuaStack()->getLuaState());
    

    NSMutableString *path = [NSMutableString stringWithString:NSHomeDirectory()];
    [path appendString:@"/"];

    
    //
    // set user home dir
    //
    lua_pushstring(pEngine->getLuaStack()->getLuaState(), path.UTF8String);
    lua_setglobal(pEngine->getLuaStack()->getLuaState(), "__USER_HOME__");


    //
    // ugly: Add the opening project to the "Open Recents" list
    //
    lua_pushstring(pEngine->getLuaStack()->getLuaState(), _project.getProjectDir().c_str());
    lua_setglobal(pEngine->getLuaStack()->getLuaState(), "__PLAYER_OPEN_TITLE__");
    
    lua_pushstring(pEngine->getLuaStack()->getLuaState(), _project.makeCommandLine().c_str());
    lua_setglobal(pEngine->getLuaStack()->getLuaState(), "__PLAYER_OPEN_COMMAND__");

    //
    // load player.lua file
    //
    string playerCoreFilePath = SimulatorConfig::getInstance()->getQuickCocos2dxRootPath() + "quick/welcome/src/player.lua";
    pEngine->getLuaStack()->executeScriptFile(playerCoreFilePath.c_str());
    
    
    // load setting
//    const player::PlayerSettings &settings = player::PlayerProtocol::getInstance()->getPlayerSettings();
//    _project.setWindowOffset(Vec2(settings.offsetX, settings.offsetY));
}

- (void) createEditMenu
{
    NSApplication *thisApp = [NSApplication sharedApplication];
    NSMenu *mainMenu = [thisApp mainMenu];

    NSMenu *menu = [[[NSMenu alloc] initWithTitle:@"Edit"] autorelease];
    NSMenuItem *soMenuItem = [[NSMenuItem alloc] initWithTitle:@""
                                                        action:nil
                                                 keyEquivalent:@""];

    NSUInteger index = 2;
    if (index > [mainMenu itemArray].count)
        index = [mainMenu itemArray].count;
    [mainMenu insertItem:soMenuItem atIndex:index];
    [mainMenu setSubmenu:menu forItem:soMenuItem];


    [menu addItemWithTitle:@"Copy" action:@selector(copy:) keyEquivalent:@"c"];
    [menu addItemWithTitle:@"Select All" action:@selector(selectAll:) keyEquivalent:@"a"];

    /**
    // Find
    [menu addItem:[NSMenuItem separatorItem]];
    NSMenu *findMenu = [[[NSMenu alloc] initWithTitle:@"Find"] autorelease];
    [menu setSubmenu:findMenu forItem:[menu addItemWithTitle:@"Find" action:nil keyEquivalent:@""]];
    [findMenu addItemWithTitle:@"Find" action:@selector(performFindPanelAction:) keyEquivalent:@"f"];
    [findMenu addItemWithTitle:@"Find Next" action:@selector(performFindPanelAction:) keyEquivalent:@"g"];
    [[findMenu addItemWithTitle:@"Find Previous" action:@selector(performFindPanelAction:) keyEquivalent:@"g"]
                                    setKeyEquivalentModifierMask:NSCommandKeyMask | NSShiftKeyMask];
     **/
}

#pragma mark -
#pragma mark functions

- (void) createWindowAndGLView
{
    float screenScale = [[NSScreen mainScreen] backingScaleFactor];
    
    // create opengl view
    cocos2d::Size frameSize = _project.getFrameSize();
    float frameScale = 1.0f;
//    if (_project.isRetinaDisplay())
//    {
//        frameSize.width *= screenScale;
//        frameSize.height *= screenScale;
//    }
//    else
//    {
//        frameScale = screenScale;
//    }

    const cocos2d::Rect frameRect = cocos2d::Rect(0, 0, frameSize.width, frameSize.height);
    GLView *eglView = GLViewImpl::createWithRect("player", frameRect, frameScale, _project.isResizeWindow());

    auto director = Director::getInstance();
    director->setOpenGLView(eglView);
//    director->setScreenScale(screenScale);
    
    _window = eglView->getCocoaWindow();
//    [NSApp setDelegate: self];
    [_window center];

    if (_project.getProjectDir().length())
    {
        [self setZoom:_project.getFrameScale()];
        Vec2 pos = _project.getWindowOffset();
        if (pos.x != 0 && pos.y != 0)
        {
            [_window setFrameOrigin:NSMakePoint(pos.x, pos.y)];
        }
    }
}

- (IBAction) onFileClose:(id)sender
{
    EventCustom event("APP.WINDOW_CLOSE_EVENT");
    event.setDataString("{\"name\":\"close\"}");
    Director::getInstance()->getEventDispatcher()->dispatchEvent(&event);
}

- (void) registerEventsHandler
{
    [self registerKeyboardEventHandler];
    [self registerWindowEventsHandler];
}

- (void) registerWindowEventsHandler
{
    auto eventDispatcher = Director::getInstance()->getEventDispatcher();
    eventDispatcher->addCustomEventListener("APP.WINDOW_CLOSE_EVENT", [&](EventCustom* event)
                                            {
                                                // If script set event's result to "cancel", ignore window close event
                                                EventCustom forwardEvent("APP.EVENT");
                                                stringstream buf;
                                                buf << "{\"name\":\"close\"}";
                                                forwardEvent.setDataString(buf.str());
                                                Director::getInstance()->getEventDispatcher()->dispatchEvent(&forwardEvent);
                                                if (forwardEvent.getResult().compare("cancel") != 0)
                                                {
                                                    GLFWwindow* window = (GLFWwindow*)Director::getInstance()->getOpenGLView()->getCocoaWindow();
                                                    glfwSetWindowShouldClose(window, 1);
                                                }
                                            });
    
    ProjectConfig& lambdaProject = _project;
    eventDispatcher->addCustomEventListener("APP.VIEW_SCALE", [&](EventCustom* event)
                                            {
                                                float scale = atof(event->getDataString().c_str());
                                                lambdaProject.setFrameScale(scale);
                                                cocos2d::Director::getInstance()->getOpenGLView()->setFrameZoomFactor(scale);
                                            });
}

- (void) registerKeyboardEventHandler
{
    auto keyEvent = cocos2d::EventListenerKeyboard::create();
    keyEvent->onKeyReleased = [](EventKeyboard::KeyCode key, Event*) {
        auto event = EventCustom("APP.EVENT");
        stringstream data;
        data << "{\"name\":\"keyReleased\",\"data\":" << (int)key << "}";
        event.setDataString(data.str());
        Director::getInstance()->getEventDispatcher()->dispatchEvent(&event);
    };
    
    cocos2d::Director::getInstance()->getEventDispatcher()->addEventListenerWithFixedPriority(keyEvent, 1);
}

- (void) startup
{
    std::string path = SimulatorConfig::getInstance()->getQuickCocos2dxRootPath();
    const string projectDir = _project.getProjectDir();
    if (projectDir.length())
    {
        FileUtils::getInstance()->setSearchRootPath(projectDir.c_str());
        if (_project.isWriteDebugLogToFile())
        {
            [self writeDebugLogToFile:_project.getDebugLogFilePath()];
        }
    }
    
    // set framework path
    if (!_project.isLoadPrecompiledFramework())
    {
        FileUtils::getInstance()->addSearchPath(SimulatorConfig::getInstance()->getQuickCocos2dxRootPath() + "quick/");
    }

    const string writablePath = _project.getWritableRealPath();
    if (writablePath.length())
    {
        FileUtils::getInstance()->setWritablePath(writablePath.c_str());
    }

    if (_project.isShowConsole())
    {
        [self openConsoleWindow];
    }

    [self loadLuaConfig];
    [self createEditMenu];
    if (!_project.isAppMenu())
    {
        NSMenu *mainMenu = [[NSApplication sharedApplication] mainMenu];
        NSArray *menuArray = [mainMenu itemArray];
        for (int i = 1; i < [menuArray count]; i++)
        {
            id menu = [menuArray objectAtIndex:i];
            [mainMenu removeItem:menu];
        }
    }
    
    // app
    _app = new AppDelegate();
    _app->setProjectConfig(_project);
    _app->run();

    // After run, application needs to be terminated immediately.
    [NSApp terminate: self];
}

- (void) openConsoleWindow
{
    if (!_consoleController)
    {
        _consoleController = [[ConsoleWindowController alloc] initWithWindowNibName:@"ConsoleWindow"];
    }
    [_consoleController.window orderFrontRegardless];

    //set console pipe
    _pipe = [NSPipe pipe] ;
    _pipeReadHandle = [_pipe fileHandleForReading] ;

    int outfd = [[_pipe fileHandleForWriting] fileDescriptor];
    if (dup2(outfd, fileno(stderr)) != fileno(stderr) || dup2(outfd, fileno(stdout)) != fileno(stdout))
    {
        perror("Unable to redirect output");
        //        [self showAlert:@"Unable to redirect output to console!" withTitle:@"player error"];
    }
    else
    {
        [[NSNotificationCenter defaultCenter] addObserver: self selector: @selector(handleNotification:) name: NSFileHandleReadCompletionNotification object: _pipeReadHandle] ;
        [_pipeReadHandle readInBackgroundAndNotify] ;
    }
}

- (bool) writeDebugLogToFile:(const string)path
{
    if (_debugLogFile) return true;
    //log to file
    if(_fileHandle) return true;
    NSString *fPath = [NSString stringWithCString:path.c_str() encoding:[NSString defaultCStringEncoding]];
    [[NSFileManager defaultManager] createFileAtPath:fPath contents:nil attributes:nil] ;
    _fileHandle = [NSFileHandle fileHandleForWritingAtPath:fPath];
    [_fileHandle retain];
    return true;
}

- (void)handleNotification:(NSNotification *)note
{
    //NSLog(@"Received notification: %@", note);
    [_pipeReadHandle readInBackgroundAndNotify] ;
    NSData *data = [[note userInfo] objectForKey:NSFileHandleNotificationDataItem];
    NSString *str = [[[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding] autorelease];

    //show log to console
    [_consoleController trace:str];
    if(_fileHandle!=nil){
        [_fileHandle writeData:[str dataUsingEncoding:NSUTF8StringEncoding]];
    }

}

- (void) close_debugLogFile
{
    if(_fileHandle){
        [_fileHandle closeFile];
        [_fileHandle release];
        _fileHandle = nil;
    }
    if (_debugLogFile)
    {
        close(_debugLogFile);
        _debugLogFile = 0;
        NSNotificationCenter *nc = [NSNotificationCenter defaultCenter];
        [nc removeObserver:self];
    }
}

- (void) setZoom:(float)scale
{
    Director::getInstance()->getOpenGLView()->setFrameZoomFactor(scale);
    _project.setFrameScale(scale);
}

//-(void) setAlwaysOnTop:(BOOL)alwaysOnTop
//{
//    NSMenuItem *windowMenu = [[window menu] itemWithTitle:@"Window"];
//    NSMenuItem *menuItem = [[windowMenu submenu] itemWithTitle:@"Always On Top"];
//    if (alwaysOnTop)
//    {
//        [window setLevel:NSFloatingWindowLevel];
//        [menuItem setState:NSOnState];
//    }
//    else
//    {
//        [window setLevel:NSNormalWindowLevel];
//        [menuItem setState:NSOffState];
//    }
//    _isAlwaysOnTop = alwaysOnTop;
//}

- (void) runScriptAsyn:(NSString *)absScriptPath withArguments:(NSArray *) arguments
{
    [self performSelectorInBackground:@selector(runScriptSync:withArguments:)
                          withObjects:absScriptPath, arguments, nil];
}

- (void) runScriptSync:(NSString *)absScriptPath withArguments:(NSArray *)arguments
{
    if (!absScriptPath)
    {
        CCLOG("Please check your script (%s)", absScriptPath.UTF8String);
        return ;
    }
    
    _buildTask = [[NSTask alloc] init];
    [_buildTask setLaunchPath: absScriptPath];

    if (!arguments)
    {
        arguments = [NSArray array];
    }
    [_buildTask setArguments: arguments];
    [_buildTask launch];

    [_buildTask waitUntilExit];

    [_buildTask release];
    _buildTask = nil;
}
//
//- (void) updateAlertUI:(NSString*) errCodeString
//{
//    if (!buildAlert) return;
//
//    int errCode = [errCodeString intValue];
//    NSString *message = (errCode == 0) ? @"Build finished, Congraturations!" : @"OPPS, please check your code or build env";
//    BOOL hide = (errCode == 0) ? YES : NO;
//
//    [buildAlert setMessageText:message];
//    [[[buildAlert buttons] objectAtIndex:0] setTitle:@"Finish"];
//    [[[buildAlert buttons] objectAtIndex:1] setHidden:hide];
//}

-(void)performSelectorInBackground:(SEL)selector withObjects:(id)object, ...
{
    NSMethodSignature *signature = [self methodSignatureForSelector:selector];
    
    // setup the invocation
    NSInvocation *invocation = [NSInvocation invocationWithMethodSignature:signature];
    invocation.target = self;
    invocation.selector = selector;
    
    // associate the arguments
    va_list objects;
    va_start(objects, object);
    unsigned int objectCounter = 2;
    for (id obj = object; obj != nil; obj = va_arg(objects, id))
    {
        [invocation setArgument:&obj atIndex:objectCounter++];
    }
    va_end(objects);
    
    // make sure to invoke on a background queue
    NSInvocationOperation *operation = [[NSInvocationOperation alloc] initWithInvocation:invocation];
    NSOperationQueue *backgroundQueue = [[NSOperationQueue alloc] init];
    [backgroundQueue addOperation:operation];
}

#pragma mark -
#pragma mark IB Actions

- (IBAction) onFileNewPlayer:(id)sender
{
    NSMutableArray *args = [self makeCommandLineArgsFromProjectConfig];
    [args removeLastObject];
    [args removeLastObject];
    [self launch:args];
}

//- (IBAction) onPlayerWriteDebugLogToFile:(id)sender
//{
//    bool isWrite = _project.isWriteDebugLogToFile();
//    if (!isWrite)
//    {
//        if ([self writeDebugLogToFile:_project.get_debugLogFilePath()])
//        {
//            _project.setWriteDebugLogToFile(true);
//            [(NSMenuItem*)sender setState:NSOnState];
//        }
//    }
//    else
//    {
//        _project.setWriteDebugLogToFile(false);
//        [self close_debugLogFile];
//        [(NSMenuItem*)sender setState:NSOffState];
//    }
//}
//
//- (IBAction) onPlayerOpenDebugLog:(id)sender
//{
//    const string path = _project.get_debugLogFilePath();
//    [[NSWorkspace sharedWorkspace] openFile:[NSString stringWithCString:path.c_str() encoding:NSUTF8StringEncoding]];
//}
//
//- (IBAction) onPlayerRelaunch:(id)sender
//{
//    [self relaunch];
//}
//
//- (IBAction) onPlayerShowProjectSandbox:(id)sender
//{
//    [[NSWorkspace sharedWorkspace] openFile:[NSString stringWithCString:FileUtils::sharedFileUtils()->getWritablePath().c_str() encoding:NSUTF8StringEncoding]];
//}
//
//- (IBAction) onPlayerShowProjectFiles:(id)sender
//{
//    [[NSWorkspace sharedWorkspace] openFile:[NSString stringWithCString:_project.getProjectDir().c_str() encoding:NSUTF8StringEncoding]];
//}
//
//- (IBAction) onScreenChangeFrameSize:(id)sender
//{
//    NSInteger i = [sender tag];
//    if (i >= 0 && i < SimulatorConfig::getInstance()->getScreenSizeCount())
//    {
//        SimulatorScreenSize size = SimulatorConfig::getInstance()->getScreenSize((int)i);
//        _project.setFrameSize(_project.isLandscapeFrame() ? cocos2d::Size(size.height, size.width) : cocos2d::Size(size.width, size.height));
//        _project.setFrameScale(1.0f);
//        [self relaunch];
//    }
//}
//
//- (IBAction) onScreenPortait:(id)sender
//{
//    if ([sender state] == NSOnState) return;
//    [sender setState:NSOnState];
//    [[[[[window menu] itemWithTitle:@"Screen"] submenu] itemWithTitle:@"Landscape"] setState:NSOffState];
//    _project.changeFrameOrientationToPortait();
//    [self relaunch];
//}
//
//- (IBAction) onScreenLandscape:(id)sender
//{
//    if ([sender state] == NSOnState) return;
//    [sender setState:NSOnState];
//    [[[[[window menu] itemWithTitle:@"Screen"] submenu] itemWithTitle:@"Portait"] setState:NSOffState];
//    _project.changeFrameOrientationToLandscape();
//    [self relaunch];
//}
//
//- (IBAction) onScreenZoomOut:(id)sender
//{
//    if ([sender state] == NSOnState) return;
//    float scale = (float)[sender tag] / 100.0f;
//    [self setZoom:scale];
//    [self updateView];
//    [self updateUI];
//    [self updateOpenRect];
//
//}
//
//- (void) updateView
//{
//    auto policy = eglView->getResolutionPolicy();
//    auto designSize = eglView->getDesignResolutionSize();
//
//    cocos2d::Size frameSize = _project.getFrameSize();
//    eglView->setFrameSize(frameSize.width, frameSize.height);
//
//    eglView->setDesignResolutionSize(designSize.width, designSize.height, policy);
//}
//
//-(IBAction) onWindowAlwaysOnTop:(id)sender
//{
//    [self setAlwaysOnTop:!_isAlwaysOnTop];
//}
//
//-(IBAction)fileBuildAndroid:(id)sender
//{
//    if (!_isBuildingFinished) return;
//
//    if (_project.isWelcome())
//    {
//        [self showAlert:@"Welcome app is not for android" withTitle:@""];
//    }
//    else
//    {
//        std::string scriptPath = _project.getProjectDir() + "proj.android/build_native.sh";
//        if (!FileUtils::getInstance()->isFileExist(scriptPath))
//        {
//            [self showAlert:[NSString stringWithFormat:@"%s isn't exist", scriptPath.c_str()] withTitle:@""];
//        }
//        else
//        {
//            _isBuildingFinished = NO;
//            NSString *tmpPath = [NSString stringWithUTF8String:scriptPath.c_str()];
//
//            [self performSelectorInBackground:@selector(buildAndroidInBackground:)
//                                   withObject:tmpPath];
//
//
//
//            NSAlert *alert = [[[NSAlert alloc] init] autorelease];
//            [alert addButtonWithTitle:@"Cancel"];
//            [[alert addButtonWithTitle:@"How to setup android ENV"] setHidden:YES];
//            [alert setMessageText:@"Building android target, view console :-)"];
//            [alert setAlertStyle:NSWarningAlertStyle];
//
//            buildAlert = alert;
//            [alert beginSheetModalForWindow:window
//                          completionHandler:^(NSModalResponse returnCode) {
//
//                              _isBuildingFinished = YES;
//                              if (returnCode == NSAlertFirstButtonReturn)
//                              {
//                                  if (_buildTask && [_buildTask isRunning])
//                                  {
//                                      [NSObject cancelPreviousPerformRequestsWithTarget:self];
//                                      [_buildTask interrupt];
//                                  }
//                              }
//                              else if (returnCode == NSAlertSecondButtonReturn)
//                              {
//                                  Native::openURL("http://quick.cocos.org/?p=415");
//                              }
//                          }];
//        }
//    }
//}
//
//- (BOOL)validateUserInterfaceItem:(id<NSValidatedUserInterfaceItem>)anItem
//{
//    return (_isBuildingFinished);
//}
//
//- (IBAction) fileBuildIOS:(id)sender
//{
//    if (_project.isWelcome())
//    {
//        [self showAlert:@"Welcome app " withTitle:@""];
//    }
//    else
//    {
//        [self showAlert:@"Coming soon :-)" withTitle:@""];
//    }
//}

@end
