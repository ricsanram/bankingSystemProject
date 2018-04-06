#include "withdrawwindow.h"

WithdrawWindow::WithdrawWindow(QWidget *parent) : QMainWindow(parent)
{
    this->setWindowTitle("Withdraw");
    this->setFixedSize(600, 400);
    //withdrawFunds->connect(withdrawFunds, SIGNAL(clicked()), &windowWithdraw, SLOT(show()));

    withdrawSavings->setText("Savings");
    withdrawSavings->setFixedSize(150,50);
    withdrawSavings->move(100, 100);

    withdrawChecking->setText("Checking");
    withdrawChecking->setFixedSize(150,50);
    withdrawChecking->move(350, 100);

    windowWithdrawClose->setText("OK");
    windowWithdrawClose->setFixedSize(150,50);
    windowWithdrawClose->move(225,300);
    windowWithdrawClose->connect(windowWithdrawClose,SIGNAL(clicked()), this, SLOT(close()));

}
