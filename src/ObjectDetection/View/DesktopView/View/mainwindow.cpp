#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QColorDialog>
#include <ImageProcessor/objectdetection.h>
#include <Utilities/utils.h>
#include <QListView>
#include <QSerialPortInfo>
#include <QStringListModel>
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

    QList<QSerialPortInfo> ports = QSerialPortInfo::availablePorts();
    for(auto i : ports)
    {
        ls << i.systemLocation();
    }
    model.setStringList(ls);
    ui->listView->setModel(&model);
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
    detector.setCircleColor(Utils::toScalar(color));
}

void MainWindow::on_pushButton_2_clicked()
{
    cv::Scalar maxCol(ui->hMaxSlider->value(), ui->sMaxSlider->value(), ui->vMaxSlider->value());
    detector.setMaxColor(maxCol);
}

void MainWindow::on_pushButton_clicked()
{
     cv::Scalar minCol(ui->hMinSlider->value(), ui->sMinSlider->value(), ui->vMinSlider->value());
    detector.setMinColor(minCol);
}

void MainWindow::setXYR(int x, int y, int r)
{
    QString s = QString("(%1, %2, %3)").arg(x).arg(y).arg(r);
    ui->xCenterLabel->setText(QString("x: ") + toString(x));
    ui->yLabelCenter->setText(QString("y: ") + toString(y));
    ui->radiusLabel->setText(QString("R: ") + toString(r));
    if(!_port.isOpen() || !_port.isWritable())
        return;
    _port.write(s.toLocal8Bit().data());
}

void MainWindow::on_pushButton_4_clicked()
{
    QString le = ui->listView->currentIndex().data().toString();
    _port.setPortName(le);
    _port.open(QIODevice::WriteOnly);
}


void MainWindow::on_circleThicknessSlider_valueChanged(int value)
{
    detector.setThickness(value);
}
