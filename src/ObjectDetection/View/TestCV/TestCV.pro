TEMPLATE = app
CONFIG += console c++14
CONFIG -= app_bundle
CONFIG += qt
QT += core
include(../../OPENCVLinking.pro)

SOURCES += main.cpp

INCLUDEPATH += $$_PRO_FILE_PWD_\..\..\include\ImageProcessors
INCLUDEPATH += $$_PRO_FILE_PWD_\..\..\include\utils

DEST_PREFIX = $$[QMAKE_SPEC]
equals(DEST_PREFIX, "win32-g++"){
DEST_PREFIX = "mingw32"
}else{

DEST_PREFIX = $$[QMAKE_SPEC]\\$$QMAKE_TARGET.arch

}
!android{
    CONFIG(debug, debug | release){
        LIBS += -LF:\Important\Object-Detector\src\ObjectDetection\libs\mingw32    \
            -lImageProcessors \
            -lUtils   \
            -lCVVideoCaptureLib

        DESTDIR += $$_PRO_FILE_PWD_\..\..\bin\\$$DEST_PREFIX\\$$QMAKE_TARGET.arch
    }

    CONFIG(release, debug | release){
        LIBS += -L$$_PRO_FILE_PWD_\..\..\libs\release\\$$DEST_PREFIX\\$$QMAKE_TARGET.arch  \
            -lImageProcessors \
            -lUtils \
            -lCVVideoCaptureLib
        DESTDIR += $$_PRO_FILE_PWD_\..\..\bin\release\\$$DEST_PREFIX\\$$QMAKE_TARGET.arch
        }
}
