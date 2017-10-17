#include "detectcircle.h"

int DetectCircle::getMinDist() const
{
    return minDist;
}

void DetectCircle::setMinDist(int value)
{
    minDist = value;
}

int DetectCircle::getParam2() const
{
    return param2;
}

void DetectCircle::setParam2(int value)
{
    param2 = value;
}

int DetectCircle::getParam1() const
{
    return param1;
}

void DetectCircle::setParam1(int value)
{
    param1 = value;
}

DetectCircle::DetectCircle(QObject *parent) : AbstractImageProcessor(parent)
{

}

std::vector<cv::Vec3f> DetectCircle::detectCircle() const{
    cv::Mat temp = getImg();
    std::vector<cv::Vec3f> circles;

    if(temp.type() != CV_8UC1)
        cv::cvtColor(temp, temp, cv::COLOR_BGR2GRAY);
    cv::HoughCircles(temp, circles, cv::HOUGH_GRADIENT, 1, getMinDist(), getParam1(), getParam2());
    return circles;
}
