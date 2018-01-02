#include "objectdetectorbuilder.h"
using namespace ImageProcessor;
class ObjectDetectorBuilder::_ObjectDetectorBuilderImpl
{
    ObjectDetectorBuilder *_ptr;
    std::vector<imgproc::AbstractImageProcessor*> _processor;
public:
    _ObjectDetectorBuilderImpl(ObjectDetectorBuilder *ptr):_ptr{ptr}{}
    void addFilter(imgproc::AbstractImageProcessor *proc);
    std::unique_ptr<ObjectDetection> build();
};

ObjectDetectorBuilder::~ObjectDetectorBuilder()
{

}

ObjectDetectorBuilder::ObjectDetectorBuilder(QObject *parent) : QObject(parent)
    ,_pimpl{INIT_UNIQUE_PTR(_ObjectDetectorBuilderImpl, this)}
{

}

void ObjectDetectorBuilder::addFilter(imgproc::AbstractImageProcessor *proc)
{
    _pimpl->addFilter(proc);
}

std::unique_ptr<ObjectDetection> ObjectDetectorBuilder::build()
{
    return _pimpl->build();
}

void ObjectDetectorBuilder::_ObjectDetectorBuilderImpl::addFilter(imgproc::AbstractImageProcessor *proc)
{
    _processor.push_back(proc);
}

std::unique_ptr<ObjectDetection> ObjectDetectorBuilder::_ObjectDetectorBuilderImpl::build()
{
    auto obj = INIT_UNIQUE_PTR(ObjectDetection);
    obj->setFilters(_processor);
    return obj;
}
