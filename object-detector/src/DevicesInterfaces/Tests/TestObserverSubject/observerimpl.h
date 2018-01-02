#ifndef OBSERVERIMPL_H
#define OBSERVERIMPL_H

#include <observer.h>
#include "QDebug"
using namespace Devices;
class ObserverImpl : public Observer
{
public:
    ObserverImpl(QObject *parent);
    ObserverImpl(const ObserverImpl&) = default;
    // Observer interface
public slots:
    virtual void onNotified(const ObservableData &dt) override;

};


#endif // OBSERVERIMPL_H
