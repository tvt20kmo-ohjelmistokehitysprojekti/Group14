#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <qjsondocument.h>
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
    /*int i = 10000;
    QString nosto = QString::number(i);
    QNetworkRequest request(QUrl("http://www.students.oamk.fi/~t9visa03/Group14/RestApi-master/index.php/api/tili/saldo/?idkortti="+this->getIdkortti_nosto()));
          request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
          //Authenticate
          QString username="admin";
          QString password="1234";
          QString concatenatedCredentials = username + ":" + password;
             QByteArray data = concatenatedCredentials.toLocal8Bit().toBase64();
             QString headerData = "Basic " + data;
             request.setRawHeader( "Authorization", headerData.toLocal8Bit() );

          QNetworkAccessManager nam;
          QNetworkReply *reply = nam.get(request);
          while (!reply->isFinished())
          {
              qApp->processEvents();
          }
          QByteArray saldo= reply->readAll();

          qDebug()<<"DATA:"+saldo;

          reply->deleteLater();

          if (saldo <= nosto){
              tulostus *tu = new tulostus();
              tu->show();
              this->close();
          }
          else {
              eivaraa *ev = new eivaraa();
              ev->show();
              this->close();

          }*/
    tulostus *tu = new tulostus();
    tu->show();}

void nosto::on_btn40_clicked()
{
    tulostus *tu = new tulostus();
    tu->show();
}

void nosto::on_btn50_clicked()
{
    tulostus *tu = new tulostus();
    tu->show();
}

void nosto::on_btn100_clicked()
{
    eivaraa *ev = new eivaraa();
    ev->show();
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

QString nosto::getIdkortti_nosto() const
{
    return idkortti_nosto;
}

void nosto::setIdkortti_nosto(const QString &value)
{
    idkortti_nosto = value;
}
