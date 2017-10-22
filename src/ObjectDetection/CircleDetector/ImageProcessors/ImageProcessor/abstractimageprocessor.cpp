#include "abstractimageprocessor.h"
using namespace ImageProcessor;
class AbstractImageProcessor::_AbstractImageProcessorImpl{
    cv::Mat _img;
    cv::Mat _dst;
public:
    cv::Mat getImg() const;
    cv::Mat getDst() const;

public slots:
    virtual void setImg(const cv::Mat &img);
    virtual void setDst(const cv::Mat &dst);

};

AbstractImageProcessor::AbstractImageProcessor(QObject *parent) : QObject(parent),
    _pimpl(std::make_unique<AbstractImageProcessor::_AbstractImageProcessorImpl>())
{

}
cv::Mat AbstractImageProcessor::getDst() const
{
    return _pimpl->getDst();
}

void AbstractImageProcessor::setDst(const cv::Mat &dst)
{
    _pimpl->setDst(dst);
    emit dstChanged(dst);
}

cv::Mat AbstractImageProcessor::getImg() const
{
    return _pimpl->getImg();
}

AbstractImageProcessor::~AbstractImageProcessor()
{

}

void AbstractImageProcessor::setImg(const cv::Mat &img)
{
    _pimpl->setImg(img);
    emit imageChanged(img);

}


cv::Mat AbstractImageProcessor::_AbstractImageProcessorImpl::getImg() const
{
    return _img.clone();
}

cv::Mat AbstractImageProcessor::_AbstractImageProcessorImpl::getDst() const
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
