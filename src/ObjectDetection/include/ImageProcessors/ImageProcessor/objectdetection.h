#ifndef OBJECTDETECTION_H
#define OBJECTDETECTION_H

#include <QObject>
#include <headers.h>
#include <ImageProcessor/detectcircle.h>
#include <ImageProcessor/detectcolor.h>
#include <ImageProcessor/abstractimageprocessor.h>
#include <ImageProcessor/dilate.h>
namespace ImageProcessor {
#ifdef IMAGEPROCESSORS_LIBRARY
    class IMAGEPROCESSORSSHARED_EXPORT ObjectDetection;
#else
    class ObjectDetection;
#endif
}
using namespace ImageProcessor;

class ImageProcessor::ObjectDetection : public AbstractImageProcessor
{
    Q_OBJECT
private:
    class _ObjectDetectionImpl;
    std::unique_ptr<_ObjectDetectionImpl> _pimpl;
public:
    explicit ObjectDetection(QObject *parent = nullptr);
    Dilate *getDiler() const;
    DetectColor *getColDetector() const;
    DetectCircle *getCirDetector() const;
    std::vector<cv::Vec3f> getCircles();

    virtual ~ObjectDetection();
public slots:
    void setCirDetector(DetectCircle *cirDetector);
    void setDiler(Dilate *diler);
    void setColDetector(DetectColor *colDetector);

    // ImageProcessor::AbstractImageProcessor interface
public:
    virtual QVariant processImage() override;
};

#endif // OBJECTDETECTION_H
