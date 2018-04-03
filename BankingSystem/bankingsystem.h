#ifndef BANKINGSYSTEM_H
#define BANKINGSYSTEM_H

#include <QWidget>

#include "user.h"
#include "savings.h"
#include "checking.h"

#include "mainwindow.h"
#include "savingscheckingwindow.h"

class BankingSystem : public QWidget
{
    Q_OBJECT
private:
    User user;
    Savings savings;
    Checking checking;
    MainWindow mainWindow;
    SavingsCheckingWindow savingsCheckingWindow;
public:
    explicit BankingSystem(QWidget *parent = nullptr);

signals:

public slots:
};

#endif // BANKINGSYSTEM_H
