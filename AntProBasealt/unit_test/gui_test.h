#ifndef GUI_TEST_H
#define GUI_TEST_H

#include <QObject>

class Test_Gui: public QObject
{
    Q_OBJECT

private slots:
    void test_Gui();
    void testGui_data();
};

#endif // GUI_TEST_H
