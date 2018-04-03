#include "checking.h"

Checking::Checking(QWidget *parent) : QWidget(parent)
{
    balance = 2.25;
    accountNumber = "0000002";
}

void Checking::deposit(float amount)
{
    balance += amount;
}

void Checking::withdraw(float amount)
{
    balance -= amount;
}

void Checking::sentTransfer(float amount)
{
    withdraw(amount);
}

void Checking::receivedTransfer(float amount)
{
    deposit(amount);
}

float Checking::getBalance() const
{
    return balance;
}

QString Checking::getAccountNumber() const
{
    return accountNumber;
}

float Checking::getOverdraftFee() const
{
    return overdraftFee;
}
