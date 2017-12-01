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
/*!
 * \brief returns the dilation Size
 * \return
 */
int Dilate::getDilationSize() const
{
    return _pimpl->getDilationSize();
}

Dilate::~Dilate()
{

}
/*! \brief sets the Dilation Size of the Morphological Operation
 *
 */

void Dilate::setDilationSize(int value)
{
    _pimpl->setDilationSize(value);
}

cv::MorphShapes Dilate::getShap() const
{
    return _pimpl->getShap();
}
/*!
 * \brief sets The Shape of the Dialtion pixels
 *
 * \param enum of cv::MorphShapes.
 * \sa ImageProcessor::Dilate.
 */
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

/*! \class ImageProcessor::Dilate
 *
 * \brief this Class is used to perform morphological dilate operation on image see <a href="https://docs.opencv.org/trunk/d9/d61/tutorial_py_morphological_ops.html">Morphological Operation</a>.
 * \note the image must be binary (black and white) and in grayscale.
 *
 * \code
 *  ImageProcessor::Dialte dial{this};
 * dial.setImg(cv::imread(BINARY_IMG_PATH));
 * dial.processImage();
 * auto dst = dial.getDst();
 * cv::imshow("window", dst);
 * cv::waitKey(0);
 * \endcode
 *
 * \todo add Other Morphological Operations like erode.
 */
