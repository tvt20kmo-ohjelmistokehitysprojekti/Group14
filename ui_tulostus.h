/********************************************************************************
** Form generated from reading UI file 'tulostus.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TULOSTUS_H
#define UI_TULOSTUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tulostus
{
public:
    QLabel *label;

    void setupUi(QWidget *tulostus)
    {
        if (tulostus->objectName().isEmpty())
            tulostus->setObjectName(QStringLiteral("tulostus"));
        tulostus->resize(543, 531);
        label = new QLabel(tulostus);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 230, 351, 31));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        retranslateUi(tulostus);

        QMetaObject::connectSlotsByName(tulostus);
    } // setupUi

    void retranslateUi(QWidget *tulostus)
    {
        tulostus->setWindowTitle(QApplication::translate("tulostus", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("tulostus", "Odota hetki, valitsemasi summa tulostuu", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class tulostus: public Ui_tulostus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TULOSTUS_H
