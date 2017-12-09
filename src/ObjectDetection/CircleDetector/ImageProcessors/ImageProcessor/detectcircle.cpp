#include "detectcircle.h"
#include "impl/detectcircleimpl.h"
using namespace ImageProcessor;

int DetectCircle::getMinDist() const
{
    return _pimpl->getMinDist();
}
/*!
 * \brief sets the minimum value between two circles
 * \param value
 * \sa ImageProcessor::DetectCircle::getMinDist
 */
void DetectCircle::setMinDist(int value)
{
    _pimpl->setMinDist(value);
}

int DetectCircle::getParam2() const
{
    return _pimpl->getParam2();
}

void DetectCircle::setParam2(int value)
{
    _pimpl->setParam2(value);
}

int DetectCircle::getParam1() const
{
    return _pimpl->getParam1();
}

void DetectCircle::setParam1(int value)
{
    _pimpl->setParam1(value);
}
/*!
 * \brief reimplemented Function.
 * \details this function is reimplented to process a thresholded image of grayscale type to Detect All Cirlces.
 * \sa ImageProcessor::AbstractImageProcessor::processImage
 * \return std::vector<cv::Vec3f> a vector of cv::Vec3f where each index in it represents a circle which centers are x, y and radius.
 * \code
 * using circleVec = std::vector<cv::Vec3f>;
 * auto i = circleDetector.processImage().value<circleVec>();
 * for(auto a : i){
 *      qDebug() << "x = " << a[0] << ", y = " << a[1] << ", r = " << a[2]; //should iterate on each element and prints it's x, y, and radius.
 * }
 * \endcode
 */
QVariant DetectCircle::processImage()
{
    return _pimpl->processImage();
}

DetectCircle::DetectCircle(QObject *parent) : AbstractImageProcessor(parent),
    _pimpl{std::make_unique<DetectCircle::_DetectCircleImpl>(this)}
{

}
/*!
 * \brief this helper Function is used to detect circles in an Image using HoughCircle Algorithm.
 * \return a vector of 3 points vector each represents the x, y, r of all circles in the image.
 * \sa ImageProcessor::DetectCirlce::processImage.
 */
std::vector<cv::Vec3f> DetectCircle::detectCircle() const{
    return _pimpl->detectCircle();
}

DetectCircle::~DetectCircle()
{

}


/*! \class ImageProcessor::DetectCircle
 *  \brief this class is used To Detect circles in an image
 * \details using this class you can detect x, y and radius of a circle in an image after calling DetectColor::processImage
 * there are many possible ways to get The output for example you can connect the signal
 * ImageProcessor::DetectCircle::circlesDetected to any QObject Slot that takes std::vector<cv::Vec3f> as a parameter
 * another way is to use the return of processImage and convert the QVarient to std::vector<cv::Vec3f>
 *  \code
 *  connect(crcleDetector, &DetectCircle::circlesDetected, [=](const std::vector<cv::Vec3f>& vec){
 *      for_each(vec.begin(), vec.end(), [](cv::Vec3f v){ qDebug() << v[0] << ", " << v[1] << ", " << v[2];});
 * });
 *  std::vector<cv::Vec3f> vec = crcleDetector.processImage().value<std::vector<cv::Vec3f>>(); //and prints each x, y, r of every circle.
 * \endcode
 * \sa ImageProcessor::DetectCircle::circlesDetected
 */

/*! \fn ImageProcessor::DetectCircle::circlesDetected
 * \brief this signal is emitted after detecting All the circles in the image being processed.
 * \details can Be connected with other objects to get the circles in an image.
 *
 * \code
 * connect(crcleDetector, &DetectCircle::circlesDetected, [=](const std::vector<cv::Vec3f>& vec){
 *      for_each(vec.begin(), vec.end(), [](cv::Vec3f v){ qDebug() << v[0] << ", " << v[1] << ", " << v[2];});
 * }; //prints each x, y, r of every circle.
 * \endcode
 */
