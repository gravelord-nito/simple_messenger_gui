#include "signup.h"
#include "ui_signup.h"

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

