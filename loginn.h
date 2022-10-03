#ifndef LOGINN_H
#define LOGINN_H

#include <QDialog>

namespace Ui {
class Loginn;
}
class Transaction;
class Loginn : public QDialog
{
    Q_OBJECT

public:
    explicit Loginn(QWidget *parent = nullptr);
    ~Loginn();

private slots:
    void on_loginbtn_clicked();


private:
    Ui::Loginn *ui;

    QString name;
    QString info;
    Transaction* twindow;
};

#endif // LOGINN_H
