#ifndef TEST_H
#define TEST_H

#include <QtTest>

class TestQString : public QObject
{
    Q_OBJECT

private slots:
    void toUpper();
};

#endif //TEST_H
