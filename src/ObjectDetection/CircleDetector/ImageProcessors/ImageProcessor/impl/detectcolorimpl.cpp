#include "detectcolorimpl.h"
using namespace ImageProcessor;

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
    cv::GaussianBlur(_ptr->getImg(), temp, cv::Size(11, 11), 0);
    cv::cvtColor(temp, temp, cv::COLOR_BGR2HSV);
    cv::inRange(temp, getMinColor(), getMaxColor(), temp);
    _ptr->setDst(temp);
}
