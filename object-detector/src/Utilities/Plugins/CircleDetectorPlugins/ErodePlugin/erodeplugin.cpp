#include "erodeplugin.h"
#include <opencv2/imgproc.hpp>
namespace MorphoLogical {
    ErodePlugin::ErodePlugin(QObject *parent): QObject(parent)
    {

    }

    QString ErodePlugin::filterName() const
    {
        return "Erode Plugin";
    }

    cv::Mat ErodePlugin::filter(cv::Mat src) const
    {
        cv::Mat element = getStructuringElement(cv::MORPH_RECT,
                                                cv::Size(  2 * 4 + 1, 2 * 4 + 1 ),
                                                cv::Point( 4, 4 ) );
        cv::erode( src, src, element);
        return src;
    }

    QString ErodePlugin::filterDescription() const
    {
        return "Applies Erode Operation on Image( Must Be Black and white)";
    }

    QString ErodePlugin::author() const
    {
        return "Mohamed Khaled";

    }
}
