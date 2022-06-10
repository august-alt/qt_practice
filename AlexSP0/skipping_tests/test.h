#ifndef TEST_H
#define TEST_H

#include <QtTest>
#include <QString>

class TestQString : public QObject
{
    Q_OBJECT

private slots:
    void toUpper();
    void toUpper_data();
};

#endif //TEST_H
