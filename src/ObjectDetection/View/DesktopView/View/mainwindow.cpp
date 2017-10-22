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
    connect(&detector, SIGNAL(xyrChanged(int,int,int)), this, SLOT(setXYR(int, int, int)));
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
        ui->label->setPixmap(QPixmap::fromImage(detector.detectObject(t)));
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

void MainWindow::setXYR(int x, int y, int r)
{
    ui->xCenterLabel->setText(toString(x));
    ui->yLabelCenter->setText(toString(y));
    ui->radiusLabel->setText(toString(r));

}
