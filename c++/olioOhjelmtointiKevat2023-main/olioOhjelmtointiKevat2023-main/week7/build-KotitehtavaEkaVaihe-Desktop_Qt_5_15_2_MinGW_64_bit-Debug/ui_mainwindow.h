/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Enter;
    QPushButton *Reset;
    QLineEdit *num1;
    QPushButton *n4;
    QPushButton *n3;
    QPushButton *n1;
    QPushButton *n2;
    QPushButton *n5;
    QPushButton *n6;
    QPushButton *n0;
    QPushButton *n7;
    QPushButton *n8;
    QPushButton *n9;
    QPushButton *subHandler;
    QPushButton *addHandler;
    QPushButton *divHandler;
    QPushButton *multiplyHandler;
    QLineEdit *num2;
    QLineEdit *result;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Enter = new QPushButton(centralwidget);
        Enter->setObjectName(QString::fromUtf8("Enter"));
        Enter->setGeometry(QRect(100, 170, 131, 41));
        Reset = new QPushButton(centralwidget);
        Reset->setObjectName(QString::fromUtf8("Reset"));
        Reset->setGeometry(QRect(100, 230, 131, 41));
        num1 = new QLineEdit(centralwidget);
        num1->setObjectName(QString::fromUtf8("num1"));
        num1->setGeometry(QRect(100, 80, 181, 61));
        n4 = new QPushButton(centralwidget);
        n4->setObjectName(QString::fromUtf8("n4"));
        n4->setGeometry(QRect(250, 230, 101, 41));
        n3 = new QPushButton(centralwidget);
        n3->setObjectName(QString::fromUtf8("n3"));
        n3->setGeometry(QRect(490, 170, 111, 41));
        n1 = new QPushButton(centralwidget);
        n1->setObjectName(QString::fromUtf8("n1"));
        n1->setGeometry(QRect(250, 170, 101, 41));
        n2 = new QPushButton(centralwidget);
        n2->setObjectName(QString::fromUtf8("n2"));
        n2->setGeometry(QRect(370, 170, 101, 41));
        n5 = new QPushButton(centralwidget);
        n5->setObjectName(QString::fromUtf8("n5"));
        n5->setGeometry(QRect(370, 230, 101, 41));
        n6 = new QPushButton(centralwidget);
        n6->setObjectName(QString::fromUtf8("n6"));
        n6->setGeometry(QRect(490, 230, 111, 41));
        n0 = new QPushButton(centralwidget);
        n0->setObjectName(QString::fromUtf8("n0"));
        n0->setGeometry(QRect(370, 350, 101, 41));
        n7 = new QPushButton(centralwidget);
        n7->setObjectName(QString::fromUtf8("n7"));
        n7->setGeometry(QRect(250, 290, 101, 41));
        n8 = new QPushButton(centralwidget);
        n8->setObjectName(QString::fromUtf8("n8"));
        n8->setGeometry(QRect(370, 290, 101, 41));
        n9 = new QPushButton(centralwidget);
        n9->setObjectName(QString::fromUtf8("n9"));
        n9->setGeometry(QRect(490, 290, 111, 41));
        subHandler = new QPushButton(centralwidget);
        subHandler->setObjectName(QString::fromUtf8("subHandler"));
        subHandler->setGeometry(QRect(230, 480, 181, 61));
        addHandler = new QPushButton(centralwidget);
        addHandler->setObjectName(QString::fromUtf8("addHandler"));
        addHandler->setGeometry(QRect(230, 410, 181, 51));
        divHandler = new QPushButton(centralwidget);
        divHandler->setObjectName(QString::fromUtf8("divHandler"));
        divHandler->setGeometry(QRect(430, 480, 191, 61));
        multiplyHandler = new QPushButton(centralwidget);
        multiplyHandler->setObjectName(QString::fromUtf8("multiplyHandler"));
        multiplyHandler->setGeometry(QRect(430, 410, 191, 51));
        num2 = new QLineEdit(centralwidget);
        num2->setObjectName(QString::fromUtf8("num2"));
        num2->setGeometry(QRect(300, 80, 201, 61));
        result = new QLineEdit(centralwidget);
        result->setObjectName(QString::fromUtf8("result"));
        result->setGeometry(QRect(520, 80, 191, 61));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Enter->setText(QCoreApplication::translate("MainWindow", "Enter", nullptr));
        Reset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        n4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        n3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        n1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        n2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        n5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        n6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        n0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        n7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        n8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        n9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        subHandler->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        addHandler->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        divHandler->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        multiplyHandler->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
