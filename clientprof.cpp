#include "clientprof.h"
#include "ui_clientprof.h"

clientprof::clientprof(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::clientprof)
{
    ui->setupUi(this);
}

clientprof::~clientprof()
{
    delete ui;
}
