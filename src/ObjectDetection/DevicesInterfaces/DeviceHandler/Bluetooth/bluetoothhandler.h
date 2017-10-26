#ifndef BLUETOOTHHANDLER_H
#define BLUETOOTHHANDLER_H

#include <QObject>
#include "abstractdevicewriter.h"
#include "devicehandler_global.h"
namespace Devices {
    class DECLARE_LIB BluetoothHandler;
}
class Devices::BluetoothHandler : public AbstractDeviceWriter
{
    Q_OBJECT
public:
    explicit BluetoothHandler(QObject *parent = nullptr);

signals:

public slots:
};

#endif // BLUETOOTHHANDLER_H
