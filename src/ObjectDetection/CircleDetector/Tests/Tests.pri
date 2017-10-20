!android{

LIBS += -L$(IMG_PROC)/CircleDetector/ImageProcessors/debug \
    -lImageProcessorsStatic

INCLUDEPATH += $(IMG_PROC)/headers \
INCLUDEPATH += $(IMG_PROC)/headers/imgproc \
INCLUDEPATH += $(IMG_PROC)/headers/utils

LIBS += -L$(IMG_PROC)/Utilities/Utils/debug \
 -lUtils
}

include(../../OPENCVLinking.pro)
