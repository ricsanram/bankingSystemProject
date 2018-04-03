#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:

public:
    QLabel *welcome = new QLabel(this);
    QLabel *usersName = new QLabel(this);
    QPushButton *savingsAccount = new QPushButton(this);
    QPushButton *checkingAccount = new QPushButton(this);
    QPushButton *depositFunds = new QPushButton(this);
    QPushButton *withdrawFunds = new QPushButton(this);
    QPushButton *transferFunds = new QPushButton(this);
    QPushButton *checkTransactionHistory = new QPushButton(this);
    QPushButton *quitProgram = new QPushButton(this);

    explicit MainWindow(QWidget *parent = nullptr);

signals:

public slots:
};

#endif // MAINWINDOW_H
