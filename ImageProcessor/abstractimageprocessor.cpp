#include "abstractimageprocessor.h"
using namespace ImageProcessor;
AbstractImageProcessor::AbstractImageProcessor(QObject *parent) : QObject(parent)
{

}
cv::Mat AbstractImageProcessor::getImg() const
{
    return _img.clone();
}

void AbstractImageProcessor::setImg(const cv::Mat &img)
{
    _img = img;
}
