#ifndef BANKINGSYSTEM_H
#define BANKINGSYSTEM_H

#include <QWidget>

#include "user.h"
#include "savings.h"
#include "checking.h"

#include "mainwindow.h"
#include "savingscheckingwindow.h"
#include "login.h"

class BankingSystem : public QWidget
{
    Q_OBJECT
private:
    MainWindow mainWindow;
    SavingsCheckingWindow savingsCheckingWindow;
    Login login;
    User user;
    Savings savings;
    Checking checking;

public:
    explicit BankingSystem(QWidget *parent = nullptr);

signals:

public slots:
    void performLogin();
};

#endif // BANKINGSYSTEM_H
