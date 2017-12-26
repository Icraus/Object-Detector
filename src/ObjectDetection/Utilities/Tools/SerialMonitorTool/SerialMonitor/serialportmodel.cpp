#include "serialportmodel.h"
#include <QMetaEnum>
QList<QSerialPortInfo> SerialPortModel::portsInfo() const
{
    return m_portsInfo;
}

void SerialPortModel::setPortsInfo(const QList<QSerialPortInfo> &portsInfo)
{
    m_portsInfo = portsInfo;
}

QList<QSerialPort *> SerialPortModel::avialabePorts() const
{
    return m_avialabePorts;
}

void SerialPortModel::setAvialabePorts(const QList<QSerialPort *> &avialabePorts)
{
    m_avialabePorts = avialabePorts;
}

void SerialPortModel::refreshModel()
{
    for(auto info : m_avialabePorts){
       delete info;
    }
    m_portsInfo = QSerialPortInfo::availablePorts();
    for(auto info : m_portsInfo){
        QSerialPort *port = new QSerialPort(info, this);
        m_avialabePorts.push_back(port);
    }
}

SerialPortModel::SerialPortModel(QObject *parent) : QAbstractTableModel(parent)
{
    refreshModel();

}


int SerialPortModel::rowCount(const QModelIndex &parent) const
{
    return m_avialabePorts.size();
}

int SerialPortModel::columnCount(const QModelIndex &parent) const
{
    return COLUMN_COUNT;
}

QVariant SerialPortModel::data(const QModelIndex &index, int role) const
{
    int row = index.row();
    int col = index.column();
    switch (role) {
        case PORT_DESCRIPTION:
        case Qt::ToolTipRole:
            return QVariant(m_portsInfo[row].description());
        case PORT:{
            QVariant v;
            v.setValue(m_avialabePorts[row]);
            return v;
        }
        case PORT_SYSTEM_LOCATION:
            return QVariant(m_portsInfo[row].systemLocation());
        case MANUFACTURER:
            return QVariant(m_portsInfo[row].manufacturer());
        case IS_BUSY:
        case Qt::StatusTipRole:
            return QVariant(m_portsInfo[row].isBusy());
        case SERIAL_NUM:
            return QVariant(m_portsInfo[row].serialNumber());
        case PORT_NAME:
            return QVariant(m_portsInfo[row].portName());
        case Qt::DisplayRole:
            return this->data(index, Qt::UserRole + col + 2);
    }

    return QVariant();
}





QVariant SerialPortModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if(role != Qt::DisplayRole)
        return QVariant();
    if(orientation == Qt::Vertical)
        return QAbstractTableModel::headerData(section, orientation, role);
    auto t = QMetaEnum::fromType<SerialPortModel::type>();


    return t.valueToKey(PORT + section + 1);

}
