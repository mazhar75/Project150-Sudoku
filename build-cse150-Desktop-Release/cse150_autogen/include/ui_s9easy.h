/********************************************************************************
** Form generated from reading UI file 's9easy.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_S9EASY_H
#define UI_S9EASY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_s9easy
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

    void setupUi(QMainWindow *s9easy)
    {
        if (s9easy->objectName().isEmpty())
            s9easy->setObjectName(QString::fromUtf8("s9easy"));
        s9easy->resize(800, 600);
        centralwidget = new QWidget(s9easy);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        solButton = new QPushButton(centralwidget);
        solButton->setObjectName(QString::fromUtf8("solButton"));
        solButton->setGeometry(QRect(430, 380, 171, 61));
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(648, 0, 121, 41));
        submitButton = new QPushButton(centralwidget);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));
        submitButton->setGeometry(QRect(180, 380, 161, 61));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(70, 100, 661, 261));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        s9easy->setCentralWidget(centralwidget);
        menubar = new QMenuBar(s9easy);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        s9easy->setMenuBar(menubar);
        statusbar = new QStatusBar(s9easy);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        s9easy->setStatusBar(statusbar);

        retranslateUi(s9easy);

        QMetaObject::connectSlotsByName(s9easy);
    } // setupUi

    void retranslateUi(QMainWindow *s9easy)
    {
        s9easy->setWindowTitle(QCoreApplication::translate("s9easy", "MainWindow", nullptr));
        solButton->setText(QCoreApplication::translate("s9easy", "Solution", nullptr));
        backButton->setText(QCoreApplication::translate("s9easy", "Back", nullptr));
        submitButton->setText(QCoreApplication::translate("s9easy", "submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class s9easy: public Ui_s9easy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_S9EASY_H
