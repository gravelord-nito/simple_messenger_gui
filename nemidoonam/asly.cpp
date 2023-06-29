#include "asly.h"
#include "ui_asly.h"

asly::asly(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::asly)
{
    ui->setupUi(this);
}

asly::~asly()
{
    delete ui;
}

void asly::on_pushButton_2_clicked()
{

}


void asly::on_safejadid_clicked()
{
    ui->setting->setMaximumSize(QSize(12342,12321));
}


void asly::on_pushButton_16_clicked()
{
    ui->setting->setMaximumSize(QSize(0,0));
    ui->setting->setMinimumSize(QSize(0,0));
}


void asly::on_pushButton_14_clicked()
{
    ui->setting->setMaximumSize(QSize(0,0));
    ui->setting->setMinimumSize(QSize(0,0));
    ui->userinformation->setMaximumSize(QSize(1234,1234));
}


void asly::on_pushButton_20_clicked()
{
    ui->setting->setMaximumSize(QSize(1234,1234));
    ui->userinformation->setMaximumSize(QSize(0,0));
    ui->userinformation->setMinimumSize(QSize(0,0));
}

