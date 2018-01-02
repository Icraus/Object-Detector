#ifndef OBSERVER_H
#define OBSERVER_H

#include <QObject>
#include <memory>
#include "devicehandler_global.h"

namespace Devices {
    class DECLARE_LIB Observer;
}
#include "subject.h"
#include "observabledata.h"
using namespace Devices;

class Devices::Observer : public QObject
{
    Q_OBJECT
private:
    class _ObserverImpl;
    std::unique_ptr<_ObserverImpl> _pimpl;
public:
   virtual ~Observer();
    Observer(const Observer&) = default;
protected:
    explicit Observer(QObject *parent = nullptr);
signals:

public slots:
    void observe(Subject *sub);
    void stopObserving(Subject *sub);
    virtual void onNotified(const ObservableData& dt) = 0;
};

#endif // OBSERVER_H
