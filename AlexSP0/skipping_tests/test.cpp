#include "test.h"

void TestQString::toUpper() {
    QFETCH(QString, string);
    QFETCH(QString, result);

    if(QString::compare(string, "Hi", Qt::CaseSensitivity()) == 0) {
        QSKIP("Do not check the word hi");
    }

    QCOMPARE(string.toUpper(), result);
}


void TestQString::toUpper_data()
{
    QTest::addColumn<QString>("string");
    QTest::addColumn<QString>("result");

    QTest::newRow("all lower") << "hello" << "HELLO";
    QTest::newRow("skipping") << "Hi" << "hi";
    QTest::newRow("mixed")     << "Hello" << "HELLO";
    QTest::newRow("all upper") << "HELLO" << "HELLO";

    //QSKIP("skipping all");
}


QTEST_MAIN(TestQString)
