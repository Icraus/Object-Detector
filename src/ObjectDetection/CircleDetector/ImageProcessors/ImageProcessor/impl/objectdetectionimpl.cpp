#include "objectdetectionimpl.h"
using namespace cv;
using namespace ImageProcessor;

QVariant ObjectDetection::_ObjectDetectionImpl::getResults() const
{
    return results;
}

void ObjectDetection::_ObjectDetectionImpl::setResults(const QVariant &value)
{
    results = value;
}

std::vector<AbstractImageProcessor *> ObjectDetection::_ObjectDetectionImpl::getFilters() const
{
    return _filters;
}

void ObjectDetection::_ObjectDetectionImpl::setFilters(const std::vector<AbstractImageProcessor *> &value)
{
    _filters = value;
}

ObjectDetection::_ObjectDetectionImpl::_ObjectDetectionImpl(ObjectDetection * const ptr):
    _ptr{ptr}
{
    setCirDetector(new DetectCircle);
    setColDetector(new DetectColor);
    setDiler(new Dilate);
}

Dilate *ObjectDetection::_ObjectDetectionImpl::getDiler() const
{
    return _diler;
}

void ObjectDetection::_ObjectDetectionImpl::addFilter(AbstractImageProcessor *proc)
{
    _filters.push_back(proc);
}

void ObjectDetection::_ObjectDetectionImpl::setDiler(Dilate *diler)
{
    _diler = diler;
    _diler->setParent(_ptr);
}

DetectColor *ObjectDetection::_ObjectDetectionImpl::getColDetector() const
{
    return _colDetector;
}

void ObjectDetection::_ObjectDetectionImpl::setColDetector(DetectColor *colDetector)
{
    _colDetector = colDetector;
    _colDetector->setParent(_ptr);

}




QVariant ObjectDetection::_ObjectDetectionImpl::processImage()
{
    return QVariant::fromValue(getCircles());
}

DetectCircle *ObjectDetection::_ObjectDetectionImpl::getCirDetector() const
{
    return _cirDetector;
}

void ObjectDetection::_ObjectDetectionImpl::setCirDetector(DetectCircle *cirDetector)
{
    _cirDetector = cirDetector;
    _cirDetector->setParent(_ptr);

}

std::vector<Vec3f> ObjectDetection::_ObjectDetectionImpl::getCircles()
{
    //TODO add image Cache
    getColDetector()->setImg(_ptr->getImg());
    getColDetector()->processImage();
    auto dst = getColDetector()->getDst();

    for(AbstractImageProcessor *pro : _filters)
   {
       pro->setImg(dst);
       pro->processImage();
       dst = pro->getDst();
   }
    getDiler()->setImg(dst);
    getDiler()->processImage();
    dst = getDiler()->getDst();
    getCirDetector()->setImg(dst);
    QVariant var = getCirDetector()->processImage();
    setResults(var);
    return var.value<std::vector<cv::Vec3f>>();
}


