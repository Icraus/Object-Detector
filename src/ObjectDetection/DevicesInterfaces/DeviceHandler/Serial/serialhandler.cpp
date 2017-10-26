#include "serialhandler.h"

#include <QSerialPort>
#include <QVariant>
#include "QRegExp"

using namespace Devices;

class SerialHandler::_SerialHandlerImpl{
private:
    QSerialPort *_port;
    SerialHandler *const _ptr;
    QString _currentData;
public:
    _SerialHandlerImpl(SerialHandler *const ptr);
    QSerialPort *getPort() const;
    void writeToDevice(const QString &str);
    void setPort(QSerialPort *port);
    void openDevice();
    void closeDevice();
private:
};

SerialHandler::SerialHandler(QObject *parent) : AbstractDeviceWriter(parent),
    _pimpl{std::make_unique<SerialHandler::_SerialHandlerImpl>(this)}
{
    
}

SerialHandler::~SerialHandler()
{

}
QSerialPort *SerialHandler::getPort()
{
    return _pimpl->getPort();
}

void SerialHandler::setPort(QSerialPort *port)
{
    _pimpl->setPort(port);
}



SerialHandler::_SerialHandlerImpl::_SerialHandlerImpl(SerialHandler *const ptr):
    _ptr{ptr}
{
}

QSerialPort *SerialHandler::_SerialHandlerImpl::getPort() const
{
    return _port;
}

void SerialHandler::_SerialHandlerImpl::writeToDevice(const QString &str)
{
    if(_currentData == str)
        return;
    QRegExp exp("\\d+, \\d+, \\d+");
    if(!exp.exactMatch(str)){
        emit _ptr->errorIODevice("Error Writing To Device");
    }
    _currentData = str;
    QString s = QString("(%1)").arg(str);
    if(!_port->isOpen() || !_port->isWritable())
        emit _ptr->errorIODevice("Error Port isn't Avialable");
    _port->write(s.toLocal8Bit().constData());

}

void SerialHandler::_SerialHandlerImpl::setPort(QSerialPort *port)
{
    _port = port;
    connect(_port, &QSerialPort::errorOccurred, [&](QSerialPort::SerialPortError error){
       emit _ptr->errorIODevice(QVariant(error).toString());
    });
}

void SerialHandler::_SerialHandlerImpl::openDevice()
{
    if(!_port->open(QIODevice::WriteOnly))
        emit _ptr->errorIODevice("Error Opening Device");
}

void SerialHandler::_SerialHandlerImpl::closeDevice()
{
    _port->close();
}


void SerialHandler::writeToDevice(const QString &str)
{
    _pimpl->writeToDevice(str);
}


void Devices::SerialHandler::closeDevice()
{
    _pimpl->closeDevice();
}

void SerialHandler::openDevice()
{
    _pimpl->openDevice();
}
