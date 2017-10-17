#include "objectdetection.h"
#include <QImage>
using namespace cv;
using namespace ImageProcessor;
ObjectDetection::ObjectDetection(QObject *parent) : AbstractImageProcessor(parent)
{
    setCirDetector(new DetectCircle);
    setColDetector(new DetectColor);
    setDiler(new Dilate);
    connect(this , SIGNAL(dilationSizeChanged(int)), getDiler(), SLOT(setDilationSize(int)));
    connect(this , SIGNAL(maxColorChanged(cv::Scalar)), getColDetector(), SLOT(setMaxColor(cv::Scalar)));
    connect(this , SIGNAL(minColorChanged(cv::Scalar)), getColDetector(), SLOT(setMinColor(cv::Scalar)));
    connect(this , SIGNAL(param1Changed(int)), getCirDetector(), SLOT(setParam1(int)));
    connect(this , SIGNAL(param2Changed(int)), getCirDetector(), SLOT(setParam2(int)));
    connect(this , SIGNAL(minDistChanged(int)), getCirDetector(), SLOT(setMinDist(int)));


}



Dilate *ObjectDetection::getDiler() const
{
    return _diler;
}

void ObjectDetection::setDiler(Dilate *diler)
{
    _diler = diler;
    _diler->setParent(this);
    connect(this, &ObjectDetection::imageChanged, getDiler(), &DetectCircle::setImg);
}

DetectColor *ObjectDetection::getColDetector() const
{
    return _colDetector;
}

void ObjectDetection::setColDetector(DetectColor *colDetector)
{
    _colDetector = colDetector;
    _colDetector->setParent(this);
    connect(this, &ObjectDetection::imageChanged, getColDetector(), &DetectCircle::setImg);

}

int ObjectDetection::getMinDist() const
{
    return minDist;
}

void ObjectDetection::setMinDist(int value)
{
    minDist = value;
    emit minDistChanged(value);
}

int ObjectDetection::getParam2() const
{
    return param2;
}

void ObjectDetection::setParam2(int value)
{
    param2 = value;
    emit param2Changed(value);

}

int ObjectDetection::getParam1() const
{
    return param1;
}

void ObjectDetection::setParam1(int value)
{
    param1 = value;
    emit param1Changed(value);

}



cv::Scalar ObjectDetection::getMaxColor() const
{
    return maxColor;
}

void ObjectDetection::setMaxColor(const cv::Scalar &value)
{
    maxColor = value;
    emit maxColorChanged(value);

}

cv::Scalar ObjectDetection::getMinColor() const
{
    return minColor;
}

void ObjectDetection::setMinColor(const cv::Scalar &value)
{
    minColor = value;
    emit minColorChanged(value);
}

void ObjectDetection::setImg(const Mat &img)
{
    AbstractImageProcessor::setImg(img);
    emit imageChanged(img);
}

DetectCircle *ObjectDetection::getCirDetector() const
{
    return _cirDetector;
}

void ObjectDetection::setCirDetector(DetectCircle *cirDetector)
{
    _cirDetector = cirDetector;
    _cirDetector->setParent(this);
    connect(this, &ObjectDetection::imageChanged, getCirDetector(), &DetectCircle::setImg);

}

std::vector<Vec3f> ObjectDetection::getCircles()
{

    colored = getColDetector()->detectColor();
    setImg(colored);
    dialted = getDiler()->dialteImg();
    emit AbstractImageProcessor::imageChanged(dialted);
    return getCirDetector()->detectCircle();
}


int ObjectDetection::getDilationSize() const
{
    return dilationSize;
}

void ObjectDetection::setDilationSize(int value)
{
    dilationSize = value;
    emit dilationSizeChanged(value);
}

