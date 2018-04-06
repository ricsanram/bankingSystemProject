#ifndef TRANSFERWINDOW_H
#define TRANSFERWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>

class TransferWindow : public QMainWindow
{
    Q_OBJECT
public:
    QPushButton *transferFromSavings = new QPushButton(this);
    QPushButton *transferFromChecking = new QPushButton(this);
    QPushButton *transferToSavings = new QPushButton(this);
    QPushButton *transferToChecking = new QPushButton(this);
    QLineEdit *transferInput = new QLineEdit(this);
    QPushButton *windowTransferClose = new QPushButton(this);

    explicit TransferWindow(QWidget *parent = nullptr);

signals:

public slots:
};

#endif // TRANSFERWINDOW_H
