#ifndef PROCESSHANDLER_H
#define PROCESSHANDLER_H

#include <QObject>
#include <QProcess>

class ProcessHandler : public QObject
{
    Q_OBJECT
private:
    QProcess *m_childProcess;

public:
    explicit ProcessHandler(QObject *parent = nullptr);
    void start(QString cmd, QStringList lst);
    QProcess *childProcess() const;
signals:
    void started();
public slots:
    void setChildProcess(QProcess *childProcess);
};

#endif // PROCESSHANDLER_H
