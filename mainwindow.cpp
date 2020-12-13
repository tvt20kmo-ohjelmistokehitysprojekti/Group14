#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <qjsondocument.h>
#include "menu.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnLogin_clicked()
{
    QString numero,pin;
        numero=ui->lineEditnumero->text();
        pin=ui->lineEditpin->text();



        QNetworkRequest request(QUrl("http://www.students.oamk.fi/~t9visa03/Group14/RestApi-master/index.php/api/login/check_login/?numero="+numero+"&pin="+pin));
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
              QByteArray response_data= reply->readAll();

              qDebug()<<"DATA:"+response_data;

              reply->deleteLater();

              if (response_data == "true"){
                  menu *me = new menu();
                  me->setIdkortti(numero);
                  me->show();
                  this->close();
              }
              else {
                  ui->labellogintest->setText("Väärä PIN");

              }
}


