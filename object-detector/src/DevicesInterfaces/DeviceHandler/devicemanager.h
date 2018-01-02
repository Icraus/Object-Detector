#ifndef DEVICEMANAGER_H
#define DEVICEMANAGER_H

#include "abstractdevicewriter.h"
#include "devicehandler_global.h"

#include <QObject>
namespace Devices {
   class DECLARE_LIB DeviceManager;
}
using namespace Devices;
class Devices::DeviceManager : public QObject
{
    Q_OBJECT
public:
    static DeviceManager &instance(QObject* parent = nullptr);
    Devices::AbstractDeviceWriter *devWriter() const;
protected:
    void setDevWriter(Devices::AbstractDeviceWriter *devWriter);
    explicit DeviceManager(QObject *parent = nullptr);
private:
    Devices::AbstractDeviceWriter *_devWriter;
signals:

public slots:
};

#endif // DEVICEMANAGER_H
