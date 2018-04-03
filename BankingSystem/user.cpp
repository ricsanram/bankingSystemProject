#include "user.h"

User::User(QWidget *parent) : QWidget(parent)
{
    name="Scoobert Doobert";
    userName="username";
    passWord="password";

}

QString User::getName() const
{
    return name;
}

QString User::getUserName() const
{
    return userName;
}

QString User::getPassWord() const
{
    return passWord;
}
