@echo OFF
rmdir /s /q Build
rmdir /s /q NewerASM
mkdir Build
mkdir NewerASM
if %errorlevel%==0 goto mapfile
pause
exit

:mapfile
python tools/mapfile_tool.py
if %errorlevel%==0 goto kamek
pause
exit

:kamek
python tools/kamek.py NewerProjectKP.yaml --no-rels --use-mw --gcc-type=powerpc-eabi --gcc-path=tools\devkitPPC\bin --gcc-append-exe --mw-path=tools --fast-hack
if %errorlevel%==0 goto rename
pause
exit

:rename
python tools/renameNewer.py
if %errorlevel%==0 goto move
pause
exit

:move
move "%~dp0\Build\*" C:\Dolphin\NSMASR\NewerRes >nul
if %errorlevel%==0 goto end
pause
exit

:end
echo Built all!
pause
