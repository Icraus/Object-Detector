INCLUDEPATH += "$$INCLUDE_PATH/CVVideoCaptureLib"

LIBS += -L"$$LIBS_PATH"  \
    -lCVVideoCaptureLib
include(../../../OPENCVLinking.pro)
