#ifndef OBJECTDETECTORBUILDER_H
#define OBJECTDETECTORBUILDER_H

#include "ImageProcessor/objectdetection.h"
#include <QObject>
namespace ImageProcessor {
#ifdef IMAGEPROCESSORS_LIBRARY
    class IMAGEPROCESSORSSHARED_EXPORT ObjectDetectorBuilder;
#else
    class ObjectDetectorBuilder;
#endif
}
namespace imgproc = ImageProcessor;
class ImageProcessor::ObjectDetectorBuilder : public QObject
{
    Q_OBJECT
private:
    class _ObjectDetectorBuilderImpl;
    std::unique_ptr<_ObjectDetectorBuilderImpl> _pimpl;
public:
    virtual ~ObjectDetectorBuilder();
    explicit ObjectDetectorBuilder(QObject *parent = nullptr);
    void addFilter(imgproc::AbstractImageProcessor *proc);
    std::unique_ptr<ObjectDetection> build();
signals:

public slots:
};

#endif // OBJECTDETECTORBUILDER_H
