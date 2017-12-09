#ifndef DETECTCOLORIMPL_H
#define DETECTCOLORIMPL_H

#include "ImageProcessor/detectcolor.h"
//TODO Use PIMPL C++ Idiom
#include <QObject>
#include <headers.h>
class ImageProcessor::DetectColor::_DetectColorImpl{
private:
    cv::Scalar minColor = cv::Scalar(20, 100, 100);
    cv::Scalar  maxColor = cv::Scalar(30, 255, 255);
    DetectColor * const _ptr;
public:
    _DetectColorImpl(DetectColor *const ptr);
    _DetectColorImpl(const _DetectColorImpl&) = default;
    cv::Scalar getMinColor() const;
    void setMinColor(const cv::Scalar &value);
    cv::Scalar getMaxColor() const;
    void setMaxColor(const cv::Scalar &value);
    QVariant processImage();
    void detectColor();
};

#endif // DETECTCOLOR_H
