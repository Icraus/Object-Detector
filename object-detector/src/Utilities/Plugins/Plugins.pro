TEMPLATE = subdirs
CONFIG += ordered
SUBDIRS += \
    CVVideoCaptureLib \
    CVVideoCapture \
    CircleDetectorPlugins


CVVideoCapture.depends = CVVideoCaptureLib
