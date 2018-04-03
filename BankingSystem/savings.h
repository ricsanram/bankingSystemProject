#ifndef SAVINGS_H
#define SAVINGS_H

#include <QWidget>

class Savings : public QWidget
{
    Q_OBJECT
private:
    float balance;
    QString accountNumber;
    float interestRate;
public:
    explicit Savings(QWidget *parent = nullptr);
    void deposit(float);
    void withdraw(float);
    void sentTransfer(float);
    void receivedTransfer(float);
    float getBalance() const;
    QString getAccountNumber() const;
    float getInterestRate() const;

signals:

public slots:
};

#endif // SAVINGS_H
