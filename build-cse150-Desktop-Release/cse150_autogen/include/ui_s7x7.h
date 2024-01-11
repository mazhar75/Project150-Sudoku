/********************************************************************************
** Form generated from reading UI file 's7x7.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_S7X7_H
#define UI_S7X7_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_s7x7
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *s7x7)
    {
        if (s7x7->objectName().isEmpty())
            s7x7->setObjectName(QString::fromUtf8("s7x7"));
        s7x7->resize(432, 344);
        centralwidget = new QWidget(s7x7);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(140, 230, 121, 41));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(140, 180, 121, 41));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 130, 121, 41));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(300, 60, 101, 41));
        s7x7->setCentralWidget(centralwidget);
        menubar = new QMenuBar(s7x7);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 432, 22));
        s7x7->setMenuBar(menubar);
        statusbar = new QStatusBar(s7x7);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        s7x7->setStatusBar(statusbar);

        retranslateUi(s7x7);

        QMetaObject::connectSlotsByName(s7x7);
    } // setupUi

    void retranslateUi(QMainWindow *s7x7)
    {
        s7x7->setWindowTitle(QCoreApplication::translate("s7x7", "MainWindow", nullptr));
        pushButton_3->setText(QCoreApplication::translate("s7x7", "Hard", nullptr));
        pushButton_2->setText(QCoreApplication::translate("s7x7", "Medium", nullptr));
        pushButton->setText(QCoreApplication::translate("s7x7", "Easy", nullptr));
        pushButton_4->setText(QCoreApplication::translate("s7x7", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class s7x7: public Ui_s7x7 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_S7X7_H
