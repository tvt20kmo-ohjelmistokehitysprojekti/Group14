#include "muusumma.h"
#include "ui_muusumma.h"

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
