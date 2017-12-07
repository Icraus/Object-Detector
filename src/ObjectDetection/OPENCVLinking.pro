QT  *= core
win32{
    INCLUDEPATH += $$(OPENCV_INCLUDE)

    win32-g++{
        LIBS += -L$$(OPENCV_MINGW_PATH)\lib \
         -lopencv_core300 \
       -lopencv_highgui300 \
       -lopencv_imgcodecs300 \
       -lopencv_imgproc300 \
       -lopencv_calib3d300 \
       -lopencv_features2d300 \
       -lopencv_flann300 \
       -lopencv_video300 \
       -lopencv_videoio300 \
       -lopencv_videostab300 \
       -lopencv_superres300 \
       -lopencv_stitching300 \
       -lopencv_shape300 \
       -lopencv_objdetect300 \
       -lopencv_ml300 \
       -lopencv_photo300

#        LIBS += $$(OPENCV_MINGW_PATH)\bin\libopencv_core300.dll
#        LIBS += $$(OPENCV_MINGW_PATH)\bin\libopencv_highgui300.dll
#        LIBS += $$(OPENCV_MINGW_PATH)\bin\libopencv_imgcodecs300.dll
#        LIBS += $$(OPENCV_MINGW_PATH)\bin\libopencv_imgproc300.dll
#        LIBS += $$(OPENCV_MINGW_PATH)\bin\libopencv_calib3d300.dll
#        LIBS += $$(OPENCV_MINGW_PATH)\bin\libopencv_features2d300.dll
#        LIBS += $$(OPENCV_MINGW_PATH)\bin\libopencv_flann300.dll
#        LIBS += $$(OPENCV_MINGW_PATH)\bin\libopencv_video300.dll
#        LIBS += $$(OPENCV_MINGW_PATH)\bin\libopencv_videoio300.dll
#        LIBS += $$(OPENCV_MINGW_PATH)\bin\libopencv_videostab300.dll
#        LIBS += $$(OPENCV_MINGW_PATH)\bin\libopencv_superres300.dll
#        LIBS += $$(OPENCV_MINGW_PATH)\bin\libopencv_stitching300.dll
#        LIBS += $$(OPENCV_MINGW_PATH)\bin\libopencv_shape300.dll
#        LIBS += $$(OPENCV_MINGW_PATH)\bin\libopencv_objdetect300.dll
#        LIBS += $$(OPENCV_MINGW_PATH)\bin\libopencv_ml300.dll
#        LIBS += $$(OPENCV_MINGW_PATH)\bin\libopencv_photo300.dll





    }
    win32-msvc*{
        CONFIG(debug){
            LIBS += $$(OPENCV_MSVC_PATH)\lib\opencv_ts300d.lib
            LIBS += $$(OPENCV_MSVC_PATH)\lib\opencv_world300d.lib
       }
        release{
            CONFIG += static
            LIBS += VFW32.lib
            LIBS+=$$(OPENCV_MSVC_PATH)\staticlib\IlmImf.lib
            LIBS+=$$(OPENCV_MSVC_PATH)\staticlib\ippicvmt.lib
            LIBS+=$$(OPENCV_MSVC_PATH)\staticlib\libjasper.lib
            LIBS+=$$(OPENCV_MSVC_PATH)\staticlib\libjpeg.lib
            LIBS+=$$(OPENCV_MSVC_PATH)\staticlib\libpng.lib
            LIBS+=$$(OPENCV_MSVC_PATH)\staticlib\libtiff.lib
            LIBS+=$$(OPENCV_MSVC_PATH)\staticlib\libwebp.lib
            LIBS+=$$(OPENCV_MSVC_PATH)\staticlib\opencv_calib3d300.lib
            LIBS+=$$(OPENCV_MSVC_PATH)\staticlib\opencv_core300.lib
            LIBS+=$$(OPENCV_MSVC_PATH)\staticlib\opencv_features2d300.lib
            LIBS+=$$(OPENCV_MSVC_PATH)\staticlib\opencv_flann300.lib
            LIBS+=$$(OPENCV_MSVC_PATH)\staticlib\opencv_hal300.lib
            LIBS+=$$(OPENCV_MSVC_PATH)\staticlib\opencv_highgui300.lib
            LIBS+=$$(OPENCV_MSVC_PATH)\staticlib\opencv_imgcodecs300.lib
            LIBS+=$$(OPENCV_MSVC_PATH)\staticlib\opencv_imgproc300.lib
            LIBS+=$$(OPENCV_MSVC_PATH)\staticlib\opencv_ml300.lib
            LIBS+=$$(OPENCV_MSVC_PATH)\staticlib\opencv_objdetect300.lib
            LIBS+=$$(OPENCV_MSVC_PATH)\staticlib\opencv_photo300.lib
            LIBS+=$$(OPENCV_MSVC_PATH)\staticlib\opencv_shape300.lib
            LIBS+=$$(OPENCV_MSVC_PATH)\staticlib\opencv_stitching300.lib
            LIBS+=$$(OPENCV_MSVC_PATH)\staticlib\opencv_superres300.lib
            LIBS+=$$(OPENCV_MSVC_PATH)\staticlib\opencv_ts300.lib
            LIBS+=$$(OPENCV_MSVC_PATH)\staticlib\opencv_video300.lib
            LIBS+=$$(OPENCV_MSVC_PATH)\staticlib\opencv_videoio300.lib
            LIBS+=$$(OPENCV_MSVC_PATH)\staticlib\opencv_videostab300.lib
            LIBS+=$$(OPENCV_MSVC_PATH)\staticlib\zlib.lib
        }

    }

}
linux:!android{
    linux-g++{
    LIBS += -L$$(OPENCV_LIB) \
        -lopencv_calib3d \
        -lopencv_core \
        -lopencv_imgproc \
        -lopencv_imgcodecs \
        -lopencv_features2d \
        -lopencv_flann \
        -lopencv_highgui \
        -lopencv_ml \
        -lopencv_photo \
        -lopencv_videoio \
        -lopencv_superres \
        -lopencv_ts \
        -lopencv_video \
        -lopencv_videostab \
        -lopencv_imgproc \
        -lopencv_objdetect \
        -lopencv_stitching

    }
}

