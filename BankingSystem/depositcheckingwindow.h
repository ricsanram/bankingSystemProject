#ifndef DEPOSITCHECKINGWINDOW_H
#define DEPOSITCHECKINGWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QPushButton>

class DepositCheckingWindow : public QMainWindow
{
    Q_OBJECT
public:
    QLineEdit *depositInput = new QLineEdit(this);
    QPushButton *windowDepositMoneyClose = new QPushButton(this);

    explicit DepositCheckingWindow(QWidget *parent = nullptr);

signals:

public slots:
};

#endif // DEPOSITCHECKINGWINDOW_H
