#ifndef FILESELECTOR_H
#define FILESELECTOR_H


#include <QWidget>

class QLineEdit;

class FileSelector : public QWidget
{
    Q_OBJECT
    Q_PROPERTY(Mode mode READ mode WRITE setMode NOTIFY modeChanged)
    Q_PROPERTY(QString path READ path WRITE setPath NOTIFY pathChanged)

public:
    FileSelector(QWidget *parent = nullptr);

    QString path() const;
    void setPath(const QString &path);

    enum Mode { FileOpen, FileSave, Directory };
    Mode mode() const;
    void setMode(Mode mode);

signals:
    void pathChanged(const QString &path);
    void modeChanged(Mode mode);

private slots:
    void chooseFile();

private:
    void emitPathChanged();

    QLineEdit *m_lineEdit;
    Mode m_mode = FileSave;
    QString m_lastEmittedPath;
};


#endif // FILESELECTOR_H
