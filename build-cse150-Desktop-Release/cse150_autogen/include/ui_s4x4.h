/********************************************************************************
** Form generated from reading UI file 's4x4.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_S4X4_H
#define UI_S4X4_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_S4X4
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *S4X4)
    {
        if (S4X4->objectName().isEmpty())
            S4X4->setObjectName(QString::fromUtf8("S4X4"));
        S4X4->resize(400, 300);
        pushButton = new QPushButton(S4X4);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 80, 121, 41));
        pushButton_2 = new QPushButton(S4X4);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 130, 121, 41));
        pushButton_3 = new QPushButton(S4X4);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(130, 180, 121, 41));
        pushButton_4 = new QPushButton(S4X4);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(290, 10, 101, 41));

        retranslateUi(S4X4);

        QMetaObject::connectSlotsByName(S4X4);
    } // setupUi

    void retranslateUi(QDialog *S4X4)
    {
        S4X4->setWindowTitle(QCoreApplication::translate("S4X4", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("S4X4", "Easy", nullptr));
        pushButton_2->setText(QCoreApplication::translate("S4X4", "Medium", nullptr));
        pushButton_3->setText(QCoreApplication::translate("S4X4", "Hard", nullptr));
        pushButton_4->setText(QCoreApplication::translate("S4X4", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class S4X4: public Ui_S4X4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_S4X4_H
