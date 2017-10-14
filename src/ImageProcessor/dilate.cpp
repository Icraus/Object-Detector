#include "dilate.h"
using namespace ImageProcessor;
Dilate::Dilate(QObject *parent) : AbstractImageProcessor(parent)
{

}

int Dilate::getDilationSize() const
{
    return dilationSize;
}

void Dilate::setDilationSize(int value)
{
    dilationSize = value;
}

cv::MorphShapes Dilate::getShap() const
{
    return shap;
}

void Dilate::setShap(const cv::MorphShapes &value)
{
    shap = value;
}

cv::Mat Dilate::dialteImg() const{
    cv::Mat temp;
    cv::Mat element = getStructuringElement(cv::MORPH_RECT,
                                          cv::Size( 2 * getDilationSize() + 1, 2 * getDilationSize() + 1 ),
                                          cv::Point( getDilationSize(), getDilationSize() ) );
    cv::dilate( getImg(), temp, element);
    return temp;

}

