#include "utils.h"
using namespace Utilities;
Utils::Utils(QObject *parent) : QObject(parent)
{

}

cv::Scalar Utils::toScalar(QColor color)
{
   return cv::Scalar(color.red(), color.green(), color.blue());

}

std::tuple<cv::Scalar, cv::Scalar> Utils::toRange(QColor color)
{
    return std::make_tuple(cv::Scalar((color.hue() * 180.0/ 255.0) - 20, color.saturation() -50, color.saturation() - 50), cv::Scalar((color.hue() * 180.0/ 255.0) - 20, 255, 255));
}

QImage Utils::toImage(const cv::Mat &m)
{
    cv::Mat temp;
    if(m.type() == CV_8UC3){
        cv::cvtColor(m, temp, cv::COLOR_BGR2RGB);
        return QImage(m.data, m.cols, m.rows, m.step, QImage::Format_RGB888).rgbSwapped();
    }else {
        return QImage(m.data, m.cols, m.rows, m.step, QImage::Format_Grayscale8);

    }
}
