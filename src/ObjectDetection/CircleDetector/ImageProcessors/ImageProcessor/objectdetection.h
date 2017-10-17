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
public:
    explicit ObjectDetection(QObject *parent = nullptr);
    Dilate *getDiler() const;
    DetectColor *getColDetector() const;
    DetectCircle *getCirDetector() const;
    std::vector<cv::Vec3f> getCircles();
    cv::Mat colored;
    cv::Mat dialted;
    int getDilationSize() const;
    int getThickCircle() const;
    cv::Scalar getMinColor() const;
    cv::Scalar getMaxColor() const;
    int getParam1() const;
    int getParam2() const;
    int getMinDist() const;

public slots:
    void setCirDetector(DetectCircle *cirDetector);
    void setDiler(Dilate *diler);
    void setColDetector(DetectColor *colDetector);
    void setParam1(int value);
    void setParam2(int value);
    void setMinDist(int value);

signals:
    void dilationSizeChanged(int);
    void minColorChanged(const cv::Scalar&);
    void maxColorChanged(const cv::Scalar&);
    void param1Changed(int);
    void param2Changed(int);
    void minDistChanged(int);

private:
    DetectCircle *_cirDetector;
    DetectColor *_colDetector;
    Dilate *_diler;
    cv::Scalar minColor;
    cv::Scalar maxColor;
    int param1, param2, minDist, dilationSize;

public slots:
    void setDilationSize(int value);
    // AbstractImageProcessor interface
    void setImg(const cv::Mat &img) override;
    void setMinColor(const cv::Scalar &value);
    void setMaxColor(const cv::Scalar &value);

};

#endif // OBJECTDETECTION_H
