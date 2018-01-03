#ifndef IMAGEPROCESSORPLUGINIFACE_H
#define IMAGEPROCESSORPLUGINIFACE_H

#include <QString>
#include <QtPlugin>
#include <opencv2/core.hpp>
//TODO fix Files

namespace CircleDetectorPlugins {
    class ImageProcessorPluginIFace
    {
    public:
        virtual QString filterName() const = 0;
        virtual cv::Mat filter(cv::Mat src) const = 0;
        virtual QString filterDescription() const = 0;
        virtual QString author() const = 0;
    };

}
#define ImageProcessorPluginIFace_iid "CircleDetector.Utilities.ImageProcessorPluginIFace_iid"

Q_DECLARE_INTERFACE(CircleDetectorPlugins::ImageProcessorPluginIFace, ImageProcessorPluginIFace_iid)

#endif // IMAGEPROCESSORPLUGINIFACE_H
