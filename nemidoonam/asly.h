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

private:
    Ui::asly *ui;
};

#endif // ASLY_H
