#include "abstractdevicewriter.h"

AbstractDeviceWriter::AbstractDeviceWriter(QObject *parent) : Observer(parent)
{

}

void AbstractDeviceWriter::onNotified(const ObservableData &dt)
{
    writeToDevice(dt.getData());
}
