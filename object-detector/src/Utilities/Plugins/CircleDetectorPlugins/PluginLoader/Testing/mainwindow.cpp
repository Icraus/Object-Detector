#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <circledetecorpluginloaderview.h>
#include "circledetectorpluginmodel.h"
#include "opencv2/core.hpp"
#include "opencv2/world.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    CircleDetecorPluginLoaderView *view = new CircleDetecorPluginLoaderView;
    ui->gridLayout->addWidget(view, 0, 1);
    cv::Mat m = cv::imread("E:\\j.png", 0);
    QAbstractItemModel *model = view->view()->model();
    auto p = model->index(0, 0).data(CircleDetectorPluginModel::FILTER).value<QSharedPointer<CircleDetectorPlugins::ImageProcessorPluginIFace>>();
    m = (p)->filter(m);
    ui->label->setPixmap(QPixmap::fromImage(toImage(m)));
}

QImage MainWindow::toImage(const cv::Mat &m)
{
    cv::Mat temp;
    if(m.type() == CV_8UC3){
        cv::cvtColor(m, temp, cv::COLOR_BGR2RGB);
        return QImage(m.data, m.cols, m.rows, m.step, QImage::Format_RGB888).rgbSwapped();
    }else {
        return QImage(m.data, m.cols, m.rows, m.step, QImage::Format_Grayscale8);

    }
}
MainWindow::~MainWindow()
{
    delete ui;
}
