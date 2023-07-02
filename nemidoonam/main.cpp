#include "mainwindow.h"
#include"asly.h"
#include <QApplication>
#include"welcom.h"

#include"http\tools.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow* w=new MainWindow;
    return a.exec();
}
