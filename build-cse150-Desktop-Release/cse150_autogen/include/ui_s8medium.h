/********************************************************************************
** Form generated from reading UI file 's8medium.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_S8MEDIUM_H
#define UI_S8MEDIUM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_s8medium
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

    void setupUi(QMainWindow *s8medium)
    {
        if (s8medium->objectName().isEmpty())
            s8medium->setObjectName(QString::fromUtf8("s8medium"));
        s8medium->resize(800, 600);
        centralwidget = new QWidget(s8medium);
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
        s8medium->setCentralWidget(centralwidget);
        menubar = new QMenuBar(s8medium);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        s8medium->setMenuBar(menubar);
        statusbar = new QStatusBar(s8medium);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        s8medium->setStatusBar(statusbar);

        retranslateUi(s8medium);

        QMetaObject::connectSlotsByName(s8medium);
    } // setupUi

    void retranslateUi(QMainWindow *s8medium)
    {
        s8medium->setWindowTitle(QCoreApplication::translate("s8medium", "MainWindow", nullptr));
        solButton->setText(QCoreApplication::translate("s8medium", "Solution", nullptr));
        backButton->setText(QCoreApplication::translate("s8medium", "Back", nullptr));
        submitButton->setText(QCoreApplication::translate("s8medium", "submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class s8medium: public Ui_s8medium {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_S8MEDIUM_H
