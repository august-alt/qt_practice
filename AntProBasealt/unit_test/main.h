#ifndef MAIN_H
#define MAIN_H

#include <QObject>

class TestQString : public QObject
{
    Q_OBJECT

private slots:
    void toUpper();
    void toUpper_data();
};

#endif//MAIN_H
