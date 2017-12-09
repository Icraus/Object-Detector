#include "objectdetection.h"
using namespace cv;
using namespace ImageProcessor;
class ObjectDetection::_ObjectDetectionImpl
{
private:
    DetectCircle *_cirDetector;
    DetectColor *_colDetector;
    Dilate *_diler;
    ObjectDetection *const _ptr;
    QVariant results;
    std::vector<AbstractImageProcessor*> _filters;
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
};

ObjectDetection::ObjectDetection(QObject *parent) : AbstractImageProcessor(parent),
    _pimpl {std::make_unique<_ObjectDetectionImpl>(this)}
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
    return _pimpl->setResults(res);
}

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


ObjectDetection::~ObjectDetection()
{

}


QVariant ObjectDetection::processImage()
{
    return _pimpl->processImage();
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


