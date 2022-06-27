#ifndef COMBOBOXEX_H
#define COMBOBOXEX_H

#include <QComboBox>
#include <QLabel>
#include <QWidget>

class ComboBoxEx : public QWidget {

  Q_OBJECT

  public:
    ComboBoxEx(QWidget *parent = nullptr);

  private:
    QComboBox *combo;
    QLabel *label;
};

#endif // COMBOBOXEX_H
