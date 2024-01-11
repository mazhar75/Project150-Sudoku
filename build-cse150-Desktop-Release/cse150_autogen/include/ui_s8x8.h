/********************************************************************************
** Form generated from reading UI file 's8x8.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_S8X8_H
#define UI_S8X8_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_s8x8
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *s8x8)
    {
        if (s8x8->objectName().isEmpty())
            s8x8->setObjectName(QString::fromUtf8("s8x8"));
        s8x8->resize(440, 345);
        centralwidget = new QWidget(s8x8);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 120, 121, 41));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(140, 220, 121, 41));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(140, 170, 121, 41));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(300, 50, 101, 41));
        s8x8->setCentralWidget(centralwidget);
        menubar = new QMenuBar(s8x8);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 440, 22));
        s8x8->setMenuBar(menubar);
        statusbar = new QStatusBar(s8x8);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        s8x8->setStatusBar(statusbar);

        retranslateUi(s8x8);

        QMetaObject::connectSlotsByName(s8x8);
    } // setupUi

    void retranslateUi(QMainWindow *s8x8)
    {
        s8x8->setWindowTitle(QCoreApplication::translate("s8x8", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("s8x8", "Easy", nullptr));
        pushButton_3->setText(QCoreApplication::translate("s8x8", "Hard", nullptr));
        pushButton_2->setText(QCoreApplication::translate("s8x8", "Medium", nullptr));
        pushButton_4->setText(QCoreApplication::translate("s8x8", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class s8x8: public Ui_s8x8 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_S8X8_H
