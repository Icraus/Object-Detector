#ifndef DILATE_H
#define DILATE_H

#include "ImageProcessor/abstractimageprocessor.h"

#include <QObject>
#include <headers.h>
namespace ImageProcessor {
    class IMG_PROC_LIB Dilate;
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
