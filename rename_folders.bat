@echo off
setlocal enabledelayedexpansion

REM Loop through all folders
for /D %%f in (*) do (
    set "name=%%f"

    REM Extract the number prefix (before the first dash)
    for /f "tokens=1* delims=-" %%a in ("%%f") do (
        set "num=%%a"
        set "rest=%%b"

        REM Only process if num is a number
        echo !num! | findstr /r "^[0-9][0-9]*$" >nul
        if !errorlevel! == 0 (
            if !num! LSS 10 (
                set "newnum=00!num!"
            ) else if !num! LSS 100 (
                set "newnum=0!num!"
            ) else (
                set "newnum=!num!"
            )
            set "newname=!newnum!-!rest!"
            if not "!newname!"=="%%f" (
                echo Renaming %%f to !newname!
                ren "%%f" "!newname!"
            )
        )
    )
)

endlocal
pause
