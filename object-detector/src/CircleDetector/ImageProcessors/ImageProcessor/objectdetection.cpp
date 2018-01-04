#include "objectdetection.h"
#include "impl/objectdetectionimpl.h"
using namespace cv;
using namespace ImageProcessor;
/*!
 * \brief ObjectDetection::ObjectDetection
 * \param parent
 */
ObjectDetection::ObjectDetection(QObject *parent) : AbstractImageProcessor(parent),
    _pimpl {INIT_UNIQUE_PTR(_ObjectDetectionImpl, this)}
{
}
/*!
 * \brief ObjectDetection::getDiler
 * \return an ImageProcessor::Dilate pointer to object
 */
Dilate *ObjectDetection::getDiler() const
{
    return _pimpl->getDiler();

}
/*!
 * \brief ObjectDetection::getColDetector
 * \return a pointer to the ImageProcessor::DetectColor used to detect colors
 */
DetectColor *ObjectDetection::getColDetector() const
{
    return _pimpl->getColDetector();
}
/*!
 * \brief ObjectDetection::getCirDetector
 * \return a pointer to ImageProcessor::DetectCircle used to to detect circles
 */
DetectCircle *ObjectDetection::getCirDetector() const
{
    return _pimpl->getCirDetector();
}
/*!
 * \brief ObjectDetection::getCircles
 * \return returns the std::vector<cv::Vec3f> which encapsulate the data about circles like x,y and radius
 */
std::vector<Vec3f> ObjectDetection::getCircles()
{
    return _pimpl->getCircles();
}
/*!
 * \brief ObjectDetection::setCirDetector sets the circleDetector
 * \param cirDetector
 *
 */
void ObjectDetection::setCirDetector(DetectCircle *cirDetector)
{
    _pimpl->setCirDetector(cirDetector);
}
/*!
 * \brief ObjectDetection::setDiler sets the dilate object
 * \param diler
 */
void ObjectDetection::setDiler(Dilate *diler)
{
    _pimpl->setDiler(diler);
}

void ObjectDetection::setColDetector(DetectColor *colDetector)
{
    _pimpl->setColDetector(colDetector);
}
/*!
 * \brief ObjectDetection::addFilter adds a filter from a plugin
 * \sa CircleDetectorPlugins::ImageProcessorPluginIFace
 * \param proc
 */
void ObjectDetection::addFilter(PluginSharedPointer proc)
{
    _pimpl->addFilter(proc);
}

std::vector<PluginSharedPointer> ObjectDetection::getFilters() const
{
    return _pimpl->getFilters();
}

void ObjectDetection::setFilters(const std::vector<PluginSharedPointer> &value)
{
    _pimpl->setFilters(value);
}

QVariant ObjectDetection::getResults() const
{
   return _pimpl->getResults();
}

void ObjectDetection::setResults(QVariant res)
{
    _pimpl->setResults(res);
}
/*!
 * \brief ObjectDetection::applyFilters applies filters to the image
 * \throws cv::Excpetion
 * \warning neither exception safe nor thread safe
 * \param dst
 * \return
 */
Mat ObjectDetection::applyFilters(Mat dst) const
{
    return _pimpl->applyFilters(dst);
}
ObjectDetection::~ObjectDetection()
{

}

QVariant ObjectDetection::processImage()
{
    return _pimpl->processImage();
}
/*! \class ImageProcessor::ObjectDetection
 *  \brief this class is used to detect a a colored circle object(s)
 * \details the class first thresholds the image to get the colored object using cv::threshold algorthim so you must supply a max and min colors as cv::Scalar using ImageProcessor::DetectColor
 *  after detecting color it applies a Morphological operation (dilation) using cv::Dilate algorthim and guassian blur to decrease the noise using cv::GuassianBlur using ImageProcssor::Dilate
 * then applies filters using Plugins CircleDetectorPlugins::ImageProcessorPluginIFace
 *  then detect Circles using cv::HoughCircles ImageProcessor::DetectCircle
 * \code
 *  ImageProcessor::ObjectDetection objdet;
 *  objdet.setImg(cv::imread(IMG_PATH));
 *  auto var = objdet.processImage();
 *  auto vec = var.value<std::vector<cv::Vec3f>>(); //or use var.getResults();
 * for(auto i : vec){
 *      cout << "x: " << i[0] << " y:" << i[1] << " radius: " << i[2] << endl;
 * }
 * \endcode
 *  \author Mohamed Khaled
 * \version 5.0
 *
 */
