
android{
    LIBS += -L$(IMG_PROC)\Android\CircleDetector\ImageProcessors  \
        -lImageProcessorsStatic
    LIBS += -L$(IMG_PROC)\Android\Utilities\Utils  \
        -lUtils
    ANDROID_PACKAGE_SOURCE_DIR=$$_PRO_FILE_PWD_/android

}
INCLUDEPATH += $(IMG_PROC)/headers
INCLUDEPATH += $(IMG_PROC)/headers/imgproc
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

include(../../OPENCVLinking.pro)
