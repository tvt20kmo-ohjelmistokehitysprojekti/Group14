#include "muusumma.h"
#include "ui_muusumma.h"
#include "nosto.h"
#include "tulostus.h"
#include "eivaraa.h"
#include "menu.h"

muusumma::muusumma(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::muusumma)
{
    ui->setupUi(this);
}

muusumma::~muusumma()
{
    delete ui;
}


void muusumma::on_btnOK_clicked()
{
    //siirtyy tulostukseen tai eivaraa
}


void muusumma::on_btnPalaatakaisin_clicked()
{
    menu *me = new menu();
    me->show();
    this->close();
}
