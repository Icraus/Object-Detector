#-------------------------------------------------
#
# Project created by QtCreator 2017-10-16T23:23:28
#
#-------------------------------------------------
TARGET = ImageProcessors
TEMPLATE = lib

QT  += gui
QT  += core
DEFINES += IMAGEPROCESSORS_LIBRARY

include(../../OPENCVLinking.pro)
DEFINES += QT_DEPRECATED_WARNINGS


SOURCES += \
    ImageProcessor/abstractimageprocessor.cpp \
    ImageProcessor/detectcircle.cpp \
    ImageProcessor/detectcolor.cpp \
    ImageProcessor/dilate.cpp \
    ImageProcessor/objectdetection.cpp

HEADERS += \
        imageprocessors_global.h \ 
    ImageProcessor/abstractimageprocessor.h \
    ImageProcessor/detectcircle.h \
    ImageProcessor/detectcolor.h \
    ImageProcessor/dilate.h \
    ImageProcessor/objectdetection.h \
    headers.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

