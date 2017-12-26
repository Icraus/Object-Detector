#include "serialmainwindow.h"
#include "ui_serialmainwindow.h"

#include <QTime>
#include <QDebug>
#include <iostream>
#include <QFileDialog>
#include <QProcess>
#include <QMetaEnum>
SerialMainWindow::SerialMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SerialMainWindow)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);
    m_model = new SerialPortModel(this);
    ui->_serialTableView->setModel(m_model);
    ui->_serialTableView->setSelectionMode(QTableView::SingleSelection);
    ui->_serialTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
}

SerialMainWindow::~SerialMainWindow()
{
    delete ui;
}

void SerialMainWindow::refreshModel()
{
    m_model->refreshModel();
}

void SerialMainWindow::on__refreshPushButton_clicked()
{
    refreshModel();
}

void SerialMainWindow::on__portPushButton_clicked()
{
    QModelIndex in = ui->_serialTableView->currentIndex();
    if(!in.isValid())
        return;
    if(m_port){
        m_port->disconnect();
        m_port->close();
    }
    m_port = in.data(SerialPortModel::PORT).value<QSerialPort*>();
    m_port->open(QIODevice::ReadWrite);
    connect(m_port, SIGNAL(readyRead()), this, SLOT(changeText()));
}

void SerialMainWindow::on__writePushButton_clicked()
{
    if(m_port->isWritable() && m_port->isOpen())
    {
        m_port->flush();
        m_port->write(ui->_dataLineEdit->text().toLocal8Bit().data());

    }
}

void SerialMainWindow::changeText()
{
    if(m_port->isReadable() && m_port->isOpen()){
        QString string("");
        if(ui->_formatTimeCheckBox->isChecked()){
              string.append("(");
             string.append(QTime::currentTime().toString("hh:mm:ss:zzz"));
            string.append(") :: ");
        }
        QByteArray arr = m_port->readAll();
        string.append(arr);
        ui->_outTextEdit->append(string);
    }
}

void SerialMainWindow::on__attachProcessPushButton_2_clicked()
{
    QString exect = QFileDialog::getOpenFileName(this, "Process", QDir::currentPath(), tr("executable (*.exe);; All Files (*.*)"));
    setChildProcess(new QProcess(this));
    QStringList args = ui->lineEdit->text().split(" ");
    childProcess()->start(exect, args);

}

void SerialMainWindow::redirecteInput()
{
    m_childProcess->write(m_port->readAll());
}

void SerialMainWindow::redirecteOutput()
{
    m_port->write(m_childProcess->readAllStandardOutput());
}

void SerialMainWindow::childFinished(int i)
{
    ui->_processStateLabel->setText(QString("finsihed with code %1").arg(i));
}

void SerialMainWindow::childStatus(QProcess::ProcessState state)
{
    auto en = QMetaEnum::fromType<QProcess::ProcessState>();
    ui->_processStateLabel->setText(en.valueToKey(state));
}

QProcess *SerialMainWindow::childProcess() const
{
    return m_childProcess;
}

void SerialMainWindow::setChildProcess(QProcess *childProcess)
{
    if(m_childProcess){
        m_childProcess->disconnect();
        delete m_childProcess;
    }
    m_childProcess = childProcess;
    connect(m_childProcess, SIGNAL(finished(int)), this, SLOT(childFinished(int)));
    connect(m_childProcess, SIGNAL(finished(int)), m_childProcess, SLOT(deleteLater()));
    connect(m_childProcess, SIGNAL(readyReadStandardOutput()), this, SLOT(redirecteOutput()));
    connect(m_port, SIGNAL(readyRead()), this, SLOT(redirecteInput()));
    connect(m_childProcess, SIGNAL(stateChanged(QProcess::ProcessState)), this, SLOT(childStatus(QProcess::ProcessState)));

}
