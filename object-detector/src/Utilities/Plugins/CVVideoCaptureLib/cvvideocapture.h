#ifndef CVVIDEOCAPTURE_H
#define CVVIDEOCAPTURE_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QGridLayout>
#include <QTimer>
#include <QSpinBox>

#include <opencv2/core/mat.hpp>

#include <opencv2/videoio.hpp>
#include "cvvideocapturelib.h"
class CVVIDEOCAPTURESHARED_EXPORT CVVideoCapture : public QWidget
{
    Q_OBJECT

public:
    CVVideoCapture(QWidget *parent = 0);
    virtual ~CVVideoCapture();
    int device() const;
    void setDevice(int device);

    cv::Mat currentFrame() const;
    void setCurrentFrame(const cv::Mat &currentFrame);

    QImage toImage(const cv::Mat &m);
private:
    int m_device;
    QPushButton *m_startButton;
    QPushButton *m_stopButton;
    QLabel *m_frameLabel;
    QLabel *m_infoLabel;
    QLabel *m_stateLabel;
    QGridLayout *m_container;
    QTimer m_timer;
    QSpinBox *m_deviceSpinBox;
    cv::VideoCapture m_capture;
    cv::Mat m_currentFrame;
    void createConnections();
protected:
public slots:
    virtual void captureFrame();
    virtual void stop();
    virtual void start();
    virtual void changeDevice(int device);
signals:
    void frameCaptured(cv::Mat frame);
    void stopped();
    void started();
    void deviceChanged(int device);
};

#endif
