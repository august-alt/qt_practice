#include "test.h"
#include <QTest>
#include <QObject>

void TestBenchmark::simple()
{
    QString str1 = QLatin1String("This is a test string");
    QString str2 = QLatin1String("This is a test string");

    QCOMPARE(str1.localeAwareCompare(str2), 0);

    QBENCHMARK {
        str1.localeAwareCompare(str2);
    }
}

void TestBenchmark::multiple_data()
{
    QTest::addColumn<bool>("useLocaleCompare");
    QTest::newRow("locale aware compare") << true;
    QTest::newRow("standard compare") << false;
}

void TestBenchmark::multiple()
{
    QFETCH(bool, useLocaleCompare);
    QString str1 = QLatin1String("This is a test string");
    QString str2 = QLatin1String("This is a test string");

    int result;
    if (useLocaleCompare) {
        QBENCHMARK {
            result = str1.localeAwareCompare(str2);
        }
    } else {
        QBENCHMARK {
            result = (str1 == str2);
        }
    }
    Q_UNUSED(result);
}

QTEST_MAIN(TestBenchmark)
