#include "mainwindow.h"
#include"asly.h"
#include <QApplication>
#include"welcom.h"
#include<QFile>
#include"http\tools.h"
#include<QDebug>

int main(int argc, char *argv[])
{  QApplication a(argc, argv);MainWindow* w=new MainWindow;
    QString filename = "http/data.txt";
      QFile file(filename);

       if (file.open(QIODevice::ReadWrite)) {
          QTextStream stream(&file);
                stream << "something" << Qt::endl;

       }
      if(file.exists()){w->show();}

   file.close();



    return a.exec();
}
