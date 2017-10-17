#ifndef DILATE_H
#define DILATE_H

#include "ImageProcessor/abstractimageprocessor.h"

#include <QObject>
#include <headers.h>
namespace ImageProcessor {
    class Dilate;
}
using namespace ImageProcessor;

class ImageProcessor::Dilate : public AbstractImageProcessor
{
    Q_OBJECT
    cv::MorphShapes shap = cv::MORPH_RECT;
    int dilationSize = 4;

public:
    explicit Dilate(QObject *parent = nullptr);
    cv::Mat dialteImg()const;
    int getDilationSize() const;

    cv::MorphShapes getShap() const;

signals:

public slots:
    void setDilationSize(int value);
    void setShap(const cv::MorphShapes &value);
};

#endif // DILATE_H
