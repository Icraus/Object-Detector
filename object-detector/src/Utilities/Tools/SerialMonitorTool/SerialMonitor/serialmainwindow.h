#ifndef SERIALMAINWINDOW_H
#define SERIALMAINWINDOW_H
#include "serialportmodel.h"

#include <QSerialPort>
#include <QMainWindow>
#include <qprocess.h>

namespace Ui {
class SerialMainWindow;
}

class SerialMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SerialMainWindow(QWidget *parent = 0);
    ~SerialMainWindow();
    QProcess *childProcess() const;
public slots:
    void refreshModel();
    void setChildProcess(QProcess *childProcess);
private slots:
    void on__refreshPushButton_clicked();

    void on__portPushButton_clicked();

    void on__writePushButton_clicked();
    void changeText();
    void on__attachProcessPushButton_2_clicked();
    void redirecteInput();
    void redirecteOutput();
    void childFinished(int i);
    void childStatus(QProcess::ProcessState state);
private:
    QProcess *m_childProcess;
    QSerialPort *m_port;
    SerialPortModel *m_model;
    Ui::SerialMainWindow *ui;
};

#endif // SERIALMAINWINDOW_H
