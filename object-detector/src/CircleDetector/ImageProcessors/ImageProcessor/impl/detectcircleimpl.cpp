#include "detectcircleimpl.h"
using namespace ImageProcessor;


DetectCircle::_DetectCircleImpl::_DetectCircleImpl(DetectCircle *const _ptr):
    ptr{_ptr}
{

}

int DetectCircle::_DetectCircleImpl::getParam1() const
{
    return param1;
}

void DetectCircle::_DetectCircleImpl::setParam1(int value)
{
    param1 = value;
}

int DetectCircle::_DetectCircleImpl::getParam2() const
{
    return param2;
}

void DetectCircle::_DetectCircleImpl::setParam2(int value)
{
    param2 = value;
}

int DetectCircle::_DetectCircleImpl::getMinDist() const
{
    return minDist;
}

void DetectCircle::_DetectCircleImpl::setMinDist(int value)
{
    minDist = value;
}

std::vector<cv::Vec3f> DetectCircle::_DetectCircleImpl::detectCircle() const
{
    cv::Mat temp = ptr -> getImg();
    std::vector<cv::Vec3f> circles;
    if(temp.type() != CV_8UC1)
        cv::cvtColor(temp, temp, cv::COLOR_BGR2GRAY);
    cv::HoughCircles(temp, circles, cv::HOUGH_GRADIENT, 1, getMinDist(), getParam1(), getParam2());
    return circles;
}

QVariant DetectCircle::_DetectCircleImpl::processImage()
{
    std::vector<cv::Vec3f> circles = detectCircle();
    emit ptr->circlesDetected(circles);
    return QVariant::fromValue<std::vector<cv::Vec3f>> (circles);
}

