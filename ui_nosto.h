/********************************************************************************
** Form generated from reading UI file 'nosto.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOSTO_H
#define UI_NOSTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_nosto
{
public:
    QPushButton *btn20;
    QPushButton *btn40;
    QPushButton *btn50;
    QPushButton *btn100;
    QPushButton *btnmuusumma;
    QLabel *label;
    QPushButton *btnPalaa;

    void setupUi(QWidget *nosto)
    {
        if (nosto->objectName().isEmpty())
            nosto->setObjectName(QStringLiteral("nosto"));
        nosto->resize(619, 537);
        QPalette palette;
        QBrush brush(QColor(255, 170, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        nosto->setPalette(palette);
        btn20 = new QPushButton(nosto);
        btn20->setObjectName(QStringLiteral("btn20"));
        btn20->setGeometry(QRect(120, 180, 131, 51));
        QFont font;
        font.setPointSize(12);
        btn20->setFont(font);
        btn40 = new QPushButton(nosto);
        btn40->setObjectName(QStringLiteral("btn40"));
        btn40->setGeometry(QRect(120, 270, 131, 51));
        btn40->setFont(font);
        btn50 = new QPushButton(nosto);
        btn50->setObjectName(QStringLiteral("btn50"));
        btn50->setGeometry(QRect(340, 180, 131, 51));
        btn50->setFont(font);
        btn100 = new QPushButton(nosto);
        btn100->setObjectName(QStringLiteral("btn100"));
        btn100->setGeometry(QRect(340, 270, 131, 51));
        btn100->setFont(font);
        btnmuusumma = new QPushButton(nosto);
        btnmuusumma->setObjectName(QStringLiteral("btnmuusumma"));
        btnmuusumma->setGeometry(QRect(230, 360, 131, 51));
        btnmuusumma->setFont(font);
        label = new QLabel(nosto);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 110, 221, 41));
        QFont font1;
        font1.setPointSize(14);
        label->setFont(font1);
        btnPalaa = new QPushButton(nosto);
        btnPalaa->setObjectName(QStringLiteral("btnPalaa"));
        btnPalaa->setGeometry(QRect(454, 462, 111, 31));
        QFont font2;
        font2.setPointSize(10);
        btnPalaa->setFont(font2);

        retranslateUi(nosto);

        QMetaObject::connectSlotsByName(nosto);
    } // setupUi

    void retranslateUi(QWidget *nosto)
    {
        nosto->setWindowTitle(QApplication::translate("nosto", "Form", Q_NULLPTR));
        btn20->setText(QApplication::translate("nosto", "20", Q_NULLPTR));
        btn40->setText(QApplication::translate("nosto", "40", Q_NULLPTR));
        btn50->setText(QApplication::translate("nosto", "50", Q_NULLPTR));
        btn100->setText(QApplication::translate("nosto", "100", Q_NULLPTR));
        btnmuusumma->setText(QApplication::translate("nosto", "muu summa", Q_NULLPTR));
        label->setText(QApplication::translate("nosto", "Valitse nostettava summa", Q_NULLPTR));
        btnPalaa->setText(QApplication::translate("nosto", "Palaa takaisin", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class nosto: public Ui_nosto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOSTO_H
