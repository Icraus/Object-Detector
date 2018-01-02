#ifndef DETECTCOLOR_H
#define DETECTCOLOR_H

#include "ImageProcessor/abstractimageprocessor.h"
//TODO Use PIMPL C++ Idiom
#include <QObject>
#include <headers.h>
namespace ImageProcessor {
class IMG_PROC_LIB DetectColor;
}
using namespace ImageProcessor;

class ImageProcessor::DetectColor : public AbstractImageProcessor
{
    Q_OBJECT
   private:
    class _DetectColorImpl;
    std::unique_ptr<_DetectColorImpl> _pimpl;
public:
    explicit DetectColor(QObject *parent = nullptr);
    void detectColor();
    cv::Scalar getMinColor() const;
    cv::Scalar getMaxColor() const;
    virtual ~DetectColor();
public slots:
    void setMinColor(const cv::Scalar &value);
    void setMaxColor(const cv::Scalar &value);
signals:


    // ImageProcessor::AbstractImageProcessor interface
public:
    virtual QVariant processImage() override;
};

#endif // DETECTCOLOR_H
