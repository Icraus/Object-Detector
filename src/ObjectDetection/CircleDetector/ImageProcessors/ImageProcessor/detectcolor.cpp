#include "detectcolor.h"
#include "impl/detectcolorimpl.h"
using namespace ImageProcessor;
DetectColor::DetectColor(QObject *parent) : AbstractImageProcessor(parent),
    _pimpl{std::make_unique<_DetectColorImpl>(this)}
{

}
/*!
 * \brief returns the Minimum HSV Color space Of Threshold Detector
 * \return cv::Scalar
 */
cv::Scalar DetectColor::getMinColor() const
{
    return _pimpl->getMinColor();
}
/*!
 * \brief sets The Minimum hsv color for the Detector
 * \param cv::Scalar of the HSV Color
 */
void DetectColor::setMinColor(const cv::Scalar &value)
{
    _pimpl->setMinColor(value);
}
/*!
 * \brief returns the maximum HSV Color space Of Threshold Detector
 * \return cv::Scalar
 */
cv::Scalar DetectColor::getMaxColor() const
{
    return _pimpl->getMaxColor();
}

DetectColor::~DetectColor()
{

}
/*!
 * \brief sets The maximum hsv color for the Detector
 * \param cv::Scalar of the HSV Color
 */

void DetectColor::setMaxColor(const cv::Scalar &value)
{
    _pimpl->setMaxColor(value);
}

QVariant DetectColor::processImage()
{

    return _pimpl->processImage();
}
/*!
 * \brief Helper Function Used To Detect Color
 *
 * \todo parallize thresholding operationg.
 * \version 2.0
 */
void DetectColor::detectColor() {
   return _pimpl->detectColor();
}

/*! \class ImageProcessor::DetectColor
 *
 * \brief this class is used to Detect Color given it's range(min, max) of hsv colors.
 *
 * \note Default Color To Detect Is Yellow
 *
 * \code
 *    cv::Scalar minColor = cv::Scalar(20, 100, 100);
 *   cv::Scalar  maxColor = cv::Scalar(30, 255, 255); // detect Yellow Color
 *   ImageProcessor::DetectColor *proc = new DetectColor(nullptr);
 *   proc->setMaxColor(maxColor);
 *  proc->setMinColor(minColor);
 *  proc->processImage();
 *  auto img = proc->getDst();
 *  cv::nameWindow("window");
 *  cv::imshow("window", img);
 *  cv::waitKey(0);
 * \endcode
 *
 */
