#-------------------------------------------------
#
# Project created by QtCreator 2017-10-16T23:20:30
#
#-------------------------------------------------

QT       *= gui serialport
CONFIG += c++11
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DesktopView
TEMPLATE = app
DEFINES += QT_DEPRECATED_WARNINGS


SOURCES += \
        main.cpp \
    View/mainwindow.cpp \
    colordetectorcontroller.cpp

HEADERS += \
    View/mainwindow.h \
    colordetectorcontroller.h

FORMS += \
        View/mainwindow.ui


#message($(IMG_PROC))
android{
    LIBS += -L$(IMG_PROC)\Android\CircleDetector\ImageProcessors  \
        -lImageProcessors
    LIBS += -L$(IMG_PROC)\Android\Utilities\Utils  \
        -lUtils
    ANDROID_PACKAGE_SOURCE_DIR=$$_PRO_FILE_PWD_/android

}
#INCLUDEPATH += $$_PRO_FILE_PWD_/../../include/ImageProcessors
#INCLUDEPATH += $$_PRO_FILE_PWD_/../../include/Utils
#INCLUDEPATH += $$_PRO_FILE_PWD_/../../include/CVVideoCaptureLib
#INCLUDEPATH += $$_PRO_FILE_PWD_/../../include/SerialPortModel

#DEST_PREFIX = $$[QMAKE_SPEC]
#equals(DEST_PREFIX, "win32-g++"){
#DEST_PREFIX = "mingw32"
#}
include(../../COMMON_VARS.pri)

INCLUDEPATH += $$INCLUDE_PATH/ImageProcessors
INCLUDEPATH += $$INCLUDE_PATH/Utils
INCLUDEPATH += $$INCLUDE_PATH/CVVideoCaptureLib
INCLUDEPATH += $$INCLUDE_PATH/SerialPortModel

!android{
        LIBS += -L$$LIBS_PATH    \
            -lImageProcessors \
            -lUtils   \
            -lCVVideoCaptureLib \
            -lSerialPortModel

}
DEFINES += USE_SHARED_LIB
contains(ANDROID_TARGET_ARCH,armeabi-v7a) {
    ANDROID_EXTRA_LIBS = $$PWD/android/libopencv_java3.so
}
include(../../OPENCVLinking.pro)

RESOURCES += \
    resourses.qrc
