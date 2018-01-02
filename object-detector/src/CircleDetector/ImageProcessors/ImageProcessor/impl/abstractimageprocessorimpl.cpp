#include "abstractimageprocessorimpl.h"
#include <iostream>
using namespace ImageProcessor;
	
cv::Mat AbstractImageProcessor::_AbstractImageProcessorImpl::getImg() const
{
    return _img.clone();
}

cv::Mat AbstractImageProcessor::_AbstractImageProcessorImpl::getDst()const
{
    return _dst.clone();
}



void AbstractImageProcessor::_AbstractImageProcessorImpl::setImg(const cv::Mat &img)
{
    _img = img;
}

void AbstractImageProcessor::_AbstractImageProcessorImpl::setDst(const cv::Mat &dst)
{
    _dst = dst;
}

