#include "sema.h"
#include "ui_sema.h"

Sema::Sema(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::Sema)
{
    ui->setupUi(this);
}

Sema::~Sema()
{
    delete ui;
}
