/********************************************************************************
** Form generated from reading UI file 's7hard.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_S7HARD_H
#define UI_S7HARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_s7hard
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

    void setupUi(QMainWindow *s7hard)
    {
        if (s7hard->objectName().isEmpty())
            s7hard->setObjectName(QString::fromUtf8("s7hard"));
        s7hard->resize(800, 600);
        centralwidget = new QWidget(s7hard);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        submitButton = new QPushButton(centralwidget);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));
        submitButton->setGeometry(QRect(190, 390, 161, 61));
        solButton = new QPushButton(centralwidget);
        solButton->setObjectName(QString::fromUtf8("solButton"));
        solButton->setGeometry(QRect(440, 390, 171, 61));
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(658, 10, 121, 41));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(80, 110, 661, 261));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        s7hard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(s7hard);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        s7hard->setMenuBar(menubar);
        statusbar = new QStatusBar(s7hard);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        s7hard->setStatusBar(statusbar);

        retranslateUi(s7hard);

        QMetaObject::connectSlotsByName(s7hard);
    } // setupUi

    void retranslateUi(QMainWindow *s7hard)
    {
        s7hard->setWindowTitle(QCoreApplication::translate("s7hard", "MainWindow", nullptr));
        submitButton->setText(QCoreApplication::translate("s7hard", "submit", nullptr));
        solButton->setText(QCoreApplication::translate("s7hard", "Solution", nullptr));
        backButton->setText(QCoreApplication::translate("s7hard", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class s7hard: public Ui_s7hard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_S7HARD_H
