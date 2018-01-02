#ifndef UTILS_H
#define UTILS_H

#include <QObject>
#include "headers.h"
#include <QColor>
#include <QImage>
namespace Utilities {
    class Utils;
}
using namespace Utilities;
class Utilities::Utils : public QObject
{
    Q_OBJECT
public:
    explicit Utils(QObject *parent = nullptr);
    static cv::Scalar toScalar(QColor color);
    static std::tuple<cv::Scalar, cv::Scalar> toRange(QColor color);
    static QImage toImage(const cv::Mat &m);
signals:

public slots:
};

#endif // UTILS_H
