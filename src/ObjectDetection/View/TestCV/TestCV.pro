TEMPLATE = app
CONFIG += console c++14
CONFIG -= app_bundle
CONFIG += qt
QT += core
include(../../OPENCVLinking.pro)

SOURCES += main.cpp

INCLUDEPATH += $$_PRO_FILE_PWD_\..\..\include\ImageProcessors
INCLUDEPATH += $$_PRO_FILE_PWD_\..\..\include\utils

LIBS += -L$$_PRO_FILE_PWD_\..\..\libs  \
    -lImageProcessors \
    -lUtils
DESTDIR += $$_PRO_FILE_PWD_\..\..\bin
