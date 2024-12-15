@echo off
set /p filename=Enter filename: 
if "%filename%"=="" (
    echo U didnt enter filename.
) else (
    "../vs_build/Debug/compiler.exe" "./tests/%filename%"
)
pause