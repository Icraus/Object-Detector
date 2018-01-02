#ifndef OBSERVABLEDATA_H
#define OBSERVABLEDATA_H

#include <QObject>
#include "devicehandler_global.h"

namespace Devices {
    class DECLARE_LIB ObservableData;
}
using namespace Devices;
class Devices::ObservableData : public QObject
{
    Q_OBJECT
    QString data;

public:
    explicit ObservableData(QObject *parent = nullptr);
    QString getData() const;
    void setData(const QString &value);

signals:

public slots:
};

#endif // OBSERVABLEDATA_H
