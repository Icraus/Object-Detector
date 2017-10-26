#include <QString>
#include <QtTest>
#include "subjectimpl.h"
#include "observerimpl.h"
using namespace Devices;
Q_DECLARE_METATYPE(ObserverImpl*)
Q_DECLARE_METATYPE(SubjectImpl*)
Q_DECLARE_METATYPE(ObservableData*)
Q_DECLARE_METATYPE(Observer*)
Q_DECLARE_METATYPE(Subject*)
class TestObserverSubjectTest : public QObject
{
    Q_OBJECT

public:
    TestObserverSubjectTest();

private Q_SLOTS:
    void testCaseObserversSignals();
    void testCaseObserversSignals_data();

};

TestObserverSubjectTest::TestObserverSubjectTest()
{
}

void TestObserverSubjectTest::testCaseObserversSignals()
{
    QFETCH(ObservableData*, data);
    QFETCH(ObserverImpl*, obs);
    QFETCH(SubjectImpl*, sub);
    obs->observe(sub);
    QVERIFY2(sub->getObservers().size() == 1, "Num is not 1");
    QSignalSpy spy{sub, SIGNAL(notifyObservers(ObservableData))};
    emit sub->notifyObservers(*data);
    QVERIFY2(spy.count() == 1, "More Than one Signal");
    QList<QVariant> vars = spy.takeFirst();
    QVERIFY2(vars.size() != 0, "Size Error");
    QVERIFY2(!vars.at(0).isNull(), "Object Error");

}

void TestObserverSubjectTest::testCaseObserversSignals_data()
{
    QTest::addColumn<ObservableData*>("data");
    QTest::addColumn<ObserverImpl*>("obs");
    QTest::addColumn<SubjectImpl*>("sub");
    QTest::addRow("Test Data1") << new ObservableData << new ObserverImpl(this) << new SubjectImpl;

}

QTEST_APPLESS_MAIN(TestObserverSubjectTest)

#include "tst_testobserversubjecttest.moc"
