#include "detectcolor.h"
using namespace ImageProcessor;
DetectColor::DetectColor(QObject *parent) : AbstractImageProcessor(parent)
{

}

cv::Scalar DetectColor::getMinColor() const
{
    return minColor;
}

void DetectColor::setMinColor(const cv::Scalar &value)
{
    minColor = value;
}

cv::Scalar DetectColor::getMaxColor() const
{
    return maxColor;
}

void DetectColor::setMaxColor(const cv::Scalar &value)
{
    maxColor = value;
}

cv::Mat DetectColor::detectColor() const{
    cv::Mat temp;
    cv::cvtColor(getImg(), temp, cv::COLOR_BGR2HSV);
    cv::GaussianBlur(temp, temp, cv::Size(11, 11), 5);
    cv::inRange(temp, getMinColor(), getMaxColor(), temp);
    return temp;
}
