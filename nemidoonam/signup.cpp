#include "signup.h"
#include "ui_signup.h"
#include"http\tools.h"
#include"asly.h"
signup::signup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signup)
{
    ui->setupUi(this);
      this->setWindowFlags(Qt::FramelessWindowHint);
}

signup::~signup()
{
    delete ui;
}

void signup::on_pushButton_3_clicked()
{
    this->close();
}


void signup::on_pushButton_clicked()
{
      asly* asl=new class asly;
    QString pass=ui->pass->text();
    QString user=ui->username->text();
     User* zz=new User ();
     try{
    zz->signup(user.toStdString(),pass.toStdString());

    asl->show();
    asl->setuser(zz);
    //asl->setuser();
    asl->setname(user);
    this->close();
     }
     catch(...){}
}

