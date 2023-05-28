#ifndef CLIENTPROF_H
#define CLIENTPROF_H

#include <QDialog>

namespace Ui {
class clientprof;
}

class clientprof : public QDialog
{
    Q_OBJECT

public:
    explicit clientprof(QWidget *parent = nullptr);
    ~clientprof();

private:
    Ui::clientprof *ui;
};

#endif // CLIENTPROF_H
