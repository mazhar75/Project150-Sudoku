/********************************************************************************
** Form generated from reading UI file 'about_algo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_ALGO_H
#define UI_ABOUT_ALGO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_about_algo
{
public:
    QWidget *centralwidget;
    QTextBrowser *textBrowser;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *about_algo)
    {
        if (about_algo->objectName().isEmpty())
            about_algo->setObjectName(QString::fromUtf8("about_algo"));
        about_algo->resize(800, 600);
        centralwidget = new QWidget(about_algo);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 0, 761, 461));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(310, 474, 211, 41));
        about_algo->setCentralWidget(centralwidget);
        menubar = new QMenuBar(about_algo);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        about_algo->setMenuBar(menubar);
        statusbar = new QStatusBar(about_algo);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        about_algo->setStatusBar(statusbar);

        retranslateUi(about_algo);

        QMetaObject::connectSlotsByName(about_algo);
    } // setupUi

    void retranslateUi(QMainWindow *about_algo)
    {
        about_algo->setWindowTitle(QCoreApplication::translate("about_algo", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("about_algo", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class about_algo: public Ui_about_algo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_ALGO_H
