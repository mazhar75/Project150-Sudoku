/********************************************************************************
** Form generated from reading UI file 's7easy.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_S7EASY_H
#define UI_S7EASY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_s7easy
{
public:
    QWidget *centralwidget;
    QPushButton *submitButton;
    QPushButton *solButton;
    QPushButton *backButton;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *s7easy)
    {
        if (s7easy->objectName().isEmpty())
            s7easy->setObjectName(QString::fromUtf8("s7easy"));
        s7easy->resize(800, 600);
        centralwidget = new QWidget(s7easy);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        submitButton = new QPushButton(centralwidget);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));
        submitButton->setGeometry(QRect(170, 390, 161, 61));
        solButton = new QPushButton(centralwidget);
        solButton->setObjectName(QString::fromUtf8("solButton"));
        solButton->setGeometry(QRect(420, 390, 171, 61));
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(638, 10, 121, 41));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(60, 110, 661, 261));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        s7easy->setCentralWidget(centralwidget);
        menubar = new QMenuBar(s7easy);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        s7easy->setMenuBar(menubar);
        statusbar = new QStatusBar(s7easy);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        s7easy->setStatusBar(statusbar);

        retranslateUi(s7easy);

        QMetaObject::connectSlotsByName(s7easy);
    } // setupUi

    void retranslateUi(QMainWindow *s7easy)
    {
        s7easy->setWindowTitle(QCoreApplication::translate("s7easy", "MainWindow", nullptr));
        submitButton->setText(QCoreApplication::translate("s7easy", "submit", nullptr));
        solButton->setText(QCoreApplication::translate("s7easy", "Solution", nullptr));
        backButton->setText(QCoreApplication::translate("s7easy", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class s7easy: public Ui_s7easy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_S7EASY_H
