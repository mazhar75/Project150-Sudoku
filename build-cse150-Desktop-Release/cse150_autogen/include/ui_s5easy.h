/********************************************************************************
** Form generated from reading UI file 's5easy.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_S5EASY_H
#define UI_S5EASY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_s5easy
{
public:
    QWidget *centralwidget;
    QPushButton *submitButton;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *solButton;
    QPushButton *backButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *s5easy)
    {
        if (s5easy->objectName().isEmpty())
            s5easy->setObjectName(QString::fromUtf8("s5easy"));
        s5easy->resize(800, 600);
        centralwidget = new QWidget(s5easy);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        submitButton = new QPushButton(centralwidget);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));
        submitButton->setGeometry(QRect(192, 390, 161, 61));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(82, 110, 661, 261));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        solButton = new QPushButton(centralwidget);
        solButton->setObjectName(QString::fromUtf8("solButton"));
        solButton->setGeometry(QRect(442, 390, 171, 61));
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(660, 10, 121, 41));
        s5easy->setCentralWidget(centralwidget);
        menubar = new QMenuBar(s5easy);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        s5easy->setMenuBar(menubar);
        statusbar = new QStatusBar(s5easy);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        s5easy->setStatusBar(statusbar);

        retranslateUi(s5easy);

        QMetaObject::connectSlotsByName(s5easy);
    } // setupUi

    void retranslateUi(QMainWindow *s5easy)
    {
        s5easy->setWindowTitle(QCoreApplication::translate("s5easy", "MainWindow", nullptr));
        submitButton->setText(QCoreApplication::translate("s5easy", "submit", nullptr));
        solButton->setText(QCoreApplication::translate("s5easy", "Solution", nullptr));
        backButton->setText(QCoreApplication::translate("s5easy", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class s5easy: public Ui_s5easy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_S5EASY_H
