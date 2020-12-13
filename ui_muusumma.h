/********************************************************************************
** Form generated from reading UI file 'muusumma.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUUSUMMA_H
#define UI_MUUSUMMA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_muusumma
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *btnOK;
    QPushButton *btnPalaatakaisin;

    void setupUi(QWidget *muusumma)
    {
        if (muusumma->objectName().isEmpty())
            muusumma->setObjectName(QStringLiteral("muusumma"));
        muusumma->resize(590, 530);
        label = new QLabel(muusumma);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 250, 241, 41));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        lineEdit = new QLineEdit(muusumma);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(190, 310, 161, 31));
        lineEdit->setFont(font);
        btnOK = new QPushButton(muusumma);
        btnOK->setObjectName(QStringLiteral("btnOK"));
        btnOK->setGeometry(QRect(230, 370, 81, 31));
        QFont font1;
        font1.setPointSize(10);
        btnOK->setFont(font1);
        btnPalaatakaisin = new QPushButton(muusumma);
        btnPalaatakaisin->setObjectName(QStringLiteral("btnPalaatakaisin"));
        btnPalaatakaisin->setGeometry(QRect(430, 460, 111, 31));
        btnPalaatakaisin->setFont(font1);

        retranslateUi(muusumma);

        QMetaObject::connectSlotsByName(muusumma);
    } // setupUi

    void retranslateUi(QWidget *muusumma)
    {
        muusumma->setWindowTitle(QApplication::translate("muusumma", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("muusumma", "Sy\303\266t\303\244 haluamasi summa", Q_NULLPTR));
        btnOK->setText(QApplication::translate("muusumma", "OK", Q_NULLPTR));
        btnPalaatakaisin->setText(QApplication::translate("muusumma", "Palaa takaisin", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class muusumma: public Ui_muusumma {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUUSUMMA_H
