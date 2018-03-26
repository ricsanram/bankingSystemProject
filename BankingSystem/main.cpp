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
    //------------------------------------
    //WINDOW
    //------------------------------------
    QMainWindow window;
    window.setWindowTitle("Banking System");
    window.setFixedSize(600, 400);

    QLabel *welcome = new QLabel(&window);
    welcome->setText("Welcome,");
    welcome->setStyleSheet("font-size: 18px; font-style:italic;");
    welcome->setFixedSize(500,40);
    welcome->move(100, 35);

    QLabel *usersName = new QLabel(&window);
    usersName->setText("User's Name");
    usersName->setStyleSheet("font-size: 40px; font-weight: bold");
    usersName->setFixedSize(500,40);
    usersName->move(100, 70);

    QPushButton *savingsAccount = new QPushButton(&window);
    savingsAccount->setText("Savings");
    savingsAccount->setFixedSize(150,50);
    savingsAccount->move(100, 150);

    QPushButton *checkingAccount = new QPushButton(&window);
    checkingAccount->setText("Checking");
    checkingAccount->setFixedSize(150,50);
    checkingAccount->move(350, 150);

    QPushButton *depositFunds = new QPushButton(&window);
    depositFunds->setText("Deposit Funds");
    depositFunds->setFixedSize(150,50);
    depositFunds->move(100, 225);

    QPushButton *withdrawFunds = new QPushButton(&window);
    withdrawFunds->setText("Withdraw Funds");
    withdrawFunds->setFixedSize(150,50);
    withdrawFunds->move(350, 225);

    QPushButton *transferFunds = new QPushButton(&window);
    transferFunds->setText("Transfer Funds");
    transferFunds->setFixedSize(150,50);
    transferFunds->move(100, 300);

    QPushButton *checkTransactionHistory = new QPushButton(&window);
    checkTransactionHistory->setText("Transaction History");
    checkTransactionHistory->setFixedSize(150,50);
    checkTransactionHistory->move(350, 300);

    //-------------------------------------------------------------------
    //Savings WINDOW
    //-------------------------------------------------------------------

    QMainWindow windowSavings;
    windowSavings.setWindowTitle("Savings");
    windowSavings.setFixedSize(600, 400);
    savingsAccount->connect(savingsAccount, SIGNAL(clicked()), &windowSavings, SLOT (show()));

    QLabel *savingsAccNum = new QLabel(&windowSavings);
    savingsAccNum->setText("Account Number: 123456");
    savingsAccNum->setFixedSize(600,40);
    savingsAccNum->setStyleSheet("font-size: 25px;");
    savingsAccNum->setAlignment(Qt::AlignCenter);
    savingsAccNum->move(0, 75);

    QLabel *savingsAmount = new QLabel(&windowSavings);
    savingsAmount->setText("$100.00");
    savingsAmount->setFixedSize(600,80);
    savingsAmount->setStyleSheet("font-size: 80px;");
    savingsAmount->setAlignment(Qt::AlignCenter);
    savingsAmount->move(0, 175);

    //------------------------------------------------------------------
    //Checking WINDOW
    //------------------------------------------------------------------

    QMainWindow windowChecking;
    windowChecking.setWindowTitle("Checking");
    windowChecking.setFixedSize(600, 400);
    checkingAccount->connect(checkingAccount, SIGNAL(clicked()), &windowChecking, SLOT(show()));

    QLabel *checkingAccNum = new QLabel(&windowChecking);
    checkingAccNum->setText("Account Number: 123456");
    checkingAccNum->setFixedSize(600,40);
    checkingAccNum->setStyleSheet("font-size: 25px;");
    checkingAccNum->setAlignment(Qt::AlignCenter);
    checkingAccNum->move(0, 75);

    QLabel *checkingAmount = new QLabel(&windowChecking);
    checkingAmount->setText("$100.00");
    checkingAmount->setFixedSize(600,80);
    checkingAmount->setStyleSheet("font-size: 80px;");
    checkingAmount->setAlignment(Qt::AlignCenter);
    checkingAmount->move(0, 175);

    //------------------------------------------------------------------
    //Deposit WINDOW
    //------------------------------------------------------------------

    QMainWindow windowDeposit;
    windowDeposit.setWindowTitle("Deposit");
    windowDeposit.setFixedSize(600, 400);
    depositFunds->connect(depositFunds, SIGNAL(clicked(bool)), &windowDeposit, SLOT(show()));



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
