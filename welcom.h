#ifndef WELCOM_H
#define WELCOM_H

#include <QDialog>

namespace Ui {
class welcom;
}

class welcom : public QDialog
{
    Q_OBJECT

public:
    explicit welcom(QWidget *parent = nullptr);
    ~welcom();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::welcom *ui;
};

#endif // WELCOM_H
