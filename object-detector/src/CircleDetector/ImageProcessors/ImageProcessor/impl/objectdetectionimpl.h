#ifndef OBJECTDETECTIONIMPL_H
#define OBJECTDETECTIONIMPL_H

#include <QObject>
#include <headers.h>
#include <ImageProcessor/objectdetection.h>
#include <ImageProcessor/detectcircle.h>
#include <ImageProcessor/detectcolor.h>
#include <ImageProcessor/abstractimageprocessor.h>
#include <ImageProcessor/dilate.h>
//TODO Fix Filters

class ImageProcessor::ObjectDetection::_ObjectDetectionImpl
{
private:
    DetectCircle *_cirDetector;
    DetectColor *_colDetector;
    Dilate *_diler;
    ObjectDetection *const _ptr;
    QVariant results;
    std::vector<AbstractImageProcessor*> _filters;
    friend class ImageProcessor::ObjectDetection;
public:
    _ObjectDetectionImpl(ObjectDetection *const ptr);
    Dilate *getDiler() const;
    void addFilter(AbstractImageProcessor *proc);
    DetectColor *getColDetector() const;
    DetectCircle *getCirDetector() const;
    std::vector<cv::Vec3f> getCircles();
    void setCirDetector(DetectCircle *cirDetector);
    void setDiler(Dilate *diler);
    void setColDetector(DetectColor *colDetector);
    QVariant processImage();
    QVariant getResults() const;
    void setResults(const QVariant &value);
    std::vector<AbstractImageProcessor *> getFilters() const;
    void setFilters(const std::vector<AbstractImageProcessor *> &value);
    cv::Mat applyFilters(cv::Mat dst) const;
};


#endif // OBJECTDETECTION_H
