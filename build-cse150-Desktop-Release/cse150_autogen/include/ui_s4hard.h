/********************************************************************************
** Form generated from reading UI file 's4hard.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_S4HARD_H
#define UI_S4HARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_s4hard
{
public:
    QWidget *centralwidget;
    QPushButton *submitButton;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *backButton;
    QPushButton *solButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *s4hard)
    {
        if (s4hard->objectName().isEmpty())
            s4hard->setObjectName(QString::fromUtf8("s4hard"));
        s4hard->resize(800, 600);
        centralwidget = new QWidget(s4hard);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        submitButton = new QPushButton(centralwidget);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));
        submitButton->setGeometry(QRect(190, 400, 161, 61));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(80, 120, 661, 261));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(658, 20, 121, 41));
        solButton = new QPushButton(centralwidget);
        solButton->setObjectName(QString::fromUtf8("solButton"));
        solButton->setGeometry(QRect(440, 400, 171, 61));
        s4hard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(s4hard);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        s4hard->setMenuBar(menubar);
        statusbar = new QStatusBar(s4hard);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        s4hard->setStatusBar(statusbar);

        retranslateUi(s4hard);

        QMetaObject::connectSlotsByName(s4hard);
    } // setupUi

    void retranslateUi(QMainWindow *s4hard)
    {
        s4hard->setWindowTitle(QCoreApplication::translate("s4hard", "MainWindow", nullptr));
        submitButton->setText(QCoreApplication::translate("s4hard", "submit", nullptr));
        backButton->setText(QCoreApplication::translate("s4hard", "Back", nullptr));
        solButton->setText(QCoreApplication::translate("s4hard", "Solution", nullptr));
    } // retranslateUi

};

namespace Ui {
    class s4hard: public Ui_s4hard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_S4HARD_H
