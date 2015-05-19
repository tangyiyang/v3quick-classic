@echo off
set DIR=%~dp0
cd "%DIR%.."
:: wp8
call %DIR%compile_scripts.bat -i framework -o lib\framework_precompiled\framework_precompiled_wp8.zip -p framework -m zip -luac
echo UPDATE lib\framework_precompiled\framework_precompiled_wp8.zip

rem echo.
rem echo updating all framework_precompiled_wp8.zip
rem echo.

rem dir /s/b %QUICK_V3_ROOT% | find "res\framework_precompiled_wp8.zip" > ___tmp___

rem for /f %%f in (___tmp___) do (
rem     echo %%f
rem     copy lib\framework_precompiled\framework_precompiled_wp8.zip %%f > NUL
rem )

rem del ___tmp___

:: update templates
copy lib\framework_precompiled\framework_precompiled_wp8.zip templates\PROJECT_TEMPLATE_01\proj.wp8\__PROJECT_PACKAGE_LAST_NAME_L__\Assets\Resources\res\framework_precompiled_wp8.zip > NUL
echo UPDATE templates\PROJECT_TEMPLATE_01\proj.wp8\__PROJECT_PACKAGE_LAST_NAME_L__\Assets\Resources\res\framework_precompiled_wp8.zip

:: other platforms
call %DIR%compile_scripts.bat -i framework -o lib\framework_precompiled\framework_precompiled.zip -p framework -m zip
echo UPDATE lib\framework_precompiled\framework_precompiled.zip

rem echo.
rem echo ### UPDATING ###
rem echo.
rem echo updating all framework_precompiled.zip
rem echo.

rem dir /s/b %QUICK_V3_ROOT% | find "res\framework_precompiled.zip" > ___tmp___

rem for /f %%f in (___tmp___) do (
rem     echo %%f
rem     copy lib\framework_precompiled\framework_precompiled.zip %%f > NUL
rem )

rem del ___tmp___

echo.
echo DONE
echo.

cd "%DIR%"
