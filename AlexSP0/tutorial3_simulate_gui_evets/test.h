#ifndef TEST_H
#define TEST_H

#include <QtWidgets>
#include <QTest>

class TestGui: public QObject
{
    Q_OBJECT

private slots:
    void testGui();

};

#endif //TEST_H
