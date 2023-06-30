#include "welcom.h"
#include "ui_welcom.h"
#include"signup.h"
#include<QString>
#include"http\tools.h"
#include"asly.h"
welcom::welcom(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::welcom)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
}

welcom::~welcom()
{
    delete ui;
}

void welcom::on_pushButton_2_clicked()
{
    this->close();
}


void welcom::on_signupbutton_2_clicked()
{
   signup*signup=new class signup ;
   signup->show();
   this->close();
}





void welcom::on_loginbuttom_clicked()
{QString pass;QString user;
    pass=ui->pass->text();
    user=ui->user->text();
    try{
     User zz(user.toStdString(),pass.toStdString());
    }
     catch(std::runtime_error &e){
         ui->user->setStyleSheet("color: rgb(255, 0, 4)");
         ui->pass->setStyleSheet("color: rgb(255, 0, 4)");
     }
asly* asl=new asly;
        asl->show();
        asl->setname(user);
this->close();
}

