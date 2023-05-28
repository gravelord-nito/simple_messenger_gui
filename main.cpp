#include "mainwindow.h"// عکس انتخاب کردن وساختن کانال و گروه وایدی.کانتکت وسیو مسیج و ایموجی ومسیح و مسیج باکس و نشون دادن کانتکت واسم گذاری ابجکت ها  و فانکشنالیتی ,اسکرول اراو
#include"welcom.h"
#include <QApplication>
#include"asly.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    welcom* z=new welcom;
    z->show();
    return a.exec();
}
