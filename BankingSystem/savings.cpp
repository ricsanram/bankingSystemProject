#include "savings.h"

Savings::Savings(QWidget *parent) : QWidget(parent)
{
    balance = 30.50;
    accountNumber = "0000001";
    interestRate = 8.50;
}

void Savings::deposit(float amount)
{
    balance += amount;
}

void Savings::withdraw(float amount)
{
    balance -= amount;
}

void Savings::sentTransfer(float amount)
{
    withdraw(amount);
}

void Savings::receivedTransfer(float amount)
{
    deposit(amount);
}

float Savings::getBalance() const
{
    return balance;
}

QString Savings::getAccountNumber() const
{
    return accountNumber;
}

float Savings::getInterestRate() const
{
    return interestRate;
}
