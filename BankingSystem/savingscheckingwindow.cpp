#include "savingscheckingwindow.h"
#include <QLabel>
#include <QPushButton>

SavingsCheckingWindow::SavingsCheckingWindow(QWidget *parent) : QMainWindow(parent)
{
    this->setWindowTitle("Savings");
    this->setFixedSize(600, 400);

    QLabel *AccNum = new QLabel(this);
    AccNum->setText("Account Number: 123456"); //!!!!!!!
    AccNum->setFixedSize(600,40);
    AccNum->setStyleSheet("font-size: 25px;");
    AccNum->setAlignment(Qt::AlignCenter);
    AccNum->move(0, 50);

    QLabel *currentAmount = new QLabel(this);
    currentAmount->setText("$250.00"); //!!!!!!!!!!!!!!!!!
    currentAmount->setFixedSize(600,80);
    currentAmount->setStyleSheet("font-size: 80px;");
    currentAmount->setAlignment(Qt::AlignCenter);
    currentAmount->move(0, 150);

    QPushButton *windowClose = new QPushButton(this);
    windowClose->setText("OK");
    windowClose->setFixedSize(150,50);
    windowClose->move(225,300);
    windowClose->connect(windowClose,SIGNAL(clicked()), this, SLOT(close()));
}
