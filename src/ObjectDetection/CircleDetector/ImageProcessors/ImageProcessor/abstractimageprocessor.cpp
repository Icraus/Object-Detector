#include "abstractimageprocessor.h"
#include <iostream>
using namespace ImageProcessor;

class AbstractImageProcessor::_AbstractImageProcessorImpl{
    cv::Mat _img;
    cv::Mat _dst;
public:
    cv::Mat getImg() const;
    cv::Mat getDst() const;
protected:

public slots:
    virtual void setImg(const cv::Mat &img);
    virtual void setDst(const cv::Mat &dst);

};

/*!
 * \brief accpets A pointer To the Parent Class For The Qt Meta-object Model See <a href="http://doc.qt.io/qt-5/metaobjects.html">Qt Meta-Object</a>
 * \param parent A QObject Object as a parent
 */
AbstractImageProcessor::AbstractImageProcessor(QObject *parent) : QObject(parent),
    _pimpl(std::make_unique<AbstractImageProcessor::_AbstractImageProcessorImpl>())
{

}


/*!
 * \brief returns A cv::Mat Object which represents the output of the image processing operation
 * \return cv::Mat
 */
cv::Mat AbstractImageProcessor::getDst()const
{
    return _pimpl->getDst();
}


/*!
 * \brief sets The output of the operation
 * \param dst
 */
void AbstractImageProcessor::setDst(const cv::Mat &dst)
{
    _pimpl->setDst(dst);
    emit dstChanged(dst);
}
/*!
 * \brief AbstractImageProcessor::getImg
 * \return cv::Mat \brief returns A copy of The Source Image uses cv::Mat::clone().
 * \b example:
 * \code
 * cv::Mat img = cv::imread(IMG_PATH);
 * imgproc.setImg(img);
 * cv::Mat img2 = imgproc.getImg(); //uses Deep Copy like img2 = img.clone();
 * \endcode
 */

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



/*! \namespace ImageProcessor
 * \brief Common Namespace for all Image Processor Algorithms
 * \author Mohamed Khaled
 * \sa ImageProcessor::AbstractImageProcessor
 *
 */

/*!
 * \class ImageProcessor::AbstractImageProcessor
 *
 * \brief The ImageProcessor::AbstractImageProcessor is an Abstract Base Class For All Image Processor Classes
 *
 * \details this Class Provides A Common Data Structure For All Image Processor Classes That Inherits From It
 *  The class Provides cv::Mat Img Variable Which is used as The Soruce Image and cv::Mat dst Varaible Which is the Destnation cv::Mat Object.
 * \note using getDst and getImg is using deep copy of image to avoid invalid access of member objects.
 *
 * \code
 * using namespace ImageProcessor;
 * std::unique_ptr<ImageProcessor::AbstractImageProcessor> imgproc = std::make_unique<ImageProcessor::DetectColor>(this);
 * imgproc->setImg(cv::imread(IMG_PATH));
 * connect(imgproc.get(), &AbstractImageProcessor::dstChanged,[=](const auto& img){qDebug() << "Image Changed";});
 * imgproc->processImage();
 * auto img = imgproc->getDst(); //returns cv::Mat and prints "Image Changed"
 * \endcode
 * \sa ImageProcessor
 * \todo add cv::Mat cache(may be using flyweight pattern) To avoid heavy copy of cv::Mat obejcts.
 */

/*! \fn ImageProcessor::AbstractImageProcessor::dstChanged
 * \brief this Signal Is Emited When the destnation cv::Mat Object Changed.
 *  \b example:
 * \code
 * using namespace ImageProcessor;
 * std::unique_ptr<ImageProcessor::AbstractImageProcessor> imgproc = std::make_unique<ImageProcessor::DetectColor>(this);
 * imgproc->setImg(cv::imread(IMG_PATH));
 * connect(imgproc.get(), &AbstractImageProcessor::dstChanged,[=](const auto& img){qDebug() << "Image Changed";});
 * imgproc->processImage();
 * auto img = imgproc->getDst(); //returns cv::Mat and prints "Image Changed"
 * \endcode
 */


/*! \fn ImageProcessor::AbstractImageProcessor::imageChanged
 * \brief this Signal Is Emited When the source cv::Mat Object Changed.
 */

/*! \fn ImageProcessor::AbstractImageProcessor::processImage
 * \brief Pure Virtual Function representes the operation to be done on the Image to be processed.
 * \throw cv::Exception. \brief  not garunteed to throw this exception
 * \warning not exception nor thread safe.
 * \return QVariant Object which represents the output of the processing operation and it doesn't have to be cv::Mat.
 */
