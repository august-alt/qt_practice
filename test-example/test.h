#ifndef TEST_H
#define TEST_H

#include <QtWidgets/QWidget>
#include <QtTest/QTest>

// Task 1-2
//class TestQString : public QObject
//{
//    Q_OBJECT

//private slots:
//    void toUpper();
//    void toUpper_data();
//};

// Task 3
class TestGui: public QObject
{
    Q_OBJECT

private slots:
    void testGui_data();
    void testGui();
};

class TestBenchmark: public QObject
{
    Q_OBJECT

private slots:
    void simple();
    void multiple_data();
    void multiple();
};

#endif //TEST_H
