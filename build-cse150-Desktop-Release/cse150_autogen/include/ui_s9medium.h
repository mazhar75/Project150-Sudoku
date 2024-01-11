/********************************************************************************
** Form generated from reading UI file 's9medium.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_S9MEDIUM_H
#define UI_S9MEDIUM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_s9medium
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

    void setupUi(QMainWindow *s9medium)
    {
        if (s9medium->objectName().isEmpty())
            s9medium->setObjectName(QString::fromUtf8("s9medium"));
        s9medium->resize(800, 600);
        centralwidget = new QWidget(s9medium);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        solButton = new QPushButton(centralwidget);
        solButton->setObjectName(QString::fromUtf8("solButton"));
        solButton->setGeometry(QRect(450, 390, 171, 61));
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(668, 10, 121, 41));
        submitButton = new QPushButton(centralwidget);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));
        submitButton->setGeometry(QRect(200, 390, 161, 61));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(90, 110, 661, 261));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        s9medium->setCentralWidget(centralwidget);
        menubar = new QMenuBar(s9medium);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        s9medium->setMenuBar(menubar);
        statusbar = new QStatusBar(s9medium);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        s9medium->setStatusBar(statusbar);

        retranslateUi(s9medium);

        QMetaObject::connectSlotsByName(s9medium);
    } // setupUi

    void retranslateUi(QMainWindow *s9medium)
    {
        s9medium->setWindowTitle(QCoreApplication::translate("s9medium", "MainWindow", nullptr));
        solButton->setText(QCoreApplication::translate("s9medium", "Solution", nullptr));
        backButton->setText(QCoreApplication::translate("s9medium", "Back", nullptr));
        submitButton->setText(QCoreApplication::translate("s9medium", "submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class s9medium: public Ui_s9medium {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_S9MEDIUM_H
