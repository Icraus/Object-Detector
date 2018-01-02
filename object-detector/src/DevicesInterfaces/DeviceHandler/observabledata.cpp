#include "observabledata.h"
using namespace Devices;
ObservableData::ObservableData(QObject *parent) : QObject(parent)
{

}

QString ObservableData::getData() const
{
    return data;
}

void ObservableData::setData(const QString &value)
{
    data = value;
}
