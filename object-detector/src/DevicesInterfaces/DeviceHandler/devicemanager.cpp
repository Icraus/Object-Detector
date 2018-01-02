#include "devicemanager.h"
#include "Serial/serialhandler.h"
#include "Bluetooth/bluetoothhandler.h"
DeviceManager::DeviceManager(QObject *parent) : QObject(parent)
{
    //TODO add Bluetooth handler For IOS and Android
#if !defined(Q_OS_ANDROID) || !defined(Q_OS_IOS)
    _devWriter = new Devices::SerialHandler(this);
#else
    _devWriter = new Devices::BluetoothHandler(this);
#endif

}

Devices::AbstractDeviceWriter *DeviceManager::devWriter() const
{
    return _devWriter;
}

void DeviceManager::setDevWriter(Devices::AbstractDeviceWriter *devWriter)
{
    _devWriter = devWriter;
}

Devices::DeviceManager& Devices::DeviceManager::instance(QObject *parent)
{
    static DeviceManager _instance;

    return _instance;
}
