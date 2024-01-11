/********************************************************************************
** Form generated from reading UI file 's9hard.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_S9HARD_H
#define UI_S9HARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_s9hard
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

    void setupUi(QMainWindow *s9hard)
    {
        if (s9hard->objectName().isEmpty())
            s9hard->setObjectName(QString::fromUtf8("s9hard"));
        s9hard->resize(800, 600);
        centralwidget = new QWidget(s9hard);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        solButton = new QPushButton(centralwidget);
        solButton->setObjectName(QString::fromUtf8("solButton"));
        solButton->setGeometry(QRect(440, 380, 171, 61));
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(658, 0, 121, 41));
        submitButton = new QPushButton(centralwidget);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));
        submitButton->setGeometry(QRect(190, 380, 161, 61));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(80, 100, 661, 261));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        s9hard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(s9hard);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        s9hard->setMenuBar(menubar);
        statusbar = new QStatusBar(s9hard);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        s9hard->setStatusBar(statusbar);

        retranslateUi(s9hard);

        QMetaObject::connectSlotsByName(s9hard);
    } // setupUi

    void retranslateUi(QMainWindow *s9hard)
    {
        s9hard->setWindowTitle(QCoreApplication::translate("s9hard", "MainWindow", nullptr));
        solButton->setText(QCoreApplication::translate("s9hard", "Solution", nullptr));
        backButton->setText(QCoreApplication::translate("s9hard", "Back", nullptr));
        submitButton->setText(QCoreApplication::translate("s9hard", "submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class s9hard: public Ui_s9hard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_S9HARD_H
