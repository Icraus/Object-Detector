#ifndef OBJECTDETECTION_H
#define OBJECTDETECTION_H

#include <QObject>
#include <headers.h>
#include <ImageProcessor/detectcircle.h>
#include <ImageProcessor/detectcolor.h>
#include <ImageProcessor/abstractimageprocessor.h>
#include <ImageProcessor/dilate.h>
#include "imageprocessorpluginiface.h"
namespace ImageProcessor {
    class IMG_PROC_LIB ObjectDetection;

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
    QVariant getResults() const;

    virtual ~ObjectDetection();
public slots:
    void setCirDetector(DetectCircle *cirDetector);
    void setDiler(Dilate *diler);
    void setColDetector(DetectColor *colDetector);
    void addFilter(PluginSharedPointer proc);
    //TODO void removeFilter(AbstractImageProcessor *proc);
    std::vector<PluginSharedPointer> getFilters() const;
    void setFilters(const std::vector<PluginSharedPointer> &value);

protected:
    void setResults(QVariant res);
    cv::Mat applyFilters(cv::Mat dst) const;
    // ImageProcessor::AbstractImageProcessor interface
public:
    virtual QVariant processImage() override;
};

#endif // OBJECTDETECTION_H
