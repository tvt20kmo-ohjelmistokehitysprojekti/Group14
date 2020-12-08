#include "nosto.h"
#include "ui_nosto.h"
#include "menu.h"
#include "muusumma.h"
#include "eivaraa.h"
#include "tulostus.h"

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

}
