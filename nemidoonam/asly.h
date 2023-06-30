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
    void on_contact_clicked();
    void on_safejadid_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_20_clicked();





    void on_doserch_clicked();

    void on_safejadid_2_clicked();

    void on_doserch_2_clicked();

private:
    std::vector<Message>contact;
    void showcontact();
    void show_messeg(std::vector<Message> messeges);
    QString name;
    Ui::asly *ui;
};

#endif // ASLY_H
