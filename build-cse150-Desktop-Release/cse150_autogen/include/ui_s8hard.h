/********************************************************************************
** Form generated from reading UI file 's8hard.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_S8HARD_H
#define UI_S8HARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_s8hard
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

    void setupUi(QMainWindow *s8hard)
    {
        if (s8hard->objectName().isEmpty())
            s8hard->setObjectName(QString::fromUtf8("s8hard"));
        s8hard->resize(800, 600);
        centralwidget = new QWidget(s8hard);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        solButton = new QPushButton(centralwidget);
        solButton->setObjectName(QString::fromUtf8("solButton"));
        solButton->setGeometry(QRect(440, 390, 171, 61));
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(658, 10, 121, 41));
        submitButton = new QPushButton(centralwidget);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));
        submitButton->setGeometry(QRect(190, 390, 161, 61));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(80, 110, 661, 261));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        s8hard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(s8hard);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        s8hard->setMenuBar(menubar);
        statusbar = new QStatusBar(s8hard);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        s8hard->setStatusBar(statusbar);

        retranslateUi(s8hard);

        QMetaObject::connectSlotsByName(s8hard);
    } // setupUi

    void retranslateUi(QMainWindow *s8hard)
    {
        s8hard->setWindowTitle(QCoreApplication::translate("s8hard", "MainWindow", nullptr));
        solButton->setText(QCoreApplication::translate("s8hard", "Solution", nullptr));
        backButton->setText(QCoreApplication::translate("s8hard", "Back", nullptr));
        submitButton->setText(QCoreApplication::translate("s8hard", "submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class s8hard: public Ui_s8hard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_S8HARD_H
