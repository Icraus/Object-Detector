TEMPLATE = subdirs
CONFIG += ordered
SUBDIRS += \
    CircleDetector \
    Utilities \
    View
View.depends += CircleDetector
View.depends += Utilities
#    DevicesInterfaces

