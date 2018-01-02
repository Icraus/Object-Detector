#ifndef SERIALHANDLER_H
#define SERIALHANDLER_H

#include <QObject>
#include <QSerialPort>
#include <abstractdevicewriter.h>
#include "observer.h"
#include "devicehandler_global.h"

namespace Devices {
    class DECLARE_LIB SerialHandler;
}
using namespace Devices;
class Devices::SerialHandler : public AbstractDeviceWriter
{
    Q_OBJECT
private:
    class _SerialHandlerImpl;
    std::unique_ptr<_SerialHandlerImpl> _pimpl;
public:
    explicit SerialHandler(QObject *parent = nullptr);
    virtual ~SerialHandler();
    QSerialPort* getPort();
signals:
public slots:
    void setPort(QSerialPort* port);

    // AbstractDeviceWriter interface
public:
    virtual void writeToDevice(const QString &str) override;

    // AbstractDeviceWriter interface
public:
    virtual void closeDevice() override;
    virtual void openDevice() override;
};


#endif // SERIALHANDLER_H
