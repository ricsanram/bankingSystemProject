#ifndef CHECKING_H
#define CHECKING_H

#include <QWidget>

class Checking : public QWidget
{
    Q_OBJECT
private:
    float balance;
    QString accountNumber;
    const float overdraftFee = 32.00;
public:
    explicit Checking(QWidget *parent = nullptr);
    void deposit(float);
    void withdraw(float);
    void sentTransfer(float);
    void receivedTransfer(float);
    float getBalance() const;
    QString getAccountNumber() const;
    float getOverdraftFee() const;
signals:

public slots:
};

#endif // CHECKING_H
