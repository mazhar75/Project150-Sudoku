/********************************************************************************
** Form generated from reading UI file 's6x6.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_S6X6_H
#define UI_S6X6_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_s6x6
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *s6x6)
    {
        if (s6x6->objectName().isEmpty())
            s6x6->setObjectName(QString::fromUtf8("s6x6"));
        s6x6->resize(407, 323);
        centralwidget = new QWidget(s6x6);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 140, 121, 41));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(120, 190, 121, 41));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(280, 20, 101, 41));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 90, 121, 41));
        s6x6->setCentralWidget(centralwidget);
        menubar = new QMenuBar(s6x6);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 407, 22));
        s6x6->setMenuBar(menubar);
        statusbar = new QStatusBar(s6x6);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        s6x6->setStatusBar(statusbar);

        retranslateUi(s6x6);

        QMetaObject::connectSlotsByName(s6x6);
    } // setupUi

    void retranslateUi(QMainWindow *s6x6)
    {
        s6x6->setWindowTitle(QCoreApplication::translate("s6x6", "MainWindow", nullptr));
        pushButton_2->setText(QCoreApplication::translate("s6x6", "Medium", nullptr));
        pushButton_3->setText(QCoreApplication::translate("s6x6", "Hard", nullptr));
        pushButton_4->setText(QCoreApplication::translate("s6x6", "Back", nullptr));
        pushButton->setText(QCoreApplication::translate("s6x6", "Easy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class s6x6: public Ui_s6x6 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_S6X6_H
