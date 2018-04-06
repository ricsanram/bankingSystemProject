#ifndef BANKINGSYSTEM_H
#define BANKINGSYSTEM_H

#include <QWidget>

#include "user.h"
#include "savings.h"
#include "checking.h"

#include "mainwindow.h"
#include "savingscheckingwindow.h"
#include "login.h"
#include "depositwindow.h"
#include "depositcheckingwindow.h"
#include "depositsavingswindow.h"
#include "withdrawwindow.h"
#include "transferwindow.h"

class BankingSystem : public QWidget
{
    Q_OBJECT
private:
    MainWindow mainWindow;
    SavingsCheckingWindow savingsCheckingWindow;
    Login login;
    DepositWindow depositWindow;
    DepositSavingsWindow depositSavingsWindow;
    DepositCheckingWindow depositCheckingWindow;
    WithdrawWindow withdrawWindow;
    TransferWindow transferWindow;

    User user;
    Savings savings;
    Checking checking;

public:
    explicit BankingSystem(QWidget *parent = nullptr);

signals:

public slots:
    void performLogin();
    void savingsWindowUpdate();
    void checkingWindowUpdate();
};

#endif // BANKINGSYSTEM_H
