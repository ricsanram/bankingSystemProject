#include "transferwindow.h"

TransferWindow::TransferWindow(QWidget *parent) : QMainWindow(parent)
{
    this->setWindowTitle("Transfer");
    this->setFixedSize(600, 400);
    //transferFunds->connect(transferFunds, SIGNAL(clicked()), &windowTransfer, SLOT(show()));


    transferFromSavings->setText("Savings");
    transferFromSavings->setFixedSize(150,50);
    transferFromSavings->move(100, 50);


    transferFromChecking->setText("Checking");
    transferFromChecking->setFixedSize(150,50);
    transferFromChecking->move(350, 50);


    transferToSavings->setText("Savings");
    transferToSavings->setFixedSize(150,50);
    transferToSavings->move(100, 150);


    transferToChecking->setText("Checking");
    transferToChecking->setFixedSize(150,50);
    transferToChecking->move(350, 150);


    transferInput->setFixedSize(300,50);
    transferInput->setStyleSheet("font-size:35px");
    transferInput->setAlignment(Qt::AlignCenter);
    transferInput->move(150,225);


    windowTransferClose->setText("OK");
    windowTransferClose->setFixedSize(150,50);
    windowTransferClose->move(225, 300);
    windowTransferClose->connect(windowTransferClose,SIGNAL(clicked()), this, SLOT(close()));
}
