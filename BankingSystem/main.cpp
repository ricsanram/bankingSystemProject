/*==================================================================
    main.cpp - Assigment 4

    BY OMAR MACIAS & RICARDO SANTIAGO
==================================================================*/

#include <QApplication>
#include <QPushButton>
#include <QLabel>
#include <QMainWindow>

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

    QMainWindow window;
    window.setWindowTitle("Banking System");
    window.setFixedSize(600, 400);

    QLabel *usersName = new QLabel(&window);
    usersName->setText("User's Name");
    usersName->move(250, 20);

    QLabel *accountNumber = new QLabel(&window);
    accountNumber->setText("Account# 0000001");
    accountNumber->move(250, 40);

    QPushButton *savingsAccount = new QPushButton(&window);
    savingsAccount->setText("Savings\nTotal $1000.00");
    savingsAccount->move(100, 100);

    QPushButton *checkingAccount = new QPushButton(&window);
    checkingAccount->setText("Checking\nTotal $1000.00");
    checkingAccount->move(400, 100);

    QPushButton *depositFunds = new QPushButton(&window);
    depositFunds->setText("Deposit Funds");
    depositFunds->move(100, 200);

    QPushButton *withdrawFunds = new QPushButton(&window);
    withdrawFunds->setText("Withdraw Funds");
    withdrawFunds->move(400, 200);

    QPushButton *transferFunds = new QPushButton(&window);
    transferFunds->setText("Transfer Funds");
    transferFunds->move(100, 300);

    QPushButton *checkTransactionHistory = new QPushButton(&window);
    checkTransactionHistory->setText("Transaction History");
    checkTransactionHistory->move(400, 300);

    window.show();

    return app.exec();
}

/*
Display the user's name
Display the current account's account number
Show a total for the currently selected account
Button to choose a savings account
Button to choose a checking account
Button to deposit funds into the selected account
Button to withdraw funds from the selected account
Button to transfer funds between accounts
Button to check transaction history
*/
