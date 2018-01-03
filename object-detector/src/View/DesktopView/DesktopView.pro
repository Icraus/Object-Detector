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

include(../../COMMON_VARS.pri)

INCLUDEPATH += $$INCLUDE_PATH/ImageProcessors
INCLUDEPATH += $$INCLUDE_PATH/Utils
INCLUDEPATH += $$INCLUDE_PATH/CVVideoCaptureLib
INCLUDEPATH += $$INCLUDE_PATH/SerialPortModel
INCLUDEPATH += $$INCLUDE_PATH/ImageProcessorsPlugin
INCLUDEPATH += $$INCLUDE_PATH/CircleDetectorPluginModel
INCLUDEPATH += $$INCLUDE_PATH/CircleDetectorPluginLoaderView


!android{
        LIBS += -L$$LIBS_PATH    \
            -lImageProcessors \
            -lUtils   \
            -lCVVideoCaptureLib \
            -lSerialPortModel \
            -lCircleDetectorPluginModel \
            -lCircleDetectorPluginLoaderView

}
DEFINES += USE_SHARED_LIB
contains(ANDROID_TARGET_ARCH,armeabi-v7a) {
    ANDROID_EXTRA_LIBS = $$PWD/android/libopencv_java3.so
}
include(../../OPENCVLinking.pro)

RESOURCES += \
    resourses.qrc
