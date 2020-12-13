#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <qjsondocument.h>
#include "menu.h"
#include "ui_menu.h"
#include "nosto.h"
#include "saldo.h"
#include "tapahtumat.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"


menu::menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
}

menu::~menu()
{
    delete ui;
}

void menu::on_btnNosto_clicked()
{
    nosto *no = new nosto();
    no->show();
    this->close();
}

void menu::on_btnSaldo_clicked()
{
    QNetworkRequest request(QUrl("http://www.students.oamk.fi/~t9visa03/Group14/RestApi-master/index.php/api/tili/saldo/?idkortti="+this->getIdkortti()));
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
        QByteArray response_data = reply->readAll();

        qDebug()<<"Saldo on "+response_data;
        reply->deleteLater();

    ui->labelSaldoTulostus->setText(response_data + " €");
    /*saldo *sa = new saldo();
    sa->setIdkortti_saldo(this->getIdkortti());
    sa->show();*/
}

void menu::on_btnTapahtumat_clicked()
{
    QNetworkRequest request(QUrl("http://www.students.oamk.fi/~t9visa03/Group14/RestApi-master/index.php/api/tapahtumat/?idkortti="+this->getIdkortti()));
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
        QByteArray response_data = reply->readAll();

        QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
        QJsonObject jsobj = json_doc.object();
        QJsonArray jsarr = json_doc.array();

        qDebug()<<response_data;

        QString tapahtuma;
                foreach (const QJsonValue &value, jsarr) {
                  QJsonObject jsob = value.toObject();
                  tapahtuma+=jsob["pvm"].toString()+", "+jsob["paikka"].toString()+", "+jsob["summa"].toString()+ " €"+"\r";
                  ui->textTapahtumat->setText(tapahtuma);
                }

       // ui->labelTapahtumaTulostus->setText(response_data);


        reply->deleteLater();
}

void menu::on_btnKirjauduulos_clicked()
{
    this->close();
}

QString menu::getIdkortti() const
{
    return idkortti;
}

void menu::setIdkortti(const QString &value)
{
    idkortti = value;
}
