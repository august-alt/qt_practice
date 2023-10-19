#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QXmlStreamWriter>
#include <QXmlStreamReader>
#include <QXmlStreamAttribute>
#include <QMessageBox>
#include <QFile>


namespace Ui { class MainWindow; }


class MainWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_generateButton_clicked();
    void on_dialogButton_clicked();

    void on_readButton_clicked();
    void on_dialogReadButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
