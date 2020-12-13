/********************************************************************************
** Form generated from reading UI file 'tapahtumat.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAPAHTUMAT_H
#define UI_TAPAHTUMAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tapahtumat
{
public:
    QLabel *label;
    QPushButton *btnPalaa2;
    QLabel *labelTapahtumat;

    void setupUi(QWidget *tapahtumat)
    {
        if (tapahtumat->objectName().isEmpty())
            tapahtumat->setObjectName(QStringLiteral("tapahtumat"));
        tapahtumat->resize(589, 543);
        label = new QLabel(tapahtumat);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 120, 171, 31));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        btnPalaa2 = new QPushButton(tapahtumat);
        btnPalaa2->setObjectName(QStringLiteral("btnPalaa2"));
        btnPalaa2->setGeometry(QRect(440, 480, 111, 31));
        QFont font1;
        font1.setPointSize(10);
        btnPalaa2->setFont(font1);
        labelTapahtumat = new QLabel(tapahtumat);
        labelTapahtumat->setObjectName(QStringLiteral("labelTapahtumat"));
        labelTapahtumat->setGeometry(QRect(130, 230, 311, 181));

        retranslateUi(tapahtumat);

        QMetaObject::connectSlotsByName(tapahtumat);
    } // setupUi

    void retranslateUi(QWidget *tapahtumat)
    {
        tapahtumat->setWindowTitle(QApplication::translate("tapahtumat", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("tapahtumat", "Tapahtumien selaus", Q_NULLPTR));
        btnPalaa2->setText(QApplication::translate("tapahtumat", "Palaa takaisin", Q_NULLPTR));
        labelTapahtumat->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class tapahtumat: public Ui_tapahtumat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAPAHTUMAT_H
