#include <QtTest>
#include <QCoreApplication>

// add necessary includes here

class TestWork : public QObject
{
    Q_OBJECT

public:
    TestWork();
    ~TestWork();

private slots:
    void test_case1();

};

TestWork::TestWork()
{

}

TestWork::~TestWork()
{

}

void TestWork::test_case1()
{

}

QTEST_MAIN(TestWork)

#include "tst_testwork.moc"
