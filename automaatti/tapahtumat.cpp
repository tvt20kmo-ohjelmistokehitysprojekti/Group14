#include "tapahtumat.h"
#include "ui_tapahtumat.h"
#include "menu.h"

tapahtumat::tapahtumat(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tapahtumat)
{
    ui->setupUi(this);
}

tapahtumat::~tapahtumat()
{
    delete ui;
}

void tapahtumat::on_btnPalaa2_clicked()
{
    menu *me = new menu();
    me->show();
    this->close();
}
