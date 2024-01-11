/********************************************************************************
** Form generated from reading UI file 's5x5.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_S5X5_H
#define UI_S5X5_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_s5x5
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *s5x5)
    {
        if (s5x5->objectName().isEmpty())
            s5x5->setObjectName(QString::fromUtf8("s5x5"));
        s5x5->resize(406, 280);
        centralwidget = new QWidget(s5x5);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 130, 121, 41));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(290, 10, 101, 41));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(130, 180, 121, 41));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 80, 121, 41));
        s5x5->setCentralWidget(centralwidget);
        menubar = new QMenuBar(s5x5);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 406, 22));
        s5x5->setMenuBar(menubar);
        statusbar = new QStatusBar(s5x5);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        s5x5->setStatusBar(statusbar);

        retranslateUi(s5x5);

        QMetaObject::connectSlotsByName(s5x5);
    } // setupUi

    void retranslateUi(QMainWindow *s5x5)
    {
        s5x5->setWindowTitle(QCoreApplication::translate("s5x5", "MainWindow", nullptr));
        pushButton_2->setText(QCoreApplication::translate("s5x5", "Medium", nullptr));
        pushButton_4->setText(QCoreApplication::translate("s5x5", "Back", nullptr));
        pushButton_3->setText(QCoreApplication::translate("s5x5", "Hard", nullptr));
        pushButton->setText(QCoreApplication::translate("s5x5", "Easy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class s5x5: public Ui_s5x5 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_S5X5_H
