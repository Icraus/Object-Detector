#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QColorDialog>
#include <ImageProcessor/objectdetection.h>
#include <Utilities/utils.h>
#include <math.h>
using namespace Utilities;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    cap.open(0);
    timer.setInterval(33);
    connect(&timer, SIGNAL(timeout()), this,  SLOT(getFrame()));
    connect(ui->param1Slider, SIGNAL(sliderMoved(int)), &detector,SLOT(setParam1(int)));
    connect(ui->param2Slider, SIGNAL(sliderMoved(int)), &detector,SLOT(setParam2(int)));
    connect(ui->minDistSlider, SIGNAL(sliderMoved(int)), &detector,SLOT(setMinDist(int)));
    connect(ui->dilSlider, SIGNAL(sliderMoved(int)), &detector,SLOT(setDilationSize(int)));


    timer.start();
}
void MainWindow::getFrame(){
    if(cap.isOpened()){
        cap >> t;
        detector.setImg(t);
        std::vector<cv::Vec3f> vec = detector.getCircles();
        for(const cv::Vec3f& i : vec){
            ui->xCenterLabel->setText(toString(i[0]));
            ui->yLabelCenter->setText(toString(i[1]));
            ui->radiusLabel->setText(toString(i[2]));
            cv::Point center(round(i[0]), round(i[1]));
            int radius = round(i[2]);
            cv::circle(t, center, radius, circleColor, 3, 8, 0 );

        }
        ui->label->setPixmap(QPixmap::fromImage(Utils::toImage(t)));
        ui->label_2->setPixmap(QPixmap::fromImage(Utils::toImage(detector.colored)));
        ui->label_3->setPixmap(QPixmap::fromImage(Utils::toImage(detector.dialted)));

    }
}
QString MainWindow::toString(int x){
    return QString("%1").arg(x);
}

MainWindow::~MainWindow()
{
    cap.release();
    delete ui;
}


void MainWindow::on_pushButton_3_clicked()
{
    QColor color = QColorDialog::getColor(Qt::white, this);
    circleColor = Utils::toScalar(color);
}

void MainWindow::on_pushButton_2_clicked()
{
    QColor color = QColorDialog::getColor(Qt::white, this);
    detector.setMaxColor(Utils::toScalar(color));
}

void MainWindow::on_pushButton_clicked()
{
    QColor color = QColorDialog::getColor(Qt::white, this);
    detector.setMinColor(std::get<0>(Utils::toRange(color)));
    detector.setMaxColor(std::get<1>(Utils::toRange(color)));

}
