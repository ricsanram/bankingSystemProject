#ifndef DEPOSITWINDOW_H
#define DEPOSITWINDOW_H

#include <QMainWindow>
#include <QPushButton>

class DepositWindow : public QMainWindow
{
    Q_OBJECT
public:

    QPushButton *depositSavings = new QPushButton(this);
    QPushButton *depositChecking = new QPushButton(this);
    QPushButton *windowDepositClose = new QPushButton(this);

    explicit DepositWindow(QWidget *parent = nullptr);

signals:

public slots:
};

#endif // DEPOSITWINDOW_H
