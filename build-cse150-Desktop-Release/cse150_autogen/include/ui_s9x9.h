/********************************************************************************
** Form generated from reading UI file 's9x9.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_S9X9_H
#define UI_S9X9_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_s9x9
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *s9x9)
    {
        if (s9x9->objectName().isEmpty())
            s9x9->setObjectName(QString::fromUtf8("s9x9"));
        s9x9->resize(372, 287);
        centralwidget = new QWidget(s9x9);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 80, 121, 41));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(100, 180, 121, 41));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 130, 121, 41));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(260, 10, 101, 41));
        s9x9->setCentralWidget(centralwidget);
        menubar = new QMenuBar(s9x9);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 372, 22));
        s9x9->setMenuBar(menubar);
        statusbar = new QStatusBar(s9x9);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        s9x9->setStatusBar(statusbar);

        retranslateUi(s9x9);

        QMetaObject::connectSlotsByName(s9x9);
    } // setupUi

    void retranslateUi(QMainWindow *s9x9)
    {
        s9x9->setWindowTitle(QCoreApplication::translate("s9x9", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("s9x9", "Easy", nullptr));
        pushButton_3->setText(QCoreApplication::translate("s9x9", "Hard", nullptr));
        pushButton_2->setText(QCoreApplication::translate("s9x9", "Medium", nullptr));
        pushButton_4->setText(QCoreApplication::translate("s9x9", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class s9x9: public Ui_s9x9 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_S9X9_H
