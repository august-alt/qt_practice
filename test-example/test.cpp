#include "test.h"
#include <QLineEdit>

// Task 1-2
//void TestQString::toUpper() {
//    QFETCH(QString, string);
//    QFETCH(QString, result);

//    QCOMPARE(string.toUpper(), result);
//}

//void TestQString::toUpper_data()
//{
//    QTest::addColumn<QString>("string");
//    QTest::addColumn<QString>("result");

//    QTest::newRow("all lower") << "hello" << "HELLO";
//    QTest::newRow("mixed")     << "Hello" << "HELLO";
//    QTest::newRow("all upper") << "HELLO" << "HELLO";
//}

// Task 3
//void TestGui::testGui()
//{
//    QLineEdit lineEdit;
//    QTest::keyClicks(&lineEdit, "hello world");
//    QCOMPARE(lineEdit.text(), QString("hello world"));
//}


// Task 4
void TestGui::testGui()
{
    QFETCH(QTestEventList, events);
    QFETCH(QString, expected);

    QLineEdit lineEdit;

    events.simulate(&lineEdit);

    QCOMPARE(lineEdit.text(), expected);
}

void TestGui::testGui_data()
{
    QTest::addColumn<QTestEventList>("events");
    QTest::addColumn<QString>("expected");

    QTestEventList list1;
    list1.addKeyClick('a');
    QTest::newRow("char") << list1 << "a";

    // Task 6
    QSKIP("skipping all");

    QTestEventList list2;
    list2.addKeyClick('a');
    list2.addKeyClick(Qt::Key_Backspace);
    QTest::newRow("there and back again") << list2 << "";
}

// task 5
void TestBenchmark::simple()
{
    QString str1 = QLatin1String("This is a test string");
    QString str2 = QLatin1String("This is a test string");

    QCOMPARE(str1.localeAwareCompare(str2), 0);

    QBENCHMARK
    {
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
    if (useLocaleCompare)
    {
        QBENCHMARK
        {
            result = str1.localeAwareCompare(str2);
        }
    }
    else
    {
        QBENCHMARK {
            result = (str1 == str2);
        }
    }
    Q_UNUSED(result);
}



QTEST_MAIN(TestGui)
//QTEST_MAIN(TestQString)
