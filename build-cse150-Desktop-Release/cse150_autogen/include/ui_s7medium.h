/********************************************************************************
** Form generated from reading UI file 's7medium.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_S7MEDIUM_H
#define UI_S7MEDIUM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_s7medium
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

    void setupUi(QMainWindow *s7medium)
    {
        if (s7medium->objectName().isEmpty())
            s7medium->setObjectName(QString::fromUtf8("s7medium"));
        s7medium->resize(800, 600);
        centralwidget = new QWidget(s7medium);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        submitButton = new QPushButton(centralwidget);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));
        submitButton->setGeometry(QRect(180, 390, 161, 61));
        solButton = new QPushButton(centralwidget);
        solButton->setObjectName(QString::fromUtf8("solButton"));
        solButton->setGeometry(QRect(430, 390, 171, 61));
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(648, 10, 121, 41));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(70, 110, 661, 261));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        s7medium->setCentralWidget(centralwidget);
        menubar = new QMenuBar(s7medium);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        s7medium->setMenuBar(menubar);
        statusbar = new QStatusBar(s7medium);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        s7medium->setStatusBar(statusbar);

        retranslateUi(s7medium);

        QMetaObject::connectSlotsByName(s7medium);
    } // setupUi

    void retranslateUi(QMainWindow *s7medium)
    {
        s7medium->setWindowTitle(QCoreApplication::translate("s7medium", "MainWindow", nullptr));
        submitButton->setText(QCoreApplication::translate("s7medium", "submit", nullptr));
        solButton->setText(QCoreApplication::translate("s7medium", "Solution", nullptr));
        backButton->setText(QCoreApplication::translate("s7medium", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class s7medium: public Ui_s7medium {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_S7MEDIUM_H
