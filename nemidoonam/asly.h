#ifndef ASLY_H
#define ASLY_H
#include"http\tools.h"
#include <QDialog>

namespace Ui {
class asly;
}

class asly : public QDialog
{
    Q_OBJECT

public:
    explicit asly(QWidget *parent = nullptr);
    ~asly();
void setname(QString nam){name=nam;}
private slots:
    void on_pushButton_2_clicked();
    void on_contact_clicked(QString id);
    void on_safejadid_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_20_clicked();







    void on_send_clicked();
    void setuser(User* z){user=z;}
    void on_serchtxt_textChanged(const QString &arg1);

    void on_doserch_clicked();

    void on_chanel_clicked();

    void on_gruop_clicked();

private:
    User* user;
    std::vector<absChat*>contact;
    void showcontact(std::vector<absChat*>ser);
    void show_messeg(std::vector<Message*> messeges);
    QString name;
    Ui::asly *ui;
};

#endif // ASLY_H
