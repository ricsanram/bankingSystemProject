#include "depositsavingswindow.h"

DepositSavingsWindow::DepositSavingsWindow(QWidget *parent) : QMainWindow(parent)
{
    this->setWindowTitle("Deposit Money to Savings");
    this->setFixedSize(600, 400);
    //depositSavings->connect(depositSavings, SIGNAL(clicked()), &windowDepositMoney, SLOT(show()));
    //depositChecking->connect(depositChecking, SIGNAL(clicked()), &windowDepositMoney, SLOT(show()));


    depositInput->setFixedSize(300,50);
    depositInput->setStyleSheet("font-size:35px");
    depositInput->setAlignment(Qt::AlignCenter);
    depositInput->move(150,100);


    windowDepositMoneyClose->setText("OK");
    windowDepositMoneyClose->setFixedSize(150,50);
    windowDepositMoneyClose->move(225, 300);
    windowDepositMoneyClose->connect(windowDepositMoneyClose,SIGNAL(clicked()), this, SLOT(close()));
}
