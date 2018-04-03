#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>

class Login : public QMainWindow
{
    Q_OBJECT
public:
    QLabel *cheatLabel = new QLabel(this);
    QPushButton *loginButton = new QPushButton(this);
    QLabel *loginLabel = new QLabel(this);
    QLineEdit *userNameInput = new QLineEdit(this);
    QLineEdit *passwordInput = new QLineEdit(this);

    explicit Login(QWidget *parent = nullptr);

signals:

public slots:

};

#endif // LOGIN_H
