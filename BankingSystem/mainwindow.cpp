#include "mainwindow.h"
#include <QLabel>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    this->setWindowTitle("Banking System");
    this->setFixedSize(600, 400);

    welcome->setText("Welcome,");
    welcome->setStyleSheet("font-size: 18px; font-style:italic;");
    welcome->setFixedSize(500,40);
    welcome->move(100, 35);

    usersName->setText("User's Name");
    usersName->setStyleSheet("font-size: 40px; font-weight: bold");
    usersName->setFixedSize(500,50);
    usersName->move(100, 65);

    savingsAccount->setText("Savings");
    savingsAccount->setFixedSize(150,50);
    savingsAccount->move(100, 135);

    checkingAccount->setText("Checking");
    checkingAccount->setFixedSize(150,50);
    checkingAccount->move(350, 135);

    depositFunds->setText("Deposit Funds");
    depositFunds->setFixedSize(150,50);
    depositFunds->move(100, 190);

    withdrawFunds->setText("Withdraw Funds");
    withdrawFunds->setFixedSize(150,50);
    withdrawFunds->move(350, 190);

    transferFunds->setText("Transfer Funds");
    transferFunds->setFixedSize(150,50);
    transferFunds->move(100, 245);

    checkTransactionHistory->setText("Transaction History");
    checkTransactionHistory->setFixedSize(150,50);
    checkTransactionHistory->move(350, 245);

    quitProgram->setText("QUIT");
    quitProgram->setFixedSize(150,50);
    quitProgram->move(225,300);
    quitProgram->connect(quitProgram,SIGNAL(clicked()), this, SLOT(close()));
}
