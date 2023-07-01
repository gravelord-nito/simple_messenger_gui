#ifndef ASLY_H
#define ASLY_H
#include"http\tools.h"
#include <QDialog>
#include<QTime>
#include<QLayoutItem>
namespace Ui {
class asly;
}

class asly : public QDialog
{
    Q_OBJECT

public:
    void clearLayout(QLayout* layout, bool deleteWidgets = true);
    void RemoveLayout (QWidget* widget);
    void showcontact(std::vector<absChat*>ser);
    Message* make_messege(QString mass,QString csrc){
        QTime* QTime=new  class QTime;
        QString time=QString::number(QTime->hour())+":";QString::number(QTime->second());
        QString src=name;
        Message* payam=new Message(mass.toStdString(),time.toStdString(),src.toStdString(),csrc.toStdString());
        return payam;
    }
    explicit asly(QWidget *parent = nullptr);
    ~asly();
void setname(QString nam){name=nam;}void setuser(User* z){user=z;}
private slots:
    void on_pushButton_2_clicked();
    void on_contact_clicked(QString id);
    void on_safejadid_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_20_clicked();







    void on_send_clicked();

  //  void on_serchtxt_textChanged(const QString &arg1);

    void on_doserch_clicked();

    void on_chanel_clicked();

    void on_gruop_clicked();

    void on_sakht_clicked();

    void on_logout_clicked();

    void on_back_clicked();

private:
    User* user;
    std::vector<absChat*>contact;

    void show_messeg(std::vector<Message*> messeges);
    QString name;
    Ui::asly *ui;
};

#endif // ASLY_H
