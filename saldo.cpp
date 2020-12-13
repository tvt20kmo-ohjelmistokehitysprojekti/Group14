#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <qjsondocument.h>
#include "saldo.h"
#include "ui_saldo.h"
#include "nosto.h"
#include "menu.h"

saldo::saldo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::saldo)
{
    ui->setupUi(this);

        QNetworkRequest request(QUrl("http://www.students.oamk.fi/~t9visa03/Group14/RestApi-master/index.php/api/tili/saldo/?idkortti="+this->getIdkortti_saldo()));
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

        ui->labelSaldo->setText(response_data);

}

saldo::~saldo()
{
    delete ui;
}

void saldo::on_btnPalaa1_clicked()
{
    menu *me = new menu();
    me->show();
    this->close();
}

QString saldo::getIdkortti_saldo() const
{
    return idkortti_saldo;
}

void saldo::setIdkortti_saldo(const QString &value)
{
    idkortti_saldo = value;
}

void saldo::on_showSaldo_clicked()
{


    }

