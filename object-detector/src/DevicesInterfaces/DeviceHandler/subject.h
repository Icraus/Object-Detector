#ifndef SUBJECT_H
#define SUBJECT_H

#include <QObject>
#include <memory>
#include "devicehandler_global.h"

namespace Devices {
    class DECLARE_LIB Subject;
}

#include "observer.h"
#include "observabledata.h"


using namespace Devices;

class Devices::Subject : public QObject
{
    Q_OBJECT
    class _SubjectImpl;
    std::unique_ptr<_SubjectImpl> _pimpl;
public:    
    virtual ~Subject();

    std::vector<Observer *> getObservers() const;
protected:
    explicit Subject(QObject *parent = nullptr);
signals:
    void notifyObservers(const ObservableData &);
public slots:
    void addObserver(Observer *obs);
    void removeObserver(Observer *obs);
};

#endif // SUBJECT_H
