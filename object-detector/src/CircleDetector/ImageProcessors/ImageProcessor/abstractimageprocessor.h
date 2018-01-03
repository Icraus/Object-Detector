#ifndef ABSTRACTIMAGEPROCESSOR_H
#define ABSTRACTIMAGEPROCESSOR_H

#include <QObject>
#include <headers.h>
#include <memory>
namespace ImageProcessor {
    class IMG_PROC_LIB AbstractImageProcessor;

}
class ImageProcessor::AbstractImageProcessor : public QObject
{
    Q_OBJECT
private:
    class _AbstractImageProcessorImpl;
    std::unique_ptr<_AbstractImageProcessorImpl> _pimpl;
//TODO add Decorator Pattern If Necessary
public:
    cv::Mat getImg() const;
    cv::Mat getDst() const;
    virtual QVariant processImage() = 0;
    virtual ~AbstractImageProcessor();

signals:
    void imageChanged(const cv::Mat& img);
    void dstChanged(const cv::Mat& img);
protected:
    AbstractImageProcessor(QObject *parent = nullptr);
public slots:
    virtual void setDst(const cv::Mat &dst);
    virtual void setImg(const cv::Mat &img);
};

#endif // ABSTRACTIMAGEPROCESSOR_H
