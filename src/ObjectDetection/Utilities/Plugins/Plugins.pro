TEMPLATE = subdirs
CONFIG += ordered
SUBDIRS += \
    CVVideoCaptureLib \
    CVVideoCapture


CVVideoCapture.depends = CVVideoCaptureLib
