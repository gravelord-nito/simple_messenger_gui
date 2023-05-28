#include "welcom.h"
#include "ui_welcom.h"

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

