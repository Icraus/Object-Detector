#include "observer.h"
#include "subject.h"
using namespace Devices;

class Observer::_ObserverImpl{
    Observer *const _ptr;
public:
    _ObserverImpl(Observer *const ptr);
    void observe(Subject *sub);
    void stopObserving(Subject *sub);
};



Observer::~Observer()
{
    
}

Observer::Observer(QObject *parent) : QObject(parent)
  ,_pimpl{std::make_unique<Observer::_ObserverImpl>(this)}
{
    
}

void Observer::observe(Subject *sub)
{
    _pimpl->observe(sub);
}

void Observer::stopObserving(Subject *sub)
{
    _pimpl->stopObserving(sub);
}



Observer::_ObserverImpl::_ObserverImpl(Observer * const ptr):_ptr{ptr}
{

}

void Observer::_ObserverImpl::observe(Subject *sub)
{
    if(sub == nullptr)
        return;
    sub->addObserver(_ptr);
}

void Observer::_ObserverImpl::stopObserving(Subject *sub)
{
    if(sub == nullptr)
        return;
    sub->removeObserver(_ptr);
}
