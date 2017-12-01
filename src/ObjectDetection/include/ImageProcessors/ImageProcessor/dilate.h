#ifndef DILATE_H
#define DILATE_H

#include "ImageProcessor/abstractimageprocessor.h"

#include <QObject>
#include <headers.h>
namespace ImageProcessor {
#ifdef IMAGEPROCESSORS_LIBRARY
    class IMAGEPROCESSORSSHARED_EXPORT Dilate;
#else
    class Dilate;
#endif
}
using namespace ImageProcessor;

class ImageProcessor::Dilate : public AbstractImageProcessor
{
    Q_OBJECT
private:
    class _DilateImpl;
    std::unique_ptr<_DilateImpl> _pimpl;
public:
    explicit Dilate(QObject *parent = nullptr);
    void dialteImg();
    int getDilationSize() const;
    virtual ~Dilate();
    cv::MorphShapes getShap() const;

signals:

public slots:
    void setDilationSize(int value);
    void setShap(const cv::MorphShapes &value);

    // ImageProcessor::AbstractImageProcessor interface
public:
    virtual QVariant processImage() override;
};

#endif // DILATE_H
