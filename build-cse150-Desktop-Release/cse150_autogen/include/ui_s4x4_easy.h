/********************************************************************************
** Form generated from reading UI file 's4x4_easy.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_S4X4_EASY_H
#define UI_S4X4_EASY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_s4x4_easy
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *submitButton;
    QPushButton *solButton;
    QPushButton *backButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *s4x4_easy)
    {
        if (s4x4_easy->objectName().isEmpty())
            s4x4_easy->setObjectName(QString::fromUtf8("s4x4_easy"));
        s4x4_easy->resize(800, 600);
        centralwidget = new QWidget(s4x4_easy);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(80, 130, 661, 261));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        submitButton = new QPushButton(centralwidget);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));
        submitButton->setGeometry(QRect(190, 410, 161, 61));
        solButton = new QPushButton(centralwidget);
        solButton->setObjectName(QString::fromUtf8("solButton"));
        solButton->setGeometry(QRect(440, 410, 171, 61));
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(658, 30, 121, 41));
        s4x4_easy->setCentralWidget(centralwidget);
        menubar = new QMenuBar(s4x4_easy);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        s4x4_easy->setMenuBar(menubar);
        statusbar = new QStatusBar(s4x4_easy);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        s4x4_easy->setStatusBar(statusbar);

        retranslateUi(s4x4_easy);

        QMetaObject::connectSlotsByName(s4x4_easy);
    } // setupUi

    void retranslateUi(QMainWindow *s4x4_easy)
    {
        s4x4_easy->setWindowTitle(QCoreApplication::translate("s4x4_easy", "MainWindow", nullptr));
        submitButton->setText(QCoreApplication::translate("s4x4_easy", "submit", nullptr));
        solButton->setText(QCoreApplication::translate("s4x4_easy", "Solution", nullptr));
        backButton->setText(QCoreApplication::translate("s4x4_easy", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class s4x4_easy: public Ui_s4x4_easy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_S4X4_EASY_H
