#ifndef COLOURS_H
#define COLOURS_H

#include <QWidget>



class Colours : public QWidget {
public:
    Colours(QWidget *parent);
protected:
    void paintEvent(QPaintEvent *e);

private:
    void doPainting();

};

#endif // COLOURS_H
