#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "colordetectorcontroller.h"
#include <QMainWindow>
#include <QTimer>
#include <vector>
#include <ImageProcessor/objectdetection.h>
#include <QSerialPort>
#include <QStringListModel>
#include <tuple>
#include "opencv2/core.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QString toString(int x);

public slots:
    void getFrame();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();
    void setXYR(int x, int y, int r);
    void on_pushButton_4_clicked();

    void on_circleThicknessSlider_valueChanged(int value);

    void on_spinBox_valueChanged(int arg1);

    void on_pushButton_5_clicked();

private:
    ColorDetectorController detector;
    cv::VideoCapture cap;
    cv::Mat t;
    QStringListModel model;
    QStringList ls;
    QTimer timer;
    QSerialPort _port;
    Ui::MainWindow *ui;
    cv::Scalar circleColor = cv::Scalar(0,0,255);


};

#endif // MAINWINDOW_H
