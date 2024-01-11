/********************************************************************************
** Form generated from reading UI file 's6medium.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_S6MEDIUM_H
#define UI_S6MEDIUM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_s6medium
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

    void setupUi(QMainWindow *s6medium)
    {
        if (s6medium->objectName().isEmpty())
            s6medium->setObjectName(QString::fromUtf8("s6medium"));
        s6medium->resize(800, 600);
        centralwidget = new QWidget(s6medium);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(80, 110, 661, 261));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(658, 10, 121, 41));
        solButton = new QPushButton(centralwidget);
        solButton->setObjectName(QString::fromUtf8("solButton"));
        solButton->setGeometry(QRect(440, 390, 171, 61));
        submitButton = new QPushButton(centralwidget);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));
        submitButton->setGeometry(QRect(190, 390, 161, 61));
        s6medium->setCentralWidget(centralwidget);
        menubar = new QMenuBar(s6medium);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        s6medium->setMenuBar(menubar);
        statusbar = new QStatusBar(s6medium);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        s6medium->setStatusBar(statusbar);

        retranslateUi(s6medium);

        QMetaObject::connectSlotsByName(s6medium);
    } // setupUi

    void retranslateUi(QMainWindow *s6medium)
    {
        s6medium->setWindowTitle(QCoreApplication::translate("s6medium", "MainWindow", nullptr));
        backButton->setText(QCoreApplication::translate("s6medium", "Back", nullptr));
        solButton->setText(QCoreApplication::translate("s6medium", "Solution", nullptr));
        submitButton->setText(QCoreApplication::translate("s6medium", "submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class s6medium: public Ui_s6medium {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_S6MEDIUM_H
