#ifndef SEMA_H
#define SEMA_H

#include <QtGui/QMainWindow>

namespace Ui
{
    class Sema;
}

class Sema : public QMainWindow
{
    Q_OBJECT

public:
    Sema(QWidget *parent = 0);
    ~Sema();

private:
    Ui::Sema *ui;
};

#endif // SEMA_H
