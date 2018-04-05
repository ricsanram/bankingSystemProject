#include "depositwindow.h"

DepositWindow::DepositWindow(QWidget *parent) : QMainWindow(parent)
{

    this->setWindowTitle("Deposit");
    this->setFixedSize(600, 400);
    //depositFunds->connect(depositFunds, SIGNAL(clicked()), &windowDeposit, SLOT(show()));


    depositSavings->setText("Savings");
    depositSavings->setFixedSize(150,50);
    depositSavings->move(100, 100);


    depositChecking->setText("Checking");
    depositChecking->setFixedSize(150,50);
    depositChecking->move(350, 100);


    windowDepositClose->setText("OK");
    windowDepositClose->setFixedSize(150,50);
    windowDepositClose->move(225,300);
    windowDepositClose->connect(windowDepositClose,SIGNAL(clicked()), this, SLOT(close()));
}
