#include "test.h"

void TestQString::toUpper() {
    QString str = "first";
    QVERIFY(str.toUpper() == "FIRST");
}


QTEST_MAIN(TestQString)
