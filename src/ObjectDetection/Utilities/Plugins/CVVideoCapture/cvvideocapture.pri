INCLUDEPATH += "$$_PRO_FILE_PWD_/../../../include/CVVideoCaptureLib"
DEST_PREFIX = $$[QMAKE_SPEC]
equals(DEST_PREFIX, "win32-g++"){
DEST_PREFIX = "mingw32"
}
LIBS += -L"$$_PRO_FILE_PWD_/../../../libs/release/$$DEST_PREFIX"  \
    -lCVVideoCaptureLib
include(../../../OPENCVLinking.pro)
