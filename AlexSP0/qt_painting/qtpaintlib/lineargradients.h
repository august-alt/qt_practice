#ifndef LINEARGRADIENTS_H
#define LINEARGRADIENTS_H

#include <QWidget>



class LinearGradients : public QWidget
{
public:
    LinearGradients(QWidget *parent);

protected:
    void paintEvent(QPaintEvent *e);

private:
    void doPainting();

};

#endif // LINEARGRADIENTS_H
