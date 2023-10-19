#include <iostream>
#include <QtWidgets>
#include <QCoreApplication>
#include <QtTest/QTest>

#include "main.h"
#include "gui.h"
#include "gui_test.h"

void TestQString::toUpper()
{
//    первый ваниант
//    QString str = "Hello";
//    QCOMPARE(str.toUpper(), QString("HELLO"));

//    второй вариант, с набором данных
    QFETCH(QString, string);
    QFETCH(QString, result);

    QCOMPARE(string.toUpper(), result);

}

void Test_Gui::test_Gui()
{
    QFETCH(QTestEventList, events);
    QFETCH(QString, expected);
    QLineEdit lineEdit;

    events.simulate(&lineEdit);
    QCOMPARE(lineEdit.text(), expected);
}

QTEST_MAIN(TestQString)

void TestQString::toUpper_data()
{
    QTest::addColumn<QString>("string");
    QTest::addColumn<QString>("result");

    QTest::newRow("all lower") << "hello" << "HELLO";
    QTest::newRow("mixed")     << "Hello" << "HELLO";
    QTest::newRow("all upper") << "HELLO" << "HELLO";
}

void Test_Gui::testGui_data()
{
    QTest::addColumn<QTestEventList>("events");
    QTest::addColumn<QString>("expected");
    QTestEventList list1;
    list1.addKeyClick('a');
    QTest::newRow("char") << list1 << "a";
    QTestEventList list2;
    list2.addKeyClick('a');
    list2.addKeyClick(Qt::Key_Backspace);
    QTest::newRow("there and back again") << list2 << "";
}
