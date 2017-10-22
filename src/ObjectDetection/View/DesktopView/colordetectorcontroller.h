#ifndef COLORDETECTORCONTROLLER_H
#define COLORDETECTORCONTROLLER_H

#include <QObject>
#include "ImageProcessor/abstractimageprocessor.h"
#include "ImageProcessor/objectdetection.h"
#include <QImage>
#include "Utilities/utils.h"
class ColorDetectorController : public QObject
{
    Q_OBJECT
public:
    explicit ColorDetectorController(QObject *parent = nullptr);
    cv::Mat colored;
    cv::Mat dialted;
    int getDilationSize() const;
    int getThickCircle() const;
    cv::Scalar getMinColor() const;
    cv::Scalar getMaxColor() const;
    int getParam1() const;
    int getParam2() const;
    int getMinDist() const;
public slots:
    void setParam1(int value);
    void setParam2(int value);
    void setMinDist(int value);

    ImageProcessor::AbstractImageProcessor *getPro() const;
    void setPro(ImageProcessor::AbstractImageProcessor *value);

signals:
    void dilationSizeChanged(int);
    void minColorChanged(const cv::Scalar&);
    void maxColorChanged(const cv::Scalar&);
    void param1Changed(int);
    void param2Changed(int);
    void minDistChanged(int);
    void xyrChanged(int, int, int);

private:
    cv::Scalar circleColor = cv::Scalar(0, 255, 0);
    cv::Scalar minColor;
    cv::Scalar maxColor;
    int param1, param2, minDist, dilationSize;
    ImageProcessor::AbstractImageProcessor *pro;
public slots:
    void setDilationSize(int value);
    void setMinColor(const cv::Scalar &value);
    void setMaxColor(const cv::Scalar &value);
    QImage detectObject(const cv::Mat &t);

signals:

public slots:
};

#endif // COLORDETECTORCONTROLLER_H
