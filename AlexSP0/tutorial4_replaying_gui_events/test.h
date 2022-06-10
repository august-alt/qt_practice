#ifndef TEST_H
#define TEST_H

#include <QtTest>

class TestGui: public QObject
{
    Q_OBJECT

private slots:
    void testGui_data();
    void testGui();
};

#endif //TEST_H
