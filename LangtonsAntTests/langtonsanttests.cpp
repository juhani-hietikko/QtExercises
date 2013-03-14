#include <QString>
#include <QtTest>

class LangtonsAntTests : public QObject
{
    Q_OBJECT
    
public:
    LangtonsAntTests();
    
private Q_SLOTS:
    void exampleTest();
};

LangtonsAntTests::LangtonsAntTests()
{
}

void LangtonsAntTests::exampleTest()
{
    QCOMPARE("foo", "foo");
}

QTEST_APPLESS_MAIN(LangtonsAntTests)

#include "langtonsanttests.moc"
