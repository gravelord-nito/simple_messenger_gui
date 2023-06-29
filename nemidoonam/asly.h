#ifndef ASLY_H
#define ASLY_H

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

private slots:
    void on_pushButton_2_clicked();

    void on_safejadid_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_20_clicked();

private:
    Ui::asly *ui;
};

#endif // ASLY_H
