#ifndef DEPOSITSAVINGSWINDOW_H
#define DEPOSITSAVINGSWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QPushButton>

class DepositSavingsWindow : public QMainWindow
{
    Q_OBJECT
public:
    QLineEdit *depositInput = new QLineEdit(this);
    QPushButton *windowDepositMoneyClose = new QPushButton(this);

    explicit DepositSavingsWindow(QWidget *parent = nullptr);

signals:

public slots:
};

#endif // DEPOSITSAVINGSWINDOW_H
