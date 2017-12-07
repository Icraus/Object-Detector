QT += qml quick

CONFIG += c++11

SOURCES += main.cpp

RESOURCES += qml.qrc

QML_IMPORT_PATH =

QML_DESIGNER_IMPORT_PATH =

DEFINES += QT_DEPRECATED_WARNINGS
DESTDIR += $$_PRO_FILE_PWD_\..\..\bin\\$$[QMAKE_SPEC]

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