contains(ANDROID_TARGET_ARCH,armeabi-v7a) {
    ANDROID_EXTRA_LIBS = \
        $$PWD/android/libopencv_java3.so
}

android{
    INCLUDEPATH += $$(OPENCV_ANDROID)\sdk\native\jni\include
    OPENCVLIBPATH=$$(OPENCV_ANDROID)\sdk\native\libs\armeabi-v7a
    OCV3RDPATH=$$(OPENCV_ANDROID)\sdk\native\3rdparty\libs\armeabi-v7a

LIBS += \
        $$OPENCVLIBPATH\libopencv_core.a \
        $$OPENCVLIBPATH\libopencv_flann.a \
        $$OPENCVLIBPATH\libopencv_imgproc.a \
        $$OPENCVLIBPATH\libopencv_photo.a \
        $$OPENCVLIBPATH\libopencv_video.a \
        $$OPENCVLIBPATH\libopencv_imgcodecs.a \
        $$OPENCVLIBPATH\libopencv_shape.a \
        $$OPENCVLIBPATH\libopencv_videoio.a \
        $$OPENCVLIBPATH\libopencv_highgui.a \
        $$OPENCVLIBPATH\libopencv_objdetect.a \
        $$OPENCVLIBPATH\libopencv_superres.a \
        $$OPENCVLIBPATH\libopencv_java3.so \
        $$OPENCVLIBPATH\libopencv_ts.a \
        $$OPENCVLIBPATH\libopencv_features2d.a \
        $$OPENCVLIBPATH\libopencv_calib3d.a \
        $$OPENCVLIBPATH\libopencv_stitching.a \
        $$OPENCVLIBPATH\libopencv_hal.a \
        $$OPENCVLIBPATH\libopencv_videostab.a \
        $$OPENCVLIBPATH\libopencv_ml.a \
        $$OCV3RDPATH\liblibtiff.a \
        $$OCV3RDPATH\liblibjpeg.a \
        $$OCV3RDPATH\liblibwebp.a \
        $$OCV3RDPATH\liblibjasper.a \
        $$OCV3RDPATH\liblibpng.a \
        $$OCV3RDPATH\libIlmImf.a \
        $$OCV3RDPATH\libtbb.a

}

