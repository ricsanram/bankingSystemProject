#ifndef SAVINGSCHECKINGWINDOW_H
#define SAVINGSCHECKINGWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>

class SavingsCheckingWindow : public QMainWindow
{
    Q_OBJECT
private:

public:
    QLabel *AccNum = new QLabel(this);
    QLabel *currentAmount = new QLabel(this);
    QPushButton *windowClose = new QPushButton(this);

    explicit SavingsCheckingWindow(QWidget *parent = nullptr);
signals:

public slots:
};

#endif // SAVINGSCHECKINGWINDOW_H
