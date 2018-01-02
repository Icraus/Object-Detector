#include "dilateimpl.h"
using namespace ImageProcessor;

Dilate::_DilateImpl::_DilateImpl(Dilate *const ptr) :_ptr{ ptr }
{

}

int Dilate::_DilateImpl::getDilationSize() const
{
    return dilationSize;
}

void Dilate::_DilateImpl::setDilationSize(int value)
{
    dilationSize = value;
}

cv::MorphShapes Dilate::_DilateImpl::getShap() const
{
    return shap;
}

void Dilate::_DilateImpl::setShap(const cv::MorphShapes &value)
{
    shap = value;
}

void Dilate::_DilateImpl::dilateImg()
{
    cv::Mat temp;
    cv::Mat element = getStructuringElement(getShap(),
                                            cv::Size( 2 * getDilationSize() + 1, 2 * getDilationSize() + 1 ),
                                            cv::Point( getDilationSize(), getDilationSize() ) );
    cv::dilate( _ptr->getImg(), temp, element);
    _ptr->setDst(temp);
}

QVariant Dilate::_DilateImpl::processImage()
{
    dilateImg();
    return QVariant();
}
