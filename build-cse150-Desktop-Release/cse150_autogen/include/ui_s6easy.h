/********************************************************************************
** Form generated from reading UI file 's6easy.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_S6EASY_H
#define UI_S6EASY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_s6easy
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *backButton;
    QPushButton *solButton;
    QPushButton *submitButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *s6easy)
    {
        if (s6easy->objectName().isEmpty())
            s6easy->setObjectName(QString::fromUtf8("s6easy"));
        s6easy->resize(800, 600);
        centralwidget = new QWidget(s6easy);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(80, 110, 661, 261));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(658, 10, 121, 41));
        solButton = new QPushButton(centralwidget);
        solButton->setObjectName(QString::fromUtf8("solButton"));
        solButton->setGeometry(QRect(440, 390, 171, 61));
        submitButton = new QPushButton(centralwidget);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));
        submitButton->setGeometry(QRect(190, 390, 161, 61));
        s6easy->setCentralWidget(centralwidget);
        menubar = new QMenuBar(s6easy);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        s6easy->setMenuBar(menubar);
        statusbar = new QStatusBar(s6easy);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        s6easy->setStatusBar(statusbar);

        retranslateUi(s6easy);

        QMetaObject::connectSlotsByName(s6easy);
    } // setupUi

    void retranslateUi(QMainWindow *s6easy)
    {
        s6easy->setWindowTitle(QCoreApplication::translate("s6easy", "MainWindow", nullptr));
        backButton->setText(QCoreApplication::translate("s6easy", "Back", nullptr));
        solButton->setText(QCoreApplication::translate("s6easy", "Solution", nullptr));
        submitButton->setText(QCoreApplication::translate("s6easy", "submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class s6easy: public Ui_s6easy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_S6EASY_H
