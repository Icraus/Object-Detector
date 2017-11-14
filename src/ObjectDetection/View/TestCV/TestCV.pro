TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG += qt
QT += core
include(../../OPENCVLinking.pro)

SOURCES += main.cpp

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/libs/release/ -lImageProcessorsStatic
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/libs/debug/ -lImageProcessorsStatic

INCLUDEPATH += $$PWD/libs/includes
DEPENDPATH += $$PWD/libs/includes
