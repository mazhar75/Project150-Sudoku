/********************************************************************************
** Form generated from reading UI file 's8easy.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_S8EASY_H
#define UI_S8EASY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_s8easy
{
public:
    QWidget *centralwidget;
    QPushButton *solButton;
    QPushButton *backButton;
    QPushButton *submitButton;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *s8easy)
    {
        if (s8easy->objectName().isEmpty())
            s8easy->setObjectName(QString::fromUtf8("s8easy"));
        s8easy->resize(800, 600);
        centralwidget = new QWidget(s8easy);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        solButton = new QPushButton(centralwidget);
        solButton->setObjectName(QString::fromUtf8("solButton"));
        solButton->setGeometry(QRect(420, 410, 171, 61));
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(638, 30, 121, 41));
        submitButton = new QPushButton(centralwidget);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));
        submitButton->setGeometry(QRect(170, 410, 161, 61));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(60, 130, 661, 261));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        s8easy->setCentralWidget(centralwidget);
        menubar = new QMenuBar(s8easy);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        s8easy->setMenuBar(menubar);
        statusbar = new QStatusBar(s8easy);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        s8easy->setStatusBar(statusbar);

        retranslateUi(s8easy);

        QMetaObject::connectSlotsByName(s8easy);
    } // setupUi

    void retranslateUi(QMainWindow *s8easy)
    {
        s8easy->setWindowTitle(QCoreApplication::translate("s8easy", "MainWindow", nullptr));
        solButton->setText(QCoreApplication::translate("s8easy", "Solution", nullptr));
        backButton->setText(QCoreApplication::translate("s8easy", "Back", nullptr));
        submitButton->setText(QCoreApplication::translate("s8easy", "submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class s8easy: public Ui_s8easy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_S8EASY_H
