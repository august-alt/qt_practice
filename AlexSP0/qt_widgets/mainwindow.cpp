#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "statusbar.h"
#include "label.h"
#include "ledit.h"
#include "slider.h"

#include <QGridLayout>
#include <spinbox.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->comboBox->addItem("label");
    ui->comboBox->addItem("ledit");
    ui->comboBox->addItem("slider");
    ui->comboBox->addItem("spinbox");
    ui->comboBox->addItem("statusbar");
    connect(ui->buttonRun, &QPushButton::clicked, this, &MainWindow::runSelected);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::runSelected()
{
    QString choice = ui->comboBox->currentText();
    qWarning("choice");
    QWidget *window;
    if(QString::compare(choice, "label", Qt::CaseSensitive) == 0) {
        window = new Label();
    }
    if(QString::compare(choice, "ledit", Qt::CaseInsensitive) == 0) {
        window = new Ledit();

    }
    if(QString::compare(choice, "slider", Qt::CaseSensitive) == 0) {
        window = new Slider();
    }
    if(QString::compare(choice, "spinbox", Qt::CaseSensitive) == 0) {
        window = new SpinBox();
    }
    if(QString::compare(choice, "statusbar", Qt::CaseSensitive) == 0) {
        window = new Statusbar();
    }
    window->resize(300, 200);
    window->setWindowTitle("Running");
    window->show();
}

