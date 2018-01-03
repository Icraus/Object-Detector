#include "objectdetection.h"
#include "impl/objectdetectionimpl.h"
using namespace cv;
using namespace ImageProcessor;

ObjectDetection::ObjectDetection(QObject *parent) : AbstractImageProcessor(parent),
    _pimpl {INIT_UNIQUE_PTR(_ObjectDetectionImpl, this)}
{
}

Dilate *ObjectDetection::getDiler() const
{
    return _pimpl->getDiler();

}

DetectColor *ObjectDetection::getColDetector() const
{
    return _pimpl->getColDetector();
}

DetectCircle *ObjectDetection::getCirDetector() const
{
    return _pimpl->getCirDetector();
}

std::vector<Vec3f> ObjectDetection::getCircles()
{
    return _pimpl->getCircles();
}

void ObjectDetection::setCirDetector(DetectCircle *cirDetector)
{
    _pimpl->setCirDetector(cirDetector);
}

void ObjectDetection::setDiler(Dilate *diler)
{
    _pimpl->setDiler(diler);
}

void ObjectDetection::setColDetector(DetectColor *colDetector)
{
    _pimpl->setColDetector(colDetector);
}

void ObjectDetection::addFilter(ImageProcessor::AbstractImageProcessor *proc)
{
    _pimpl->addFilter(proc);
}

std::vector<ImageProcessor::AbstractImageProcessor *> ObjectDetection::getFilters() const
{
    return _pimpl->getFilters();
}

void ObjectDetection::setFilters(const std::vector<ImageProcessor::AbstractImageProcessor *> &value)
{
    _pimpl->setFilters(value);
}

QVariant ObjectDetection::getResults() const
{
   return _pimpl->getResults();
}

void ObjectDetection::setResults(QVariant res)
{
    _pimpl->setResults(res);
}

Mat ObjectDetection::applyFilters(Mat dst) const
{
    return _pimpl->applyFilters(dst);
}
ObjectDetection::~ObjectDetection()
{

}

QVariant ObjectDetection::processImage()
{
    return _pimpl->processImage();
}
