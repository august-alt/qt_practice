#ifndef WIDGETGENERATOR_H
#define WIDGETGENERATOR_H

#include <QListView>
#include <QListWidget>
#include <QTreeView>
#include <QWidget>


class WidgetGenerator {
public:
    enum elements {
        PushButton = 0,
        ToolButton = 1,
        RadioButton = 2,
        CheckBox = 3,
        ListView = 4,
        TreeView = 5,
        ListWidget = 6,
        Label = 7,
    };

    QWidget* getRandomWidget(QWidget *parent);

private:
    void getRandomNumber(int*);
    QListView* createListView(QWidget *parent);
    QTreeView* createTreeView(QWidget*);
    QListWidget* createQListWidget(QWidget*);
};

#endif // WIDGETGENERATOR_H
