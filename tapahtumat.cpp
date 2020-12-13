#include "tapahtumat.h"
#include "ui_tapahtumat.h"
#include "menu.h"

tapahtumat::tapahtumat(QString tapahtumat, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tapahtumat)
{
    ui->setupUi(this);
    ui->labelTapahtumat->setText(tapahtumat);
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
