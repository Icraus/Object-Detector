#include "detectcircle.h"
using namespace ImageProcessor;
class DetectCircle::_DetectCircleImpl {
private:
    int param1 = 70, param2 = 30, minDist = 75;
    DetectCircle *const ptr;
public:
    _DetectCircleImpl(const _DetectCircleImpl&) = default;
    _DetectCircleImpl(_DetectCircleImpl &&) = default;
    _DetectCircleImpl(DetectCircle *const);
    int getParam1() const;
    int getParam2() const;
    int getMinDist() const;
    std::vector<cv::Vec3f> detectCircle()const;
    QVariant processImage();

public slots:
    void setParam1(int value);
    void setParam2(int value);
    void setMinDist(int value);
};

int DetectCircle::getMinDist() const
{
    return _pimpl->getMinDist();
}

void DetectCircle::setMinDist(int value)
{
    _pimpl->setMinDist(value);
}

int DetectCircle::getParam2() const
{
    return _pimpl->getParam2();
}

void DetectCircle::setParam2(int value)
{
    _pimpl->setParam2(value);
}

int DetectCircle::getParam1() const
{
    return _pimpl->getParam1();
}

void DetectCircle::setParam1(int value)
{
    _pimpl->setParam1(value);
}

QVariant DetectCircle::processImage()
{
    return _pimpl->processImage();
}

DetectCircle::DetectCircle(QObject *parent) : AbstractImageProcessor(parent),
    _pimpl{std::make_unique<DetectCircle::_DetectCircleImpl>(this)}
{

}

std::vector<cv::Vec3f> DetectCircle::detectCircle() const{
    return _pimpl->detectCircle();
}

DetectCircle::~DetectCircle()
{

}


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
