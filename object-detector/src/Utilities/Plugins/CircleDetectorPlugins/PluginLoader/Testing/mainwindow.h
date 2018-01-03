#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <opencv2/core/mat.hpp>

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
private:
    QPixmap pix = QPixmap("E:\\1.png");
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
