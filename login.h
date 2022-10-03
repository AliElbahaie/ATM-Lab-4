#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
QT_END_NAMESPACE

class Transaction;
class Login : public QMainWindow
{
    Q_OBJECT

public:
    Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_loginbutton_clicked();

    void on_username_cursorPositionChanged(int arg1, int arg2);

private:

    Ui::Login *ui;

    QString name;
    QString info;
    Transaction* twindow;
};
#endif // LOGIN_H
