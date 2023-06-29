#include "mainwindow.h"
#include"asly.h"
#include <QApplication>
#include"welcom.h"
<<<<<<< HEAD
=======
#include"http\tools.h"

>>>>>>> 07921016c62a76203c30120983549a95ed803b09
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    asly* w=new asly;
    w->show();
    return a.exec();
}
