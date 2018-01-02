#ifndef _ABSTRACTIMAGEPROCESSORIMPL_H
#define _ABSTRACTIMAGEPROCESSORIMPL_H
#include "ImageProcessor/abstractimageprocessor.h"
#include <headers.h>
#include <memory>

class ImageProcessor::AbstractImageProcessor::_AbstractImageProcessorImpl{
    cv::Mat _img;
    cv::Mat _dst;
public:
    cv::Mat getImg() const;
    cv::Mat getDst() const;
protected:

public:
    void setImg(const cv::Mat &img);
    void setDst(const cv::Mat &dst);

};


#endif // ABSTRACTIMAGEPROCESSOR_H
