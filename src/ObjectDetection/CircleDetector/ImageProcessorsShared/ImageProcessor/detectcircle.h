#ifndef DETECTCIRCLE_H
#define DETECTCIRCLE_H

#include <QObject>
#include <headers.h>
#include <ImageProcessor/abstractimageprocessor.h>
using namespace ImageProcessor;
namespace ImageProcessor {
    class IMAGEPROCESSORSSHARED_EXPORT DetectCircle;
}
class ImageProcessor::DetectCircle : public AbstractImageProcessor
{
    Q_OBJECT
    int param1 = 70, param2 = 30, minDist = 75;
public:
    explicit DetectCircle(QObject *parent = nullptr);
    std::vector<cv::Vec3f> detectCircle()const;

    int getMinDist() const;

    int getParam2() const;

    int getParam1() const;

signals:
public slots:
    void setMinDist(int value);
    void setParam2(int value);
    void setParam1(int value);


};

#endif // DETECTCIRCLE_H
