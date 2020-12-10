#include "nosto.h"
#include "ui_nosto.h"
#include "menu.h"
#include "muusumma.h"
#include "eivaraa.h"
#include "tulostus.h"
#include "mainwindow.h"


nosto::nosto(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::nosto)
{
    ui->setupUi(this);
}

nosto::~nosto()
{
    delete ui;
}

void nosto::on_btn20_clicked()
{

}

void nosto::on_btn40_clicked()
{

}

void nosto::on_btn50_clicked()
{

}

void nosto::on_btn100_clicked()
{

}

void nosto::on_btnmuusumma_clicked()
{
    muusumma *ms = new muusumma();
    ms->show();
    this->close();
}

void nosto::on_btnPalaa_clicked()
{
    menu *me = new menu();
    me->show();
    this->close();
}
