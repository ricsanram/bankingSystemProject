#ifndef SAVINGS_H
#define SAVINGS_H

#include <string>

class Savings
{
private:
    float balance;
    std::string name;
    int accountNumber;
    float interestRate;
public:
    Savings();
    void deposit(float);
    void withdraw(float);
    void transfer(float);
    float getBalance();
};

#endif // SAVINGS_H
