#include "profuser.h"
#include "ui_profuser.h"

profuser::profuser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::profuser)
{
    ui->setupUi(this);
}

profuser::~profuser()
{
    delete ui;
}
