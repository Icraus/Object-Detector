#include "subject.h"

using namespace Devices;

class Subject::_SubjectImpl{
private:
    Subject *const _ptr;
    std::vector<Observer*> _observers;
public:
    _SubjectImpl(Subject * const ptr);
    void addObserver(Observer *obs);
    void removeObserver(Observer *obs);
    std::vector<Observer *> getObservers() const;
};

Subject::~Subject()
{

}

std::vector<Observer *> Subject::getObservers() const
{
    return _pimpl->getObservers();
}

Subject::Subject(QObject *parent) : QObject(parent),
    _pimpl{std::make_unique<Subject::_SubjectImpl>(this)}
{
    
}

void Subject::addObserver(Observer *obs)
{
    _pimpl->addObserver(obs);
}

void Subject::removeObserver(Observer *obs)
{
   _pimpl->removeObserver(obs);
}


std::vector<Observer *> Subject::_SubjectImpl::getObservers() const
{
return _observers;
}

Subject::_SubjectImpl::_SubjectImpl(Subject *const ptr) : _ptr {ptr}
{

}

void Subject::_SubjectImpl::addObserver(Observer *obs)
{
    if(obs == nullptr)
        return;
    QObject::connect(_ptr, SIGNAL(notifyObservers(const ObservableData&)), obs, SLOT(onNotified(const ObservableData&)));
    _observers.push_back(obs);
}

void Subject::_SubjectImpl::removeObserver(Observer *obs)
{
    if(obs == nullptr)
        return;
    QObject::disconnect(_ptr, SIGNAL(notifyObservers(ObservableData)), obs, SLOT(onNotified(const ObservableData&)));
    _observers.erase(std::remove_if(_observers.begin(), _observers.end(), [&](Observer* ob){
                        return obs == ob;
                     }));
}
