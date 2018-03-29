#ifndef CHECKING_H
#define CHECKING_H

#include <string>

class Checking
{
private:
    float balance;
    std::string name;
    int accountNumber;
    const float overdraftFee = 30.00;
public:
    Checking();
    void deposit(float);
    void withdraw(float);
    void transfer(float);
    float getBalance();
};

#endif // CHECKING_H
