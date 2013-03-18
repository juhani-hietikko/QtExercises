#include <QString>
#include <QtTest>
#include "fizzbuzz.h"

class FizzBuzzTest : public QObject
{
    Q_OBJECT
    
public:
    FizzBuzzTest();
    
private Q_SLOTS:
    void testCase1();
};

FizzBuzzTest::FizzBuzzTest()
{
}

void FizzBuzzTest::testCase1()
{
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(FizzBuzzTest)

#include "fizzbuzztest.moc"
