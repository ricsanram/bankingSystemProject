/*==================================================================
    main.cpp - Assigment 4

    BY OMAR MACIAS & RICARDO SANTIAGO
==================================================================*/

#include <QApplication>
#include <QPushButton>
#include <QLabel>
#include <QMainWindow>
#include <QLineEdit>
#include <QTextEdit>

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
    savingsAccount->move(100, 135);

    QPushButton *checkingAccount = new QPushButton(&window);
    checkingAccount->setText("Checking");
    checkingAccount->setFixedSize(150,50);
    checkingAccount->move(350, 135);

    QPushButton *depositFunds = new QPushButton(&window);
    depositFunds->setText("Deposit Funds");
    depositFunds->setFixedSize(150,50);
    depositFunds->move(100, 190);

    QPushButton *withdrawFunds = new QPushButton(&window);
    withdrawFunds->setText("Withdraw Funds");
    withdrawFunds->setFixedSize(150,50);
    withdrawFunds->move(350, 190);

    QPushButton *transferFunds = new QPushButton(&window);
    transferFunds->setText("Transfer Funds");
    transferFunds->setFixedSize(150,50);
    transferFunds->move(100, 245);

    QPushButton *checkTransactionHistory = new QPushButton(&window);
    checkTransactionHistory->setText("Transaction History");
    checkTransactionHistory->setFixedSize(150,50);
    checkTransactionHistory->move(350, 245);

    QPushButton *quitProgram = new QPushButton(&window);
    quitProgram->setText("QUIT");
    quitProgram->setFixedSize(150,50);
    quitProgram->move(225,300);
    quitProgram->connect(quitProgram,SIGNAL(clicked()), &window, SLOT(close()));

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
    savingsAccNum->move(0, 50);

    QLabel *savingsAmount = new QLabel(&windowSavings);
    savingsAmount->setText("$250.00");
    savingsAmount->setFixedSize(600,80);
    savingsAmount->setStyleSheet("font-size: 80px;");
    savingsAmount->setAlignment(Qt::AlignCenter);
    savingsAmount->move(0, 150);

    QPushButton *windowSavingsClose = new QPushButton(&windowSavings);
    windowSavingsClose->setText("OK");
    windowSavingsClose->setFixedSize(150,50);
    windowSavingsClose->move(225,300);
    windowSavingsClose->connect(windowSavingsClose,SIGNAL(clicked()), &windowSavings, SLOT(close()));

    //------------------------------------------------------------------
    //Checking WINDOW
    //------------------------------------------------------------------

    QMainWindow windowChecking;
    windowChecking.setWindowTitle("Checking");
    windowChecking.setFixedSize(600, 400);
    checkingAccount->connect(checkingAccount, SIGNAL(clicked()), &windowChecking, SLOT(show()));

    QLabel *checkingAccNum = new QLabel(&windowChecking);
    checkingAccNum->setText("Account Number: 123457");
    checkingAccNum->setFixedSize(600,40);
    checkingAccNum->setStyleSheet("font-size: 25px;");
    checkingAccNum->setAlignment(Qt::AlignCenter);
    checkingAccNum->move(0, 50);

    QLabel *checkingAmount = new QLabel(&windowChecking);
    checkingAmount->setText("$100.00");
    checkingAmount->setFixedSize(600,80);
    checkingAmount->setStyleSheet("font-size: 80px;");
    checkingAmount->setAlignment(Qt::AlignCenter);
    checkingAmount->move(0, 150);

    QPushButton *windowCheckingClose = new QPushButton(&windowChecking);
    windowCheckingClose->setText("OK");
    windowCheckingClose->setFixedSize(150,50);
    windowCheckingClose->move(225,300);
    windowCheckingClose->connect(windowCheckingClose,SIGNAL(clicked()), &windowChecking, SLOT(close()));

    //------------------------------------------------------------------
    //Deposit WINDOW
    //------------------------------------------------------------------

    QMainWindow windowDeposit;
    windowDeposit.setWindowTitle("Deposit");
    windowDeposit.setFixedSize(600, 400);
    depositFunds->connect(depositFunds, SIGNAL(clicked()), &windowDeposit, SLOT(show()));

    QPushButton *depositSavings = new QPushButton(&windowDeposit);
    depositSavings->setText("Savings");
    depositSavings->setFixedSize(150,50);
    depositSavings->move(100, 100);

    QPushButton *depositChecking = new QPushButton(&windowDeposit);
    depositChecking->setText("Checking");
    depositChecking->setFixedSize(150,50);
    depositChecking->move(350, 100);

    QPushButton *windowDepositClose = new QPushButton(&windowDeposit);
    windowDepositClose->setText("OK");
    windowDepositClose->setFixedSize(150,50);
    windowDepositClose->move(225,300);
    windowDepositClose->connect(windowDepositClose,SIGNAL(clicked()), &windowDeposit, SLOT(close()));

    //Deposit WINDOW / DepositMoney

    QMainWindow windowDepositMoney;
    windowDepositMoney.setWindowTitle("Deposit Money");
    windowDepositMoney.setFixedSize(600, 400);
    depositSavings->connect(depositSavings, SIGNAL(clicked()), &windowDepositMoney, SLOT(show()));
    depositChecking->connect(depositChecking, SIGNAL(clicked()), &windowDepositMoney, SLOT(show()));

    QLineEdit *depositInput = new QLineEdit(&windowDepositMoney);
    depositInput->setFixedSize(300,50);
    depositInput->setStyleSheet("font-size:35px");
    depositInput->setAlignment(Qt::AlignCenter);
    depositInput->move(150,100);

    QPushButton *windowDepositMoneyClose = new QPushButton(&windowDepositMoney);
    windowDepositMoneyClose->setText("OK");
    windowDepositMoneyClose->setFixedSize(150,50);
    windowDepositMoneyClose->move(225, 300);
    windowDepositMoneyClose->connect(windowDepositMoneyClose,SIGNAL(clicked()), &windowDepositMoney, SLOT(close()));

    //--------------------------------------------------
    //Withdraw WINDOW
    //--------------------------------------------------

    QMainWindow windowWithdraw;
    windowWithdraw.setWindowTitle("Withdraw");
    windowWithdraw.setFixedSize(600, 400);
    withdrawFunds->connect(withdrawFunds, SIGNAL(clicked()), &windowWithdraw, SLOT(show()));

    QPushButton *withdrawSavings = new QPushButton(&windowWithdraw);
    withdrawSavings->setText("Savings");
    withdrawSavings->setFixedSize(150,50);
    withdrawSavings->move(100, 100);

    QPushButton *withdrawChecking = new QPushButton(&windowWithdraw);
    withdrawChecking->setText("Checking");
    withdrawChecking->setFixedSize(150,50);
    withdrawChecking->move(350, 100);

    QPushButton *windowWithdrawClose = new QPushButton(&windowWithdraw);
    windowWithdrawClose->setText("OK");
    windowWithdrawClose->setFixedSize(150,50);
    windowWithdrawClose->move(225,300);
    windowWithdrawClose->connect(windowWithdrawClose,SIGNAL(clicked()), &windowWithdraw, SLOT(close()));

    //Withdraw WINDOW / WithdrawMoney

    QMainWindow windowWithdrawMoney;
    windowWithdrawMoney.setWindowTitle("Withdraw Money");
    windowWithdrawMoney.setFixedSize(600, 400);
    withdrawSavings->connect(withdrawSavings, SIGNAL(clicked()), &windowWithdrawMoney, SLOT(show()));
    withdrawChecking->connect(withdrawChecking, SIGNAL(clicked()), &windowWithdrawMoney, SLOT(show()));

    QLineEdit *withdrawInput = new QLineEdit(&windowWithdrawMoney);
    withdrawInput->setFixedSize(300,50);
    withdrawInput->setStyleSheet("font-size:35px");
    withdrawInput->setAlignment(Qt::AlignCenter);
    withdrawInput->move(150,100);

    QPushButton *windowWithdrawMoneyClose = new QPushButton(&windowWithdrawMoney);
    windowWithdrawMoneyClose->setText("OK");
    windowWithdrawMoneyClose->setFixedSize(150,50);
    windowWithdrawMoneyClose->move(225, 300);
    windowWithdrawMoneyClose->connect(windowWithdrawMoneyClose,SIGNAL(clicked()), &windowWithdrawMoney, SLOT(close()));

    //---------------------------------------------------
    //Transfer WINDOW
    //---------------------------------------------------

    QMainWindow windowTransfer;
    windowTransfer.setWindowTitle("Transfer");
    windowTransfer.setFixedSize(600, 400);
    transferFunds->connect(transferFunds, SIGNAL(clicked()), &windowTransfer, SLOT(show()));

    QPushButton *transferFromSavings = new QPushButton(&windowTransfer);
    transferFromSavings->setText("Savings");
    transferFromSavings->setFixedSize(150,50);
    transferFromSavings->move(100, 50);

    QPushButton *transferFromChecking = new QPushButton(&windowTransfer);
    transferFromChecking->setText("Checking");
    transferFromChecking->setFixedSize(150,50);
    transferFromChecking->move(350, 50);

    QPushButton *transferToSavings = new QPushButton(&windowTransfer);
    transferToSavings->setText("Savings");
    transferToSavings->setFixedSize(150,50);
    transferToSavings->move(100, 150);

    QPushButton *transferToChecking = new QPushButton(&windowTransfer);
    transferToChecking->setText("Checking");
    transferToChecking->setFixedSize(150,50);
    transferToChecking->move(350, 150);

    QLineEdit *transferInput = new QLineEdit(&windowTransfer);
    transferInput->setFixedSize(300,50);
    transferInput->setStyleSheet("font-size:35px");
    transferInput->setAlignment(Qt::AlignCenter);
    transferInput->move(150,225);

    QPushButton *windowTransferClose = new QPushButton(&windowTransfer);
    windowTransferClose->setText("OK");
    windowTransferClose->setFixedSize(150,50);
    windowTransferClose->move(225, 300);
    windowTransferClose->connect(windowTransferClose,SIGNAL(clicked()), &windowTransfer, SLOT(close()));

    //----------------------------------------------------
    //Transaction History WINDOW
    //----------------------------------------------------

    QMainWindow windowTransactionHistory;
    windowTransactionHistory.setWindowTitle("Transaction History");
    windowTransactionHistory.setFixedSize(600, 400);
    checkTransactionHistory->connect(checkTransactionHistory, SIGNAL(clicked()), &windowTransactionHistory, SLOT(show()));

    QTextEdit *transactionHistory = new QTextEdit(&windowTransactionHistory);
    transactionHistory->setFixedSize(300,225);
    transactionHistory->move(150,50);

    QPushButton *windowTransactionHistoryClose = new QPushButton(&windowTransactionHistory);
    windowTransactionHistoryClose->setText("OK");
    windowTransactionHistoryClose->setFixedSize(150,50);
    windowTransactionHistoryClose->move(225,300);
    windowTransactionHistoryClose->connect(windowTransactionHistoryClose,SIGNAL(clicked()), &windowTransactionHistory, SLOT(close()));

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
