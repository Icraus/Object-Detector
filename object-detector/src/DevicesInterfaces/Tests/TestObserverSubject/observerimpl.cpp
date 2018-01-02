#include "observerimpl.h"

ObserverImpl::ObserverImpl(QObject *parent): Observer(parent)
{

}

void ObserverImpl::onNotified(const ObservableData &dt)
{
    qDebug() << "Hello World";

}
