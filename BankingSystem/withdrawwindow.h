#ifndef WITHDRAWWINDOW_H
#define WITHDRAWWINDOW_H

#include <QMainWindow>
#include <QPushButton>

class WithdrawWindow : public QMainWindow
{
    Q_OBJECT
public:
    QPushButton *withdrawSavings = new QPushButton(this);
    QPushButton *withdrawChecking = new QPushButton(this);
    QPushButton *windowWithdrawClose = new QPushButton(this);

    explicit WithdrawWindow(QWidget *parent = nullptr);

signals:

public slots:
};

#endif // WITHDRAWWINDOW_H
