#include <QCheckBox>
#include <QLabel>
#include <QListView>
#include <QListWidget>
#include <QPushButton>
#include <QRandomGenerator>
#include <QStringListModel>
#include <QTextBrowser>
#include <QToolButton>
#include <QTreeView>
#include <QWidget>
#include <qradiobutton.h>
#include "widgetgenerator.h"

QWidget* WidgetGenerator::getRandomWidget(QWidget *parent) {
    int widget;
    getRandomNumber(&widget);
    QWidget *l;
    switch (widget) {
        case PushButton:
            return (QWidget*) new QPushButton("This is button!", parent);
        case ToolButton:
            return (QWidget*) new QToolButton;
        case RadioButton:
            return (QWidget*) new QRadioButton("This is radiobutton!", parent);
        case CheckBox:
            return (QWidget*) new QCheckBox("This is checkbox!", parent);
        case ListView:
            return (QWidget*) createListView(parent);
        case TreeView:
            return (QWidget*) createTreeView(parent);
        case ListWidget:
            return (QWidget*) createQListWidget(parent);
        case Label:
            return (QWidget*) new QLabel("This is label!", parent);
    }
    return nullptr;
}

QListView* WidgetGenerator::createListView(QWidget *parent) {
    QStringListModel *model = new QStringListModel(parent);
    QStringList *list = new QStringList;
    *list<<"This is first item of ListView"<<"This is secon item of ListView";
    model->setStringList(*list);
    QListView *listView = new QListView(parent);
    listView->setModel(model);
    return listView;
}

QTreeView* WidgetGenerator::createTreeView(QWidget *parent) {
    QStringListModel *model = new QStringListModel(parent);
    QStringList *list = new QStringList;
    *list<<"This is first item of TreeView"<<"This is secon item of TreeView";
    model->setStringList(*list);
    QTreeView *treeView = new QTreeView(parent);
    treeView->setModel(model);
    return treeView;
}

QListWidget* WidgetGenerator::createQListWidget(QWidget *parent) {
    QListWidget *listView = new QListWidget(parent);
    listView->addItem("This is QListWidget!");
    return listView;
}

void WidgetGenerator::getRandomNumber(int *num) {
    QRandomGenerator *rg = QRandomGenerator::global();
    *num = rg->bounded(0,7);
}
