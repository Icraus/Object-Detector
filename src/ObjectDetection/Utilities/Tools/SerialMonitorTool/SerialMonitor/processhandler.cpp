#include "processhandler.h"

ProcessHandler::ProcessHandler(QObject *parent) : QObject(parent)
{
    setChildProcess(new QProcess(this));

}

void ProcessHandler::start(QString cmd, QStringList lst)
{
    m_childProcess->start(cmd, lst);
    emit started();

}

QProcess *ProcessHandler::childProcess() const
{
    return m_childProcess;
}

void ProcessHandler::setChildProcess(QProcess *childProcess)
{
//    if(m_childProcess){
//        m_childProcess->disconnect();
//        delete m_childProcess;
//    }
    m_childProcess = childProcess;
//    connect(m_childProcess, SIGNAL(finished(int)), this, SLOT(childFinished(int)));
//    connect(m_childProcess, SIGNAL(finished(int)), m_childProcess, SLOT(deleteLater()));
//    connect(m_childProcess, SIGNAL(readyReadStandardOutput()), this, SLOT(redirecteOutput()));
//    connect(m_port, SIGNAL(readyRead()), this, SLOT(redirecteInput()));
//    connect(m_childProcess, SIGNAL(stateChanged(QProcess::ProcessState)), this, SLOT(childStatus(QProcess::ProcessState)));

}
