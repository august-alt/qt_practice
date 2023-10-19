#ifndef GUI_H
#define GUI_H

#include <QObject>

class TestGui: public QObject
{
    Q_OBJECT

private slots:
    void testGui();
};

#endif // GUI_H

