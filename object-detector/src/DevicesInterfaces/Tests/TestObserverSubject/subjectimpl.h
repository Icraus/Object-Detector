#ifndef SUBJECTIMPL_H
#define SUBJECTIMPL_H
#include "subject.h"
using namespace Devices;
class SubjectImpl : public Subject
{
public:
    SubjectImpl(QObject *parent = nullptr);
    SubjectImpl(const SubjectImpl&) = default;
};

#endif // SUBJECTIMPL_H
