/********************************************************************************
** Form generated from reading UI file 'getsolution.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETSOLUTION_H
#define UI_GETSOLUTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_getSolution
{
public:
    QWidget *centralwidget;
    QPlainTextEdit *plainTextEdit;
    QPushButton *submitButton;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *getSolution)
    {
        if (getSolution->objectName().isEmpty())
            getSolution->setObjectName(QString::fromUtf8("getSolution"));
        getSolution->resize(800, 600);
        centralwidget = new QWidget(getSolution);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(110, 30, 531, 231));
        submitButton = new QPushButton(centralwidget);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));
        submitButton->setGeometry(QRect(110, 300, 531, 61));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(690, 0, 101, 51));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(110, 380, 531, 61));
        getSolution->setCentralWidget(centralwidget);
        menubar = new QMenuBar(getSolution);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        getSolution->setMenuBar(menubar);
        statusbar = new QStatusBar(getSolution);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        getSolution->setStatusBar(statusbar);

        retranslateUi(getSolution);

        QMetaObject::connectSlotsByName(getSolution);
    } // setupUi

    void retranslateUi(QMainWindow *getSolution)
    {
        getSolution->setWindowTitle(QCoreApplication::translate("getSolution", "MainWindow", nullptr));
        submitButton->setText(QCoreApplication::translate("getSolution", "Show Solution", nullptr));
        pushButton->setText(QCoreApplication::translate("getSolution", "Back", nullptr));
        pushButton_2->setText(QCoreApplication::translate("getSolution", "About Algorithm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class getSolution: public Ui_getSolution {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETSOLUTION_H
