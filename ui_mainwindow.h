/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *labelcardid;
    QPushButton *btnLogin;
    QLineEdit *lineEditnumero;
    QLineEdit *lineEditpin;
    QLabel *labelpin;
    QLabel *labellogintest;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(486, 415);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        labelcardid = new QLabel(centralWidget);
        labelcardid->setObjectName(QStringLiteral("labelcardid"));
        labelcardid->setGeometry(QRect(170, 100, 111, 31));
        QFont font;
        font.setPointSize(12);
        labelcardid->setFont(font);
        btnLogin = new QPushButton(centralWidget);
        btnLogin->setObjectName(QStringLiteral("btnLogin"));
        btnLogin->setGeometry(QRect(180, 310, 91, 31));
        QFont font1;
        font1.setPointSize(14);
        btnLogin->setFont(font1);
        lineEditnumero = new QLineEdit(centralWidget);
        lineEditnumero->setObjectName(QStringLiteral("lineEditnumero"));
        lineEditnumero->setGeometry(QRect(140, 150, 171, 31));
        lineEditnumero->setFont(font);
        lineEditnumero->setStyleSheet(QStringLiteral("background-color: rgb(170, 85, 127);"));
        lineEditpin = new QLineEdit(centralWidget);
        lineEditpin->setObjectName(QStringLiteral("lineEditpin"));
        lineEditpin->setGeometry(QRect(150, 240, 161, 31));
        lineEditpin->setFont(font);
        labelpin = new QLabel(centralWidget);
        labelpin->setObjectName(QStringLiteral("labelpin"));
        labelpin->setGeometry(QRect(210, 200, 41, 20));
        labelpin->setFont(font);
        labellogintest = new QLabel(centralWidget);
        labellogintest->setObjectName(QStringLiteral("labellogintest"));
        labellogintest->setGeometry(QRect(330, 320, 131, 31));
        labellogintest->setFont(font);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 20, 101, 51));
        QFont font2;
        font2.setPointSize(30);
        label->setFont(font2);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 486, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        labelcardid->setText(QApplication::translate("MainWindow", "Sy\303\266t\303\244 kortin ID", Q_NULLPTR));
        btnLogin->setText(QApplication::translate("MainWindow", "OK", Q_NULLPTR));
        labelpin->setText(QApplication::translate("MainWindow", "PIN", Q_NULLPTR));
        labellogintest->setText(QString());
        label->setText(QApplication::translate("MainWindow", "OTTO", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
