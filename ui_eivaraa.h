/********************************************************************************
** Form generated from reading UI file 'eivaraa.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EIVARAA_H
#define UI_EIVARAA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_eivaraa
{
public:
    QLabel *label;
    QPushButton *btnPalaa3;

    void setupUi(QWidget *eivaraa)
    {
        if (eivaraa->objectName().isEmpty())
            eivaraa->setObjectName(QStringLiteral("eivaraa"));
        eivaraa->resize(522, 537);
        label = new QLabel(eivaraa);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 190, 331, 91));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        btnPalaa3 = new QPushButton(eivaraa);
        btnPalaa3->setObjectName(QStringLiteral("btnPalaa3"));
        btnPalaa3->setGeometry(QRect(170, 290, 161, 31));
        QFont font1;
        font1.setPointSize(10);
        btnPalaa3->setFont(font1);

        retranslateUi(eivaraa);

        QMetaObject::connectSlotsByName(eivaraa);
    } // setupUi

    void retranslateUi(QWidget *eivaraa)
    {
        eivaraa->setWindowTitle(QApplication::translate("eivaraa", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("eivaraa", "Tilill\303\244si ei ole katetta valitsemaasi summaan", Q_NULLPTR));
        btnPalaa3->setText(QApplication::translate("eivaraa", "Palaa takaisin", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class eivaraa: public Ui_eivaraa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EIVARAA_H
