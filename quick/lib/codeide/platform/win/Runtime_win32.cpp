
#include <io.h>
#include <direct.h>
#include <stdio.h>
#include <vector>
#include <string>

#include "cocos2d.h"

#define GLFW_EXPOSE_NATIVE_WIN32
#define GLFW_EXPOSE_NATIVE_WGL

#include "glfw3.h"
#include "glfw3native.h"

std::string getIPAddress()
{
    WSADATA wsaData;
    char name[155] = {0};
    char *ip = nullptr;
    PHOSTENT hostinfo;

    if (WSAStartup(MAKEWORD(2, 0), &wsaData) == 0)
    {
        if (gethostname(name, sizeof(name)) == 0)
        {
            if ((hostinfo = gethostbyname(name)) != NULL)
            {
                ip = inet_ntoa(*(struct in_addr *)*hostinfo->h_addr_list);
            }
        }
        WSACleanup();
    }
    return ip;
}

void shutDownApp()
{
    HWND hwnd = glfwGetWin32Window(cocos2d::Director::getInstance()->getOpenGLView()->getWindow());
    ::SendMessage(hwnd, WM_CLOSE, NULL, NULL);
}

std::string getCurAppPath(void)
{
    TCHAR szAppDir[MAX_PATH] = {0};
    if (!GetModuleFileName(NULL, szAppDir, MAX_PATH))
        return "";
    int nEnd = 0;
    for (int i = 0; szAppDir[i]; i++)
    {
        if (szAppDir[i] == '\\')
            nEnd = i;
    }
    szAppDir[nEnd] = 0;
    int iLen = 2 * wcslen(szAppDir);
    char* chRtn = new char[iLen + 1];
    wcstombs(chRtn, szAppDir, iLen + 1);
    std::string strPath = chRtn;
    delete[] chRtn;
    chRtn = NULL;
    char fuldir[MAX_PATH] = {0};
    _fullpath(fuldir, strPath.c_str(), MAX_PATH);
    return fuldir;
}
