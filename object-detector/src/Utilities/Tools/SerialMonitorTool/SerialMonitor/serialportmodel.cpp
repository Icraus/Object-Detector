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

SerialPortModel::~SerialPortModel()
{
    releasePorts();
}
void SerialPortModel::releasePorts()
{
    for(auto info : m_avialabePorts){
       delete info;
    }

}

void SerialPortModel::refreshModel()
{
    removeRows(0, m_avialabePorts.size(), QModelIndex());
    m_portsInfo = QSerialPortInfo::availablePorts();
    for(auto info : m_portsInfo){
        QSerialPort *port = new QSerialPort(info, this);
        m_avialabePorts.push_back(port);
    }

}

SerialPortModel::SerialPortModel(QObject *parent) : QAbstractTableModel(parent)
{
    m_portsInfo = QSerialPortInfo::availablePorts();
    for(auto info : m_portsInfo){
        QSerialPort *port = new QSerialPort(info, this);
        m_avialabePorts.push_back(port);
    }

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
        case Qt::StatusTipRole:
            return QVariant(m_portsInfo[row].description());
        case SERIAL_NUM:
            return QVariant(m_portsInfo[row].serialNumber());
        case PORT_NAME:
            return QVariant(m_portsInfo[row].portName());
        case Qt::DisplayRole:
            return this->data(index, Qt::UserRole + col + 2);
        break;
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


bool SerialPortModel::removeRows(int row, int count, const QModelIndex &parent)
{
    int i = row;
    emit beginRemoveRows(parent, row, row + count);
    if(count != 0)
    {
        m_avialabePorts.erase(m_avialabePorts.begin() + i, m_avialabePorts.begin() + row);
        m_portsInfo.erase(m_portsInfo.begin() + i, m_portsInfo.begin() + row);
    }
    emit endRemoveRows();
    return true;
}
