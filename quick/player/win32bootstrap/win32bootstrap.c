/*@@ Wedit generated application. Written Fri Sep 12 16:06:30 2014
 @@header: c:\work\v3quick\quick\player\win32bootstrap\win32bootstrapres.h
 @@resources: c:\work\v3quick\quick\player\win32bootstrap\win32bootstrap.rc
 Do not edit outside the indicated areas */
/*<---------------------------------------------------------------------->*/
/*<---------------------------------------------------------------------->*/
#include <windows.h>
#include <windowsx.h>
#include <string.h>
#include <stdio.h>
#include "win32bootstrapres.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, INT nCmdShow)
{
	// get QUICK_V3_ROOT
    const char *QUICK_V3_ROOT = getenv("QUICK_V3_ROOT");
    if (!QUICK_V3_ROOT || strlen(QUICK_V3_ROOT) == 0)
    {
        MessageBox(NULL, "Please run \"setup_win.bat\", set quick-cocos2d-x root path.", "quick-cocos2d-x player error", MB_OK);
        return 1;
    }

    // http://msdn.microsoft.com/en-us/library/windows/desktop/ms682499(v=vs.85).aspx
    SECURITY_ATTRIBUTES sa = {0};
    sa.nLength = sizeof(sa);

    PROCESS_INFORMATION pi = {0};
    STARTUPINFO si = {0};
    si.cb = sizeof(STARTUPINFO);

    CHAR path[MAX_PATH];
	strcpy(path, QUICK_V3_ROOT);
	strcat(path, "\\quick\\player\\proj.win32\\bin\\player3.exe");

	/*
	AllocConsole();
	freopen("CONOUT$", "wt", stdout);
    freopen("CONOUT$", "wt", stderr);

    printf("%s\n", path);
	*/

    BOOL success = CreateProcess(NULL,
                                 path,      // command line
                                 NULL,      // process security attributes
                                 NULL,      // primary thread security attributes
                                 FALSE,     // handles are inherited
                                 0,         // creation flags
                                 NULL,      // use parent's environment
                                 NULL,      // use parent's current directory
                                 &si,       // STARTUPINFO pointer
                                 &pi);      // receives PROCESS_INFORMATION

	if (!success)
    {
        MessageBox(NULL, "Open quick-cocos2d-x player3.exe failed.", "quick-cocos2d-x player error", MB_OK);
        return 1;
    }

    return 0;
}
