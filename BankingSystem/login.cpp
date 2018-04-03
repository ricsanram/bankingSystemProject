#include "login.h"

Login::Login(QWidget *parent) : QMainWindow(parent)
{
    this->setWindowTitle("Login");
    this->setFixedSize(600, 400);

    cheatLabel->setText(" User Name: username\n Password: password");
    cheatLabel->setFixedSize(600,52);

    loginLabel->setText("Login");
    loginLabel->setStyleSheet("font-size: 40px");
    loginLabel->setAlignment(Qt::AlignCenter);
    loginLabel->setFixedSize(300,50);
    loginLabel->move(150,50);

    userNameInput->setPlaceholderText("User Name");
    userNameInput->setStyleSheet("font-size: 32px");
    userNameInput->setAlignment(Qt::AlignCenter);
    userNameInput->setFixedSize(300,60);
    userNameInput->move(150,125);

    passwordInput->setPlaceholderText("Password");
    passwordInput->setStyleSheet("font-size: 32px");
    passwordInput->setAlignment(Qt::AlignCenter);
    passwordInput->setEchoMode(QLineEdit::Password);
    passwordInput->setFixedSize(300,60);
    passwordInput->move(150,200);

    loginButton->setText("Enter");
    loginButton->setFixedSize(150,50);
    loginButton->move(225,300);
}

