/********************************************************************************
** Form generated from reading UI file 's6hard.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_S6HARD_H
#define UI_S6HARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_s6hard
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

    void setupUi(QMainWindow *s6hard)
    {
        if (s6hard->objectName().isEmpty())
            s6hard->setObjectName(QString::fromUtf8("s6hard"));
        s6hard->resize(800, 600);
        centralwidget = new QWidget(s6hard);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(70, 110, 661, 261));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(648, 10, 121, 41));
        solButton = new QPushButton(centralwidget);
        solButton->setObjectName(QString::fromUtf8("solButton"));
        solButton->setGeometry(QRect(430, 390, 171, 61));
        submitButton = new QPushButton(centralwidget);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));
        submitButton->setGeometry(QRect(180, 390, 161, 61));
        s6hard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(s6hard);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        s6hard->setMenuBar(menubar);
        statusbar = new QStatusBar(s6hard);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        s6hard->setStatusBar(statusbar);

        retranslateUi(s6hard);

        QMetaObject::connectSlotsByName(s6hard);
    } // setupUi

    void retranslateUi(QMainWindow *s6hard)
    {
        s6hard->setWindowTitle(QCoreApplication::translate("s6hard", "MainWindow", nullptr));
        backButton->setText(QCoreApplication::translate("s6hard", "Back", nullptr));
        solButton->setText(QCoreApplication::translate("s6hard", "Solution", nullptr));
        submitButton->setText(QCoreApplication::translate("s6hard", "submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class s6hard: public Ui_s6hard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_S6HARD_H
