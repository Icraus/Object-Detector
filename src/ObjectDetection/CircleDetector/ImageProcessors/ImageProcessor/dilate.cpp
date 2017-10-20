#include "dilate.h"
using namespace ImageProcessor;
class Dilate::_DilateImpl{
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
Dilate::Dilate(QObject *parent) : AbstractImageProcessor(parent),
    _pimpl{std::make_unique<_DilateImpl>(this)}
{

}

int Dilate::getDilationSize() const
{
    return _pimpl->getDilationSize();
}

Dilate::~Dilate()
{

}

void Dilate::setDilationSize(int value)
{
    _pimpl->setDilationSize(value);
}

cv::MorphShapes Dilate::getShap() const
{
    return _pimpl->getShap();
}

void Dilate::setShap(const cv::MorphShapes &value)
{
    _pimpl->setShap(value);
}

QVariant Dilate::processImage()
{
    return _pimpl->processImage();
}

void Dilate::dialteImg(){
    _pimpl->dilateImg();

}


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
