#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <opencv2/core/mat.hpp>
#include "circledetectorpluginmodel.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QImage toImage(const cv::Mat &m);
public slots:
    void setFilter(PluginSharedPointer filter);
private:
    cv::Mat m;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
