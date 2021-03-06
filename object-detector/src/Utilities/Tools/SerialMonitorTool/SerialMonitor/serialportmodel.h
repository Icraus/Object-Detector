#ifndef SERIALPORTMODEL_H
#define SERIALPORTMODEL_H

#include <QObject>
#include <QAbstractTableModel>
#include <QSerialPortInfo>
#include <QSerialPort>

class SerialPortModel : public QAbstractTableModel
{
    Q_OBJECT
private:
   QList<QSerialPortInfo> m_portsInfo;
   QList<QSerialPort*> m_avialabePorts;
   const int COLUMN_COUNT = 5;
public slots:
   void refreshModel();
public:
    explicit SerialPortModel(QObject *parent = nullptr);
   enum type{PORT = Qt::UserRole + 1,
         PORT_NAME,
         PORT_DESCRIPTION,
         PORT_SYSTEM_LOCATION,
         MANUFACTURER,
         SERIAL_NUM
        };
   Q_ENUM(type)
signals:

private:
   void releasePorts();
public:
    virtual int rowCount(const QModelIndex &parent) const override;
    virtual int columnCount(const QModelIndex &parent) const override;
    virtual QVariant data(const QModelIndex &index, int role) const override;
    QList<QSerialPortInfo> portsInfo() const;
    void setPortsInfo(const QList<QSerialPortInfo> &portsInfo);
    QList<QSerialPort*> avialabePorts() const;
    void setAvialabePorts(const QList<QSerialPort*> &avialabePorts);
    virtual ~SerialPortModel();
    // QAbstractItemModel interface
public:
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override;

    // QAbstractItemModel interface

    // QAbstractItemModel interface
public:
    virtual bool removeRows(int row, int count, const QModelIndex &parent) override;
};

#endif // SERIALPORTMODEL_H
