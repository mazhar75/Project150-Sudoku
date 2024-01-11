/********************************************************************************
** Form generated from reading UI file 's5hard.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_S5HARD_H
#define UI_S5HARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_s5hard
{
public:
    QWidget *centralwidget;
    QPushButton *backButton;
    QPushButton *submitButton;
    QPushButton *solButton;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *s5hard)
    {
        if (s5hard->objectName().isEmpty())
            s5hard->setObjectName(QString::fromUtf8("s5hard"));
        s5hard->resize(800, 600);
        centralwidget = new QWidget(s5hard);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(668, 10, 121, 41));
        submitButton = new QPushButton(centralwidget);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));
        submitButton->setGeometry(QRect(200, 390, 161, 61));
        solButton = new QPushButton(centralwidget);
        solButton->setObjectName(QString::fromUtf8("solButton"));
        solButton->setGeometry(QRect(450, 390, 171, 61));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(90, 110, 661, 261));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        s5hard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(s5hard);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        s5hard->setMenuBar(menubar);
        statusbar = new QStatusBar(s5hard);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        s5hard->setStatusBar(statusbar);

        retranslateUi(s5hard);

        QMetaObject::connectSlotsByName(s5hard);
    } // setupUi

    void retranslateUi(QMainWindow *s5hard)
    {
        s5hard->setWindowTitle(QCoreApplication::translate("s5hard", "MainWindow", nullptr));
        backButton->setText(QCoreApplication::translate("s5hard", "Back", nullptr));
        submitButton->setText(QCoreApplication::translate("s5hard", "submit", nullptr));
        solButton->setText(QCoreApplication::translate("s5hard", "Solution", nullptr));
    } // retranslateUi

};

namespace Ui {
    class s5hard: public Ui_s5hard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_S5HARD_H
