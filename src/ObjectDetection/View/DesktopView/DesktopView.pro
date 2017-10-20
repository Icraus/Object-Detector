#-------------------------------------------------
#
# Project created by QtCreator 2017-10-16T23:20:30
#
#-------------------------------------------------

QT       *= gui
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
        View/MainWindow.ui

include(../../OPENCVLinking.pro)

#message($(IMG_PROC))
android{
    LIBS += -LF:\Important\Object-Detector\src\build-ObjectDetection-Android_for_armeabi_v7a_GCC_4_9_Qt_5_9_0_for_Android_armv7-Debug\CircleDetector\ImageProcessors  \
        -lImageProcessorsStatic
    LIBS += -LF:\Important\Object-Detector\src\build-ObjectDetection-Android_for_armeabi_v7a_GCC_4_9_Qt_5_9_0_for_Android_armv7-Debug\Utilities\Utils  \
        -lUtils
    ANDROID_PACKAGE_SOURCE_DIR=$$_PRO_FILE_PWD_/android

}
INCLUDEPATH += $(IMG_PROC)/headers \
INCLUDEPATH += $(IMG_PROC)/headers/imgproc \
INCLUDEPATH += $(IMG_PROC)/headers/utils
!android{

LIBS += -L$(IMG_PROC)/CircleDetector/ImageProcessors/debug \
    -lImageProcessorsStatic



LIBS += -L$(IMG_PROC)/Utilities/Utils/debug \
 -lUtils
}

contains(ANDROID_TARGET_ARCH,armeabi-v7a) {
    ANDROID_EXTRA_LIBS = F:/Important/Object-Detector/src/ObjectDetection/View/DesktopView/android/libopencv_java3.so
}
