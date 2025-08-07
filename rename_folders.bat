@echo off
setlocal enabledelayedexpansion

REM Loop through all folders in the current directory
for /d %%F in (*) do (
    set "name=%%F"
    
    REM Extract the numeric prefix
    for /f "tokens=1,* delims=-" %%A in ("%%F") do (
        set "num=%%A"
        set "rest=%%B"
        
        REM Only rename if it's a number and less than 1000
        echo !num! | findstr /r "^[0-9][0-9]*$" >nul
        if !errorlevel! == 0 (
            set /a numval=!num!
            if !numval! LSS 1000 (
                set "padded=00!numval!"
                set "padded=!padded:~-3!"

                set "newname=!padded!-!rest!"
                if not "!name!"=="!newname!" (
                    echo Renaming "!name!" to "!newname!"
                    ren "!name!" "!newname!"
                )
            )
        )
    )
)

