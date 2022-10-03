#include "transaction.h"
#include "ui_transaction.h"

Transaction::Transaction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Transaction)
{
    ui->setupUi(this);
}

Transaction::~Transaction()
{
    delete ui;
}

void Transaction::setWelcomeMsg(QString Name)
{
    ui->namelabel->setText("welcome "+Name);
}

void Transaction::setAccountNumber(QString info)
{
    ui->infolabel->setText("Account Number : " + info);
}

void Transaction::setbalance(int Bal)
{
    balance=Bal;
}

int Transaction::getbalance()
{
    return balance;
}

void Transaction::on_depositbutton_clicked()
{
    int Amount=ui->inputamount->text().toInt();
    balance+=Amount;
    ui->amount->setText(QString::number(balance) + "$");
    ui->status->setText("Successful Deposit!");
}


void Transaction::on_Withdrawbutton_clicked()
{
    int Amount=ui->inputamount->text().toInt();
    if(Amount>balance)
    {
        ui->status->setText("Ma3aksh feloos");

    }
    else
    {
        balance = balance - Amount;
        ui ->amount->setText(QString::number(balance)+"$");
        ui->status->setText("Successful Withdraw!");
    }

}

void Transaction::on_Clearbutton_clicked()
{
    ui->inputamount->setText(" ");
}


