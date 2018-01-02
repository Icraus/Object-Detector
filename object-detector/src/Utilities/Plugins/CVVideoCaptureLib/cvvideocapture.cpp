#include "cvvideocapture.h"
#include "opencv2/imgproc.hpp"
#include "opencv2/core.hpp"
CVVideoCapture::CVVideoCapture(QWidget *parent) :
    QWidget(parent),
    m_container{new QGridLayout(this)},
    m_frameLabel{new QLabel(this)},
    m_device{0},
    m_infoLabel{new QLabel("0",this)},
    m_startButton{new QPushButton("Capture", this)},
    m_stopButton{new QPushButton("Stop", this)},
    m_stateLabel{new QLabel("idle", this)},
    m_deviceSpinBox{new QSpinBox(this)}

{

    m_timer.setInterval(30);
    createConnections();
    m_container->addWidget(m_frameLabel, 0, 0);
    QHBoxLayout *lout = new QHBoxLayout(this);
    lout->addWidget(m_startButton);
    lout->addWidget(m_stopButton);

    m_container->addLayout(lout, 2, 0);
    QHBoxLayout *lblsbox = new QHBoxLayout(this);
    lblsbox->addWidget(m_infoLabel);
    lblsbox->addWidget(m_stateLabel);
    lblsbox->addWidget(m_deviceSpinBox);
    m_container->addLayout(lblsbox, 1, 0);
//    m_container->addWidget(m_deviceSpinBox, 1, 0);
//    m_container->addWidget(m_startButton, 2, 0);
//    m_container->addWidget(m_stopButton, 2, 0);
//    m_container->add
    this->setLayout(m_container);
//    this->show();

}

CVVideoCapture::~CVVideoCapture()
{
    m_capture.release();
    delete m_container;

}

int CVVideoCapture::device() const
{
    return m_device;
}

void CVVideoCapture::setDevice(int device)
{
    m_device = device;
}

cv::Mat CVVideoCapture::currentFrame() const
{
    return m_currentFrame;
}

void CVVideoCapture::setCurrentFrame(const cv::Mat &currentFrame)
{
    m_currentFrame = currentFrame;
}

void CVVideoCapture::createConnections()
{

    connect(&(this->m_timer), &QTimer::timeout, this, &CVVideoCapture::captureFrame);
    connect(this, &CVVideoCapture::stopped, &(this->m_timer), &QTimer::stop);
    connect(this, SIGNAL(started()), &(this->m_timer), SLOT(start()));
    connect(this, &CVVideoCapture::deviceChanged, [&](int dev){
       m_infoLabel->setText(QString("Current Capture Device %1").arg(dev));
    });
    connect(this->m_stopButton, SIGNAL(clicked()), this, SLOT(stop()));
    connect(this->m_startButton, SIGNAL(clicked()), this, SLOT(start()));
    connect(this->m_deviceSpinBox, SIGNAL(valueChanged(int)), this, SLOT(changeDevice(int)));

}
QImage CVVideoCapture::toImage(const cv::Mat &m)
{
    cv::Mat temp;
    if(m.type() == CV_8UC3){
        cv::cvtColor(m, temp, cv::COLOR_BGR2RGB);
        return QImage(m.data, m.cols, m.rows, m.step, QImage::Format_RGB888).rgbSwapped();
    }else {
        return QImage(m.data, m.cols, m.rows, m.step, QImage::Format_Grayscale8);

    }
}
void CVVideoCapture::captureFrame()
{
    if(m_capture.isOpened())
    {
        m_capture  >> m_currentFrame;
        emit frameCaptured(m_currentFrame);
    }
    m_frameLabel->setPixmap(QPixmap::fromImage(toImage(m_currentFrame)));

}

void CVVideoCapture::stop()
{
    m_capture.release();
    emit stopped();
}

void CVVideoCapture::start()
{
    m_capture.open(m_device);
    emit started();
}

void CVVideoCapture::changeDevice(int device)
{
    if(device == m_device)
        return;
    m_device = device;
    m_capture.release();
    emit deviceChanged(device);
}
