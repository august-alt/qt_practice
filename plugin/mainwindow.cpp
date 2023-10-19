#include "mainwindow.h"
#include "fileselector.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->fileSelector->setMode(FileSelector::FileOpen);
    connect(ui->fileSelector, &FileSelector::pathChanged, [&](const QString &fileName)
    {
        QPixmap pixmap = QPixmap(fileName).scaled(600, 600, Qt::KeepAspectRatio);
        ui->label->setPixmap(pixmap);
        ui->label->show();
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

