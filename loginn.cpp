#include "loginn.h"
#include "ui_loginn.h"
#include "transaction.h"

Loginn::Loginn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Loginn)
{
    ui->setupUi(this);
}

Loginn::~Loginn()
{
    delete ui;
}

void Loginn::on_loginbtn_clicked()
{
     name=ui->username->text();
     info=ui->accountnumber->text();

     twindow = new Transaction();
     twindow -> setWelcomeMsg(name);
     twindow -> setAccountNumber(info);
     twindow -> show();
     this->close();

}

