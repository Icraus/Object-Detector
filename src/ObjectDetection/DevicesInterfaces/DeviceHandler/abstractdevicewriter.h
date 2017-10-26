#ifndef ABSTRACTDEVICEWRITER_H
#define ABSTRACTDEVICEWRITER_H

#include <QObject>
#include "observer.h"
#include "exception"
#include "QIODevice"
#include "devicehandler_global.h"

namespace Devices {
    class DECLARE_LIB AbstractDeviceWriter;
}
using namespace Devices;
class Devices::AbstractDeviceWriter : public Observer
{
    Q_OBJECT
public:
    virtual void writeToDevice(const QString&) = 0;
    virtual void openDevice() = 0;
    virtual void closeDevice() = 0;
protected:
    explicit AbstractDeviceWriter(QObject *parent = nullptr);

signals:
    void errorIODevice(const QString&);
public slots:
private:

    // Devices::Observer interface
public slots:
    virtual void onNotified(const ObservableData &dt) override;
};


#endif // ABSTRACTDEVICEWRITER_H
