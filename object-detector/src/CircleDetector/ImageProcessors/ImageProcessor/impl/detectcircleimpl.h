#ifndef DETECTCIRCLEIMPL_H
#define DETECTCIRCLEIMPL_H

#include <QObject>
#include <headers.h>
#include <ImageProcessor/detectcircle.h>
class ImageProcessor::DetectCircle::_DetectCircleImpl {
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
#endif // DETECTCIRCLE_H
