#include "bankingsystem.h"

BankingSystem::BankingSystem(QWidget *parent) : QWidget(parent)
{
    login.cheatLabel->setText(" User Name: " + user.getUserName() + "\n Password: " + user.getPassWord() );
    login.show();

    connect(login.loginButton,SIGNAL(clicked()),this,SLOT(performLogin()));

    mainWindow.usersName->setText(user.getName());

    connect(mainWindow.savingsAccount, SIGNAL(clicked()), this, SLOT(savingsWindowUpdate()));
    connect(mainWindow.checkingAccount,SIGNAL(clicked()), this, SLOT(checkingWindowUpdate()));
    connect(mainWindow.depositFunds, SIGNAL(clicked()), &depositWindow, SLOT(show()));
    connect(depositWindow.depositChecking,SIGNAL(clicked()), &depositCheckingWindow, SLOT(show()));
    connect(depositWindow.depositSavings,SIGNAL(clicked()), &depositSavingsWindow, SLOT(show()));

    //mainWindow.show();
}

void BankingSystem::performLogin()
{
    if (login.userNameInput->text() == user.getUserName() && login.passwordInput->text() == user.getPassWord())
    {
        login.close();
        mainWindow.show();
    } else
    {
        login.loginLabel->setText("Try again!");
        login.userNameInput->clear();
        login.passwordInput->clear();
    }
}

void BankingSystem::savingsWindowUpdate()
{
    savingsCheckingWindow.setWindowTitle("Savings");
    savingsCheckingWindow.AccNum->setText("Account #: " + savings.getAccountNumber());
    savingsCheckingWindow.currentAmount->setText("$" + QString::number(savings.getBalance()));
    savingsCheckingWindow.show();
}

void BankingSystem::checkingWindowUpdate()
{
    savingsCheckingWindow.setWindowTitle("Checking");
    savingsCheckingWindow.AccNum->setText("Account #: " + checking.getAccountNumber());
    savingsCheckingWindow.currentAmount->setText("$" + QString::number(checking.getBalance()));
    savingsCheckingWindow.show();
}
