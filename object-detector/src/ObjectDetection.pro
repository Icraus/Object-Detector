TEMPLATE = subdirs
CONFIG += ordered
SUBDIRS += \
    CircleDetector \
    Utilities \
    View
#    DevicesInterfaces
CircleDetector.depends += Utilities
View.depends += Utilities
View.depends += CircleDetector
