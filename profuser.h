#ifndef PROFUSER_H
#define PROFUSER_H

#include <QDialog>

namespace Ui {
class profuser;
}

class profuser : public QDialog
{
    Q_OBJECT

public:
    explicit profuser(QWidget *parent = nullptr);
    ~profuser();

private:
    Ui::profuser *ui;
};

#endif // PROFUSER_H
