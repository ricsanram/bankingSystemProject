#include "bankingsystem.h"

BankingSystem::BankingSystem(QWidget *parent) : QWidget(parent)
{
    mainWindow.usersName->setText(user.getName());

    mainWindow.savingsAccount->connect(mainWindow.savingsAccount, SIGNAL(clicked()), &savingsCheckingWindow, SLOT(show()));

    mainWindow.show();
}
