#include "AppDelegate.h"
#include "CCLuaEngine.h"
#include "SimpleAudioEngine.h"
#include "cocos2d.h"
#if (COCOS2D_DEBUG>0)
#include "codeIDE/runtime/Runtime.h"
#include "codeIDE/ConfigParser.h"
#endif

using namespace CocosDenshion;

USING_NS_CC;
using namespace std;

AppDelegate::AppDelegate()
{
}

AppDelegate::~AppDelegate()
{
    SimpleAudioEngine::end();
}

bool AppDelegate::applicationDidFinishLaunching()
{
#if CC_TARGET_PLATFORM == CC_PLATFORM_MAC
    if (_projectConfig.getDebuggerType() == kCCLuaDebuggerCodeIDE)
    {
        initRuntime(_projectConfig.getProjectDir());
        if (!ConfigParser::getInstance()->isInit())
        {
            ConfigParser::getInstance()->readConfig();
        }
    }
#endif //CC_TARGET_PLATFORM == CC_PLATFORM_MAC
    
    // initialize director
    auto director = Director::getInstance();
    auto glview = director->getOpenGLView();
    if(!glview) {

#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32 || CC_TARGET_PLATFORM == CC_PLATFORM_MAC || CC_TARGET_PLATFORM == CC_PLATFORM_WP8)
#else
        Size viewSize = _projectConfig.getFrameSize();
        glview = GLView::createWithRect("anysdk", Rect(0,0,viewSize.width,viewSize.height));
        director->setOpenGLView(glview);
#endif
    }
    
    // turn on display FPS
    director->setDisplayStats(true);
    
    // set FPS. the default value is 1.0/60 if you don't call this
    director->setAnimationInterval(1.0 / 60);
    
    // register lua engine
    LuaEngine* pEngine = LuaEngine::getInstance();
    ScriptEngineManager::getInstance()->setScriptEngine(pEngine);
    
    LuaStack *pStack = pEngine->getLuaStack();
    
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS || CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
    // load framework
    pStack->loadChunksFromZIP("res/framework_precompiled.zip");
    
    // set script path
    string path = FileUtils::getInstance()->fullPathForFilename("src/main.lua");

#elif (CC_TARGET_PLATFORM == CC_PLATFORM_WP8 || CC_TARGET_PLATFORM == CC_PLATFORM_WINRT)
    // load framework
    pStack->loadChunksFromZIP("res/framework_precompiled_wp8.zip");
    
    // set script path
    string path = FileUtils::getInstance()->fullPathForFilename("src/main.lua");
    
#else
    // load framework
    if (_projectConfig.isLoadPrecompiledFramework())
    {
        const string precompiledFrameworkPath = SimulatorConfig::getInstance()->getPrecompiledFrameworkPath();
        pStack->loadChunksFromZIP(precompiledFrameworkPath.c_str());
    }
    
    // set script path
    string path = FileUtils::getInstance()->fullPathForFilename(_projectConfig.getScriptFileRealPath().c_str());
#endif
    
#if CC_TARGET_PLATFORM == CC_PLATFORM_MAC
    // Code IDE
    if (_projectConfig.getDebuggerType() == kCCLuaDebuggerCodeIDE)
    {
        if (startRuntime()) return true;
    }
#endif //CC_TARGET_PLATFORM == CC_PLATFORM_MAC
    
    size_t pos;
    while ((pos = path.find_first_of("\\")) != std::string::npos)
    {
        path.replace(pos, 1, "/");
    }
    size_t p = path.find_last_of("/\\");
    if (p != path.npos)
    {
        const string dir = path.substr(0, p);
        pStack->addSearchPath(dir.c_str());
        
        p = dir.find_last_of("/\\");
        if (p != dir.npos)
        {
            pStack->addSearchPath(dir.substr(0, p).c_str());
        }
    }
    
    string env = "__LUA_STARTUP_FILE__=\"";
    env.append(path);
    env.append("\"");
    pEngine->executeString(env.c_str());
    
    CCLOG("------------------------------------------------");
    CCLOG("LOAD LUA FILE: %s", path.c_str());
    CCLOG("------------------------------------------------");
    pEngine->executeScriptFile(path.c_str());

    return true;
}

// This function will be called when the app is inactive. When comes a phone call,it's be invoked too
void AppDelegate::applicationDidEnterBackground()
{
    Director::getInstance()->stopAnimation();
    Director::getInstance()->pause();
    SimpleAudioEngine::getInstance()->pauseBackgroundMusic();
    SimpleAudioEngine::getInstance()->pauseAllEffects();
}

// this function will be called when the app is active again
void AppDelegate::applicationWillEnterForeground()
{
    Director::getInstance()->startAnimation();
    Director::getInstance()->resume();
    SimpleAudioEngine::getInstance()->resumeBackgroundMusic();
    SimpleAudioEngine::getInstance()->resumeAllEffects();
}

void AppDelegate::setProjectConfig(const ProjectConfig& config)
{
    _projectConfig = config;
}


