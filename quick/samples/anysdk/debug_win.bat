@echo off

set DIR=%~dp0

echo %QUICK_V3_ROOT%

set BIN=%QUICK_V3_ROOT%quick\player\proj.win32\bin\player3.exe
if not exist %BIN% set BIN=%QUICK_V3_ROOT%quick\player\proj.win32\Release\player3.exe
if not exist %BIN% set BIN=%QUICK_V3_ROOT%quick\player\proj.win32\Debug\player3.exe

set ARG=-debugger-codeide -workdir %DIR%
set SIZE=-portrait

%BIN% %ARG% %SIZE%

echo ""
echo "------------------------------------------------------"
echo ""
echo ""
echo ""
