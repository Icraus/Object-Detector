#ifndef DETECTCIRCLE_H
#define DETECTCIRCLE_H

#include <QObject>
#include <headers.h>
#include <ImageProcessor/abstractimageprocessor.h>
using namespace ImageProcessor;
namespace ImageProcessor {
    class IMG_PROC_LIB DetectCircle;
}
Q_DECLARE_METATYPE(std::vector<cv::Vec3f>)
class ImageProcessor::DetectCircle : public AbstractImageProcessor
{
    Q_OBJECT
private:
    class _DetectCircleImpl;
    std::unique_ptr<_DetectCircleImpl> _pimpl;
public:
    explicit DetectCircle(QObject *parent = nullptr);
    std::vector<cv::Vec3f> detectCircle()const;
    virtual ~DetectCircle();
    int getMinDist() const;

    int getParam2() const;

    int getParam1() const;

signals:
    void circlesDetected(const std::vector<cv::Vec3f>&);
public slots:
    void setMinDist(int value);
    void setParam2(int value);
    void setParam1(int value);



    // ImageProcessor::AbstractImageProcessor interface
public:
    QVariant processImage() override;
};


#endif // DETECTCIRCLE_H
