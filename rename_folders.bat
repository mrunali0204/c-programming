@echo off
SETLOCAL ENABLEDELAYEDEXPANSION

:: Loop through all folders in current directory
for /d %%f in (*) do (
    set "folder=%%f"
    set "prefix=!folder:~0,3!"
    
    REM Skip folders that already start with 3 digits (like 100-, 099-)
    echo !prefix! | findstr "^[0-9][0-9][0-9]-" >nul
    if errorlevel 1 (
        for /f "tokens=1,* delims=-" %%a in ("%%f") do (
            set "num=00%%a"
            set "num=!num:~-3!"
            ren "%%f" "!num!-%%b"
        )
    )
)
