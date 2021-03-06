@echo off

set PATH=%PATH%;%MINGW_BIN%

set BUILD_FOLDER=out_make
set PRO_FOLDER=..\..
set PRO_NAME=cvsandboxtools.pro

if "%1"=="clean" (
    echo "Cleaning cvsandboxtools.dll build ..."
    
    rd /S /Q %BUILD_FOLDER%

) else (

    if "%MINGW_BIN%"=="" (
        echo "Cannot build cvsandboxtools.dll because MinGW binary folder is not set (MINGW_BIN)."
        goto EOF
    )

    if "%QT_MINGW_BIN%"=="" (
        echo "Cannot build cvsandboxtools.dll because Qt's MinGW binary folder is not set (QT_MINGW_BIN)."
        goto EOF
    )

    mkdir %BUILD_FOLDER%
    cd %BUILD_FOLDER%
        
    %QT_MINGW_BIN%\qmake.exe ..\%PRO_FOLDER%\%PRO_NAME%
    
    if "%1"=="debug" (
        %MINGW_BIN%\mingw32-make.exe -f Makefile.Debug
    ) else (
        %MINGW_BIN%\mingw32-make.exe -f Makefile.Release
    )
    
    cd ..
)

:EOF
