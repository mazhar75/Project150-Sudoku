/********************************************************************************
** Form generated from reading UI file 'newwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWWINDOW_H
#define UI_NEWWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_NewWindow
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLabel *label;
    QPushButton *backButton;

    void setupUi(QDialog *NewWindow)
    {
        if (NewWindow->objectName().isEmpty())
            NewWindow->setObjectName(QString::fromUtf8("NewWindow"));
        NewWindow->resize(400, 288);
        pushButton = new QPushButton(NewWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 50, 111, 31));
        pushButton_2 = new QPushButton(NewWindow);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 90, 111, 31));
        pushButton_3 = new QPushButton(NewWindow);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(150, 130, 111, 31));
        pushButton_4 = new QPushButton(NewWindow);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(150, 170, 111, 31));
        pushButton_5 = new QPushButton(NewWindow);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(150, 210, 111, 31));
        pushButton_6 = new QPushButton(NewWindow);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(150, 250, 111, 31));
        label = new QLabel(NewWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 10, 171, 20));
        backButton = new QPushButton(NewWindow);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(290, 10, 111, 31));

        retranslateUi(NewWindow);

        QMetaObject::connectSlotsByName(NewWindow);
    } // setupUi

    void retranslateUi(QDialog *NewWindow)
    {
        NewWindow->setWindowTitle(QCoreApplication::translate("NewWindow", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("NewWindow", "4 X 4", nullptr));
        pushButton_2->setText(QCoreApplication::translate("NewWindow", "5 X 5", nullptr));
        pushButton_3->setText(QCoreApplication::translate("NewWindow", "6 X 6", nullptr));
        pushButton_4->setText(QCoreApplication::translate("NewWindow", "7 X 7", nullptr));
        pushButton_5->setText(QCoreApplication::translate("NewWindow", "8 X 8", nullptr));
        pushButton_6->setText(QCoreApplication::translate("NewWindow", "9 X 9", nullptr));
        label->setText(QCoreApplication::translate("NewWindow", "        Choose a format", nullptr));
        backButton->setText(QCoreApplication::translate("NewWindow", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewWindow: public Ui_NewWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWWINDOW_H
