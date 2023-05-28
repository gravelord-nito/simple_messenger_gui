#include "chatpage.h"
#include "ui_chatpage.h"

chatpage::chatpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chatpage)
{
    ui->setupUi(this);
}

chatpage::~chatpage()
{
    delete ui;
}
