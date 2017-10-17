#ifndef DETECTCOLOR_H
#define DETECTCOLOR_H

#include "ImageProcessor/abstractimageprocessor.h"

#include <QObject>
#include <headers.h>
namespace ImageProcessor {
    class IMAGEPROCESSORSSHARED_EXPORT DetectColor;
}
using namespace ImageProcessor;

class ImageProcessor::DetectColor : public AbstractImageProcessor
{
    Q_OBJECT
    cv::Scalar minColor = cv::Scalar(20, 100, 100);
    cv::Scalar  maxColor = cv::Scalar(30, 255, 255);

public:
    explicit DetectColor(QObject *parent = nullptr);
    cv::Mat detectColor()const;
    cv::Scalar getMinColor() const;
    cv::Scalar getMaxColor() const;

public slots:
    void setMinColor(const cv::Scalar &value);
    void setMaxColor(const cv::Scalar &value);
signals:

};

#endif // DETECTCOLOR_H
