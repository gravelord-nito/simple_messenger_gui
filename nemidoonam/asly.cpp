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
