/********************************************************************************
** Form generated from reading UI file 's5medium.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_S5MEDIUM_H
#define UI_S5MEDIUM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_s5medium
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

    void setupUi(QMainWindow *s5medium)
    {
        if (s5medium->objectName().isEmpty())
            s5medium->setObjectName(QString::fromUtf8("s5medium"));
        s5medium->resize(800, 600);
        centralwidget = new QWidget(s5medium);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(90, 110, 661, 261));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(668, 10, 121, 41));
        solButton = new QPushButton(centralwidget);
        solButton->setObjectName(QString::fromUtf8("solButton"));
        solButton->setGeometry(QRect(450, 390, 171, 61));
        submitButton = new QPushButton(centralwidget);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));
        submitButton->setGeometry(QRect(200, 390, 161, 61));
        s5medium->setCentralWidget(centralwidget);
        menubar = new QMenuBar(s5medium);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        s5medium->setMenuBar(menubar);
        statusbar = new QStatusBar(s5medium);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        s5medium->setStatusBar(statusbar);

        retranslateUi(s5medium);

        QMetaObject::connectSlotsByName(s5medium);
    } // setupUi

    void retranslateUi(QMainWindow *s5medium)
    {
        s5medium->setWindowTitle(QCoreApplication::translate("s5medium", "MainWindow", nullptr));
        backButton->setText(QCoreApplication::translate("s5medium", "Back", nullptr));
        solButton->setText(QCoreApplication::translate("s5medium", "Solution", nullptr));
        submitButton->setText(QCoreApplication::translate("s5medium", "submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class s5medium: public Ui_s5medium {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_S5MEDIUM_H
