/********************************************************************************
** Form generated from reading UI file 's4medium.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_S4MEDIUM_H
#define UI_S4MEDIUM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_s4medium
{
public:
    QWidget *centralwidget;
    QPushButton *backButton;
    QPushButton *submitButton;
    QPushButton *solButton;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *s4medium)
    {
        if (s4medium->objectName().isEmpty())
            s4medium->setObjectName(QString::fromUtf8("s4medium"));
        s4medium->resize(800, 600);
        centralwidget = new QWidget(s4medium);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(638, 20, 121, 41));
        submitButton = new QPushButton(centralwidget);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));
        submitButton->setGeometry(QRect(170, 400, 161, 61));
        solButton = new QPushButton(centralwidget);
        solButton->setObjectName(QString::fromUtf8("solButton"));
        solButton->setGeometry(QRect(420, 400, 171, 61));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(60, 120, 661, 261));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        s4medium->setCentralWidget(centralwidget);
        menubar = new QMenuBar(s4medium);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        s4medium->setMenuBar(menubar);
        statusbar = new QStatusBar(s4medium);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        s4medium->setStatusBar(statusbar);

        retranslateUi(s4medium);

        QMetaObject::connectSlotsByName(s4medium);
    } // setupUi

    void retranslateUi(QMainWindow *s4medium)
    {
        s4medium->setWindowTitle(QCoreApplication::translate("s4medium", "MainWindow", nullptr));
        backButton->setText(QCoreApplication::translate("s4medium", "Back", nullptr));
        submitButton->setText(QCoreApplication::translate("s4medium", "submit", nullptr));
        solButton->setText(QCoreApplication::translate("s4medium", "Solution", nullptr));
    } // retranslateUi

};

namespace Ui {
    class s4medium: public Ui_s4medium {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_S4MEDIUM_H
