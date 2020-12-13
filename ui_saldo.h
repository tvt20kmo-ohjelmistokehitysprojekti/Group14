/********************************************************************************
** Form generated from reading UI file 'saldo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALDO_H
#define UI_SALDO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_saldo
{
public:
    QLabel *label;
    QPushButton *btnPalaa1;
    QLabel *labelSaldo;
    QPushButton *showSaldo;

    void setupUi(QWidget *saldo)
    {
        if (saldo->objectName().isEmpty())
            saldo->setObjectName(QStringLiteral("saldo"));
        saldo->resize(557, 530);
        label = new QLabel(saldo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 110, 121, 41));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        btnPalaa1 = new QPushButton(saldo);
        btnPalaa1->setObjectName(QStringLiteral("btnPalaa1"));
        btnPalaa1->setGeometry(QRect(394, 462, 121, 31));
        QFont font1;
        font1.setPointSize(10);
        btnPalaa1->setFont(font1);
        labelSaldo = new QLabel(saldo);
        labelSaldo->setObjectName(QStringLiteral("labelSaldo"));
        labelSaldo->setGeometry(QRect(80, 180, 341, 231));
        showSaldo = new QPushButton(saldo);
        showSaldo->setObjectName(QStringLiteral("showSaldo"));
        showSaldo->setGeometry(QRect(370, 60, 75, 23));

        retranslateUi(saldo);

        QMetaObject::connectSlotsByName(saldo);
    } // setupUi

    void retranslateUi(QWidget *saldo)
    {
        saldo->setWindowTitle(QApplication::translate("saldo", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("saldo", "Tilin saldo", Q_NULLPTR));
        btnPalaa1->setText(QApplication::translate("saldo", "Palaa takaisin", Q_NULLPTR));
        labelSaldo->setText(QString());
        showSaldo->setText(QApplication::translate("saldo", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class saldo: public Ui_saldo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALDO_H
