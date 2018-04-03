#ifndef USER_H
#define USER_H

#include <QWidget>

class User : public QWidget
{
    Q_OBJECT
private:
    QString name;
    QString userName;
    QString passWord;
public:
    explicit User(QWidget *parent = nullptr);
    QString getName() const;
    QString getUserName() const;
    QString getPassWord() const;
signals:

public slots:
};

#endif // USER_H
