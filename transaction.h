#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <QDialog>
#include <string>

namespace Ui {
class Transaction;
}

class Transaction : public QDialog
{
    Q_OBJECT

public:
    explicit Transaction(QWidget *parent = nullptr);

    void setWelcomeMsg(QString Name);

    void setAccountNumber(QString info);

    void setbalance(int balance);

    int getbalance();

    ~Transaction();




private slots:


    void on_depositbutton_clicked();

    void on_Withdrawbutton_clicked();

    void on_Clearbutton_clicked();

private:
    Ui::Transaction *ui;

    int balance=0;
    std::string history[10];
};

#endif // TRANSACTION_H
