TEMPLATE = app
CONFIG += console c++14
CONFIG -= app_bundle
CONFIG += qt
QT += core
include(../../COMMON_VARS.pri)

include(../../OPENCVLinking.pro)

SOURCES += main.cpp

INCLUDEPATH += $$INCLUDE_PATH/ImageProcessors
INCLUDEPATH += $$INCLUDE_PATH/utils

LIBS += -L$$LIBS_PATH    \
            -lImageProcessors \
            -lUtils   \
            -lCVVideoCaptureLib


