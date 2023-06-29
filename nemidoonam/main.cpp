#include "mainwindow.h"
#include"asly.h"
#include <QApplication>
#include"welcom.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    asly* w=new asly;
    w->show();
    return a.exec();
}
