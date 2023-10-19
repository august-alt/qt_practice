#include "fileselector.h"

#include <QFileDialog>
#include <QLayout>
#include <QLineEdit>
#include <QToolButton>

FileSelector::FileSelector(QWidget *parent)
    : QWidget(parent)
{
    auto *layout = new QHBoxLayout(this);
    layout->setContentsMargins(0, 0, 0, 0);

    m_lineEdit = new QLineEdit(this);
    layout->addWidget(m_lineEdit);

    connect(m_lineEdit, &QLineEdit::editingFinished, this, &FileSelector::emitPathChanged);

    auto *button = new QToolButton;
    button->setText("...");
    layout->addWidget(button);

    connect(button, &QToolButton::clicked, this, &FileSelector::chooseFile);

    setFocusProxy(m_lineEdit);
}

void FileSelector::setMode(Mode mode)
{
    if (mode != m_mode) {
        m_mode = mode;
        emit modeChanged(mode);
    }
}

FileSelector::Mode FileSelector::mode() const
{
    return m_mode;
}

void FileSelector::setPath(const QString &fileName)
{
    m_lineEdit->setText(fileName);
    m_lastEmittedPath = fileName;
}

QString FileSelector::path() const
{
    return m_lineEdit->text();
}

void FileSelector::chooseFile()
{
    QString fileName;
    if (mode() == FileOpen)
        fileName = QFileDialog::getOpenFileName(this, QString(), m_lineEdit->text());
    else if (mode() == FileSave)
        fileName = QFileDialog::getSaveFileName(this, QString(), m_lineEdit->text());
    else
        fileName = QFileDialog::getExistingDirectory(this, QString(), m_lineEdit->text());

    if (!fileName.isEmpty()) {
        m_lineEdit->setText(fileName);
        emitPathChanged();
    }
}

void FileSelector::emitPathChanged()
{
    QString newPath = m_lineEdit->text();
    if (newPath != m_lastEmittedPath) {
        m_lastEmittedPath = newPath;
        emit pathChanged(newPath);
    }
}
