#include "bankingsystem.h"

BankingSystem::BankingSystem(QWidget *parent) : QWidget(parent)
{
    login.cheatLabel->setText(" User Name: " + user.getUserName() + "\n Password: " + user.getPassWord() );
    login.show();

    connect(login.loginButton,SIGNAL(clicked()),this,SLOT(performLogin()));

    mainWindow.usersName->setText(user.getName());

    mainWindow.savingsAccount->connect(mainWindow.savingsAccount, SIGNAL(clicked()), &savingsCheckingWindow, SLOT(show()));

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
