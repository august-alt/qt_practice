#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QtDBus/QDBusConnection>
#include <QtDBus/QDBusConnectionInterface>
#include <QtDBus/QDBusInterface>
#include <QtDBus/QDBusMessage>
#include <QtDBus/QDBusReply>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_show_clicked()
{
    if (!ui->lineEditHeader->text().isEmpty() && !ui->textEdit->toPlainText().isEmpty())
    {
        showNotification(ui->lineEditHeader->text(), ui->textEdit->toPlainText());
    }
    else
    {
        showNotification("ERROR!", "Some fields are empty!");
    }
}

void MainWindow::showNotification(QString header, QString body)
{
    QDBusConnection bus = QDBusConnection::sessionBus();
    QDBusInterface dbus_iface("org.freedesktop.Notifications",
                              "/org/freedesktop/Notifications",
                              "org.freedesktop.Notifications",
                              bus);

    QList<QVariant> arguments;

    arguments.append("qtdbus");
    arguments.append(QVariant::UInt);
    arguments.append("");
    arguments.append(header);
    arguments.append(body);
    arguments.append(QStringList());
    arguments.append(QVariantMap());
    arguments.append(20000);

    auto answer = dbus_iface.callWithArgumentList(QDBus::AutoDetect, "Notify", arguments);
}
