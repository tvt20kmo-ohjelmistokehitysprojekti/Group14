/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menu
{
public:
    QPushButton *btnNosto;
    QPushButton *btnSaldo;
    QPushButton *btnTapahtumat;
    QPushButton *btnKirjauduulos;
    QLabel *labelTervetuloa;
    QLabel *labelSaldoTulostus;
    QLabel *labelTapahtumaTulostus;
    QTextBrowser *textTapahtumat;

    void setupUi(QWidget *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName(QStringLiteral("menu"));
        menu->resize(654, 510);
        btnNosto = new QPushButton(menu);
        btnNosto->setObjectName(QStringLiteral("btnNosto"));
        btnNosto->setGeometry(QRect(90, 170, 151, 61));
        QFont font;
        font.setPointSize(12);
        btnNosto->setFont(font);
        btnNosto->setStyleSheet(QStringLiteral("background-color: rgb(0, 255, 255);"));
        btnSaldo = new QPushButton(menu);
        btnSaldo->setObjectName(QStringLiteral("btnSaldo"));
        btnSaldo->setGeometry(QRect(90, 260, 151, 61));
        btnSaldo->setFont(font);
        btnTapahtumat = new QPushButton(menu);
        btnTapahtumat->setObjectName(QStringLiteral("btnTapahtumat"));
        btnTapahtumat->setGeometry(QRect(90, 350, 151, 61));
        btnTapahtumat->setFont(font);
        btnKirjauduulos = new QPushButton(menu);
        btnKirjauduulos->setObjectName(QStringLiteral("btnKirjauduulos"));
        btnKirjauduulos->setGeometry(QRect(270, 440, 111, 23));
        QFont font1;
        font1.setPointSize(10);
        btnKirjauduulos->setFont(font1);
        labelTervetuloa = new QLabel(menu);
        labelTervetuloa->setObjectName(QStringLiteral("labelTervetuloa"));
        labelTervetuloa->setGeometry(QRect(250, 40, 171, 71));
        QFont font2;
        font2.setFamily(QStringLiteral("Sylfaen"));
        font2.setPointSize(22);
        labelTervetuloa->setFont(font2);
        labelSaldoTulostus = new QLabel(menu);
        labelSaldoTulostus->setObjectName(QStringLiteral("labelSaldoTulostus"));
        labelSaldoTulostus->setGeometry(QRect(310, 270, 201, 41));
        labelTapahtumaTulostus = new QLabel(menu);
        labelTapahtumaTulostus->setObjectName(QStringLiteral("labelTapahtumaTulostus"));
        labelTapahtumaTulostus->setGeometry(QRect(230, 10, 331, 51));
        textTapahtumat = new QTextBrowser(menu);
        textTapahtumat->setObjectName(QStringLiteral("textTapahtumat"));
        textTapahtumat->setGeometry(QRect(260, 350, 371, 61));

        retranslateUi(menu);

        QMetaObject::connectSlotsByName(menu);
    } // setupUi

    void retranslateUi(QWidget *menu)
    {
        menu->setWindowTitle(QApplication::translate("menu", "Form", Q_NULLPTR));
        btnNosto->setText(QApplication::translate("menu", "Nosto", Q_NULLPTR));
        btnSaldo->setText(QApplication::translate("menu", "Saldo", Q_NULLPTR));
        btnTapahtumat->setText(QApplication::translate("menu", "Tapahtumat", Q_NULLPTR));
        btnKirjauduulos->setText(QApplication::translate("menu", "Kirjaudu ulos", Q_NULLPTR));
        labelTervetuloa->setText(QApplication::translate("menu", "Tervetuloa", Q_NULLPTR));
        labelSaldoTulostus->setText(QString());
        labelTapahtumaTulostus->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
