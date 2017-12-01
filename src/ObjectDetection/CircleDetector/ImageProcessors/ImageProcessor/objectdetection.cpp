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
public:
    _ObjectDetectionImpl(ObjectDetection *const ptr);
    Dilate *getDiler() const;
    DetectColor *getColDetector() const;
    DetectCircle *getCirDetector() const;
    std::vector<cv::Vec3f> getCircles();
    void setCirDetector(DetectCircle *cirDetector);
    void setDiler(Dilate *diler);
    void setColDetector(DetectColor *colDetector);


    QVariant processImage();
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
    getDiler()->setImg(getColDetector()->getDst());
    getDiler()->processImage();
    getCirDetector()->setImg(getDiler()->getDst());
    return getCirDetector()->processImage().value<std::vector<cv::Vec3f>>();
}


