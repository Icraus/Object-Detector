#ifndef ABSTRACTIMAGEPROCESSOR_H
#define ABSTRACTIMAGEPROCESSOR_H

#include <QObject>
#include <headers.h>
namespace ImageProcessor {
    class AbstractImageProcessor;
}
class ImageProcessor::AbstractImageProcessor : public QObject
{
    Q_OBJECT

public:
    cv::Mat getImg() const;

signals:
    void imageChanged(const cv::Mat& img);
private:
    cv::Mat _img;
protected:
    AbstractImageProcessor(QObject *parent = nullptr);
public slots:
    virtual void setImg(const cv::Mat &img);
};

#endif // ABSTRACTIMAGEPROCESSOR_H
