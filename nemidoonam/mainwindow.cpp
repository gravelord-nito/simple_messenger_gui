#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"asly.h"
#include"welcom.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    User*zz=new User;
    if(zz->isLoggedin()==0){
        welcom* z=new welcom;
                z->show();


     }
    else if(zz->isLoggedin()==1){
        asly* asl=new asly;


             try{
                asl->show();
                asl->setuser(zz);
                asl->setname(QString::fromStdString(zz->getUser()));
               // asl->showcontact();

        }
             catch(...){}
        }
    }


MainWindow::~MainWindow()
{
    delete ui;
}

