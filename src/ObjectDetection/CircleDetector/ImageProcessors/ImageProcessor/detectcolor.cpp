#include "detectcolor.h"
using namespace ImageProcessor;
class DetectColor::_DetectColorImpl{
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

DetectColor::DetectColor(QObject *parent) : AbstractImageProcessor(parent),
    _pimpl{std::make_unique<_DetectColorImpl>(this)}
{

}

cv::Scalar DetectColor::getMinColor() const
{
    return _pimpl->getMinColor();
}

void DetectColor::setMinColor(const cv::Scalar &value)
{
    _pimpl->setMinColor(value);
}

cv::Scalar DetectColor::getMaxColor() const
{
    return _pimpl->getMaxColor();
}

DetectColor::~DetectColor()
{

}

void DetectColor::setMaxColor(const cv::Scalar &value)
{
    _pimpl->setMaxColor(value);
}

QVariant DetectColor::processImage()
{

    return _pimpl->processImage();
}

void DetectColor::detectColor() {
   return _pimpl->detectColor();
}

DetectColor::_DetectColorImpl::_DetectColorImpl(DetectColor * const ptr):
    _ptr{ptr}
{

}

cv::Scalar DetectColor::_DetectColorImpl::getMinColor() const
{
    return minColor;
}

void DetectColor::_DetectColorImpl::setMinColor(const cv::Scalar &value)
{
    minColor = value;
}

cv::Scalar DetectColor::_DetectColorImpl::getMaxColor() const
{
    return maxColor;
}

void DetectColor::_DetectColorImpl::setMaxColor(const cv::Scalar &value)
{
    maxColor = value;
}

QVariant DetectColor::_DetectColorImpl::processImage()
{
    detectColor();
    return QVariant();
}

void DetectColor::_DetectColorImpl::detectColor()
{
    cv::Mat temp;
    cv::cvtColor(_ptr->getImg(), temp, cv::COLOR_BGR2HSV);
    cv::GaussianBlur(temp, temp, cv::Size(11, 11), 5);
    cv::inRange(temp, getMinColor(), getMaxColor(), temp);
    _ptr->setDst(temp);
}
