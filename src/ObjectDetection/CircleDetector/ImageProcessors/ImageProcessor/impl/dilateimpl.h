#ifndef DILATEIMPL_H
#define DILATEIMPL_H

#include "ImageProcessor/Dilate.h"

#include <QObject>
#include <headers.h>
class ImageProcessor::Dilate::_DilateImpl{
    cv::MorphShapes shap = cv::MORPH_RECT;
    int dilationSize = 4;
    Dilate *const _ptr;
public:
    _DilateImpl(Dilate *const);
    int getDilationSize() const;
    void setDilationSize(int value);
    cv::MorphShapes getShap() const;
    void setShap(const cv::MorphShapes &value);
    void dilateImg();
    QVariant processImage();
};
#endif // DILATE_H
