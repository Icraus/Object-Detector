QT  *= core
INCLUDEPATH += $$(OPENCV_INCLUDE)
win32{
    win32-g++{
        LIBS += $$(OPENCV_MINGW_PATH)\bin\libopencv_core300.dll
        LIBS += $$(OPENCV_MINGW_PATH)\bin\libopencv_highgui300.dll
        LIBS += $$(OPENCV_MINGW_PATH)\bin\libopencv_imgcodecs300.dll
        LIBS += $$(OPENCV_MINGW_PATH)\bin\libopencv_imgproc300.dll
        LIBS += $$(OPENCV_MINGW_PATH)\bin\libopencv_calib3d300.dll
        LIBS += $$(OPENCV_MINGW_PATH)\bin\libopencv_features2d300.dll
        LIBS += $$(OPENCV_MINGW_PATH)\bin\libopencv_flann300.dll
        LIBS += $$(OPENCV_MINGW_PATH)\bin\libopencv_video300.dll
        LIBS += $$(OPENCV_MINGW_PATH)\bin\libopencv_videoio300.dll
        LIBS += $$(OPENCV_MINGW_PATH)\bin\libopencv_videostab300.dll
        LIBS += $$(OPENCV_MINGW_PATH)\bin\libopencv_superres300.dll
        LIBS += $$(OPENCV_MINGW_PATH)\bin\libopencv_stitching300.dll
        LIBS += $$(OPENCV_MINGW_PATH)\bin\libopencv_shape300.dll
        LIBS += $$(OPENCV_MINGW_PATH)\bin\libopencv_objdetect300.dll
        LIBS += $$(OPENCV_MINGW_PATH)\bin\libopencv_ml300.dll
        LIBS += $$(OPENCV_MINGW_PATH)\bin\libopencv_photo300.dll

    }
    win32-msvc2013{
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
linux{
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
