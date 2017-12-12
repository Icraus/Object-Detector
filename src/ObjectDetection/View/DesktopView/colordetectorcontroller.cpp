#include "colordetectorcontroller.h"


ColorDetectorController::ColorDetectorController(QObject *parent) : QObject(parent)
{
    pro = new ObjectDetection(this);
    auto processor = qobject_cast<ObjectDetection*>(pro);
    connect(this , SIGNAL(dilationSizeChanged(int)), processor->getDiler(), SLOT(setDilationSize(int)));
    connect(this , SIGNAL(maxColorChanged(cv::Scalar)), processor->getColDetector(), SLOT(setMaxColor(cv::Scalar)));
    connect(this , SIGNAL(minColorChanged(cv::Scalar)), processor->getColDetector(), SLOT(setMinColor(cv::Scalar)));
    connect(this , SIGNAL(param1Changed(int)), processor->getCirDetector(), SLOT(setParam1(int)));
    connect(this , SIGNAL(param2Changed(int)), processor->getCirDetector(), SLOT(setParam2(int)));
    connect(this , SIGNAL(minDistChanged(int)), processor->getCirDetector(), SLOT(setMinDist(int)));

}


int ColorDetectorController::getMinDist() const
{
    return minDist;
}

void ColorDetectorController::setMinDist(int value)
{
    minDist = value;
    emit minDistChanged(value);
}

ImageProcessor::AbstractImageProcessor *ColorDetectorController::getPro() const
{
    return pro;
}

void ColorDetectorController::setPro(ImageProcessor::AbstractImageProcessor *value)
{
    pro = value;
}

void ColorDetectorController::addFilter()
{
    auto processor = qobject_cast<ObjectDetection*>(getPro());
    Dilate *dil = new Dilate(this);
    processor->addFilter(dil);
}

int ColorDetectorController::getThickness() const
{
    return thickness;
}

void ColorDetectorController::setThickness(int value)
{
    thickness = std::max(std::max(1, value), std::min(value, 20));
}

cv::Scalar ColorDetectorController::getCircleColor() const
{
    return circleColor;
}

void ColorDetectorController::setCircleColor(const cv::Scalar &value)
{
    circleColor = value;
}


int ColorDetectorController::getParam2() const
{
    return param2;
}

void ColorDetectorController::setParam2(int value)
{
    param2 = value;
    emit param2Changed(value);

}

int ColorDetectorController::getParam1() const
{
    return param1;
}

void ColorDetectorController::setParam1(int value)
{
    param1 = value;
    emit param1Changed(value);

}



cv::Scalar ColorDetectorController::getMaxColor() const
{
    return maxColor;
}

void ColorDetectorController::setMaxColor(const cv::Scalar &value)
{
    maxColor = value;
    emit maxColorChanged(value);

}

QImage ColorDetectorController::detectObject(const cv::Mat &t)
{
    auto v = qobject_cast<ObjectDetection*>(getPro());
    v->setImg(t);
    this->colored = v->getColDetector()->getDst();
    this->dialted = v->getDiler()->getDst();
    std::vector<cv::Vec3f> vec = v->processImage().value<std::vector<cv::Vec3f>>();
    for(const cv::Vec3f& i : vec){
        emit xyrChanged(i[0], i[1], i[2]);
        cv::Point center(round(i[0]), round(i[1]));
        int radius = round(i[2]);
        cv::circle(t, center, radius, circleColor, thickness, 8, 0 );

    }



    return Utilities::Utils::toImage(t);
}

cv::Scalar ColorDetectorController::getMinColor() const
{
    return minColor;
}

void ColorDetectorController::setMinColor(const cv::Scalar &value)
{
    minColor = value;
    emit minColorChanged(value);
}


int ColorDetectorController::getDilationSize() const
{
    return dilationSize;
}

void ColorDetectorController::setDilationSize(int value)
{
    dilationSize = value;
    emit dilationSizeChanged(value);
}
