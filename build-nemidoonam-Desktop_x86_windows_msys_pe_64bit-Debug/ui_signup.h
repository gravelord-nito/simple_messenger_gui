/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_signup
{
public:
    QListWidget *listWidget;
    QPushButton *loginbuttom;
    QListView *listView;
    QLabel *label;
    QPushButton *pushButton_3;
    QGroupBox *groupBox;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *repeadpass;
    QLineEdit *firstname;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lastname;
    QLineEdit *username;
    QLineEdit *pass;
    QPushButton *pushButton;

    void setupUi(QDialog *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName("signup");
        signup->resize(658, 517);
        listWidget = new QListWidget(signup);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(-5, 461, 701, 61));
        listWidget->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: qlineargradient(spread:pad, x1:0.457, y1:1, x2:0.524038, y2:0.028, stop:0 rgba(0, 0, 0, 255), stop:0.956731 rgba(255, 98, 255, 98));background-color: rgb(68, 68, 68);\n"
"color: rgb(68, 68, , 68);"));
        loginbuttom = new QPushButton(signup);
        loginbuttom->setObjectName("loginbuttom");
        loginbuttom->setEnabled(true);
        loginbuttom->setGeometry(QRect(250, 350, 131, 81));
        loginbuttom->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"font: 700 10pt \"Segoe UI\";\n"
"alternate-background: rgb(255, 255, 255);\n"
"font: 600 18pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"background: rgb(70, 30, 40,100);\n"
"padding: 10px;\n"
"border-radius:10px;\n"
"}"));
        listView = new QListView(signup);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(0, 0, 661, 461));
        listView->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-image: url(:/new/prefix1/Desktop.png);\n"
"background-color: rgb(98, 98, 98);"));
        label = new QLabel(signup);
        label->setObjectName("label");
        label->setGeometry(QRect(240, -10, 201, 141));
        label->setStyleSheet(QString::fromUtf8("font: 900 14pt \"Segoe UI Black\";\n"
"font: 900 18pt \"Segoe UI Black\";\n"
"color: rgb(255, 255, 255);\n"
"background: rgb(255, 255, 255,0);\n"
"color: rgb(0, 85, 255);\n"
"color: rgb(42, 205, 255);"));
        pushButton_3 = new QPushButton(signup);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(630, 0, 31, 31));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"background:rgb(218, 158, 255,0);\n"
"	color: rgb(198, 107, 255);\n"
"padding: 10px;\n"
"}\n"
"QPushButton::hover\n"
"{\n"
"	background-color: red;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/standard/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon);
        pushButton_3->setFlat(false);
        groupBox = new QGroupBox(signup);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(130, 110, 391, 301));
        groupBox->setStyleSheet(QString::fromUtf8("padding: 10px;\n"
"border-radius:10px;\n"
"background-color: rgba(255, 255, 255, 50);"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 170, 171, 51));
        label_3->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255,1);\n"
"font: 900 10pt \"Segoe UI Black\";\n"
"color: rgb(255, 255, 255,255);\n"
"color: rgb(255, 255, 255);"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 130, 181, 51));
        label_2->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255,1);\n"
"font: 900 10pt \"Segoe UI Black\";\n"
"color: rgb(255, 255, 255,255);\n"
"color: rgb(255, 255, 255);"));
        repeadpass = new QLineEdit(groupBox);
        repeadpass->setObjectName("repeadpass");
        repeadpass->setGeometry(QRect(180, 180, 211, 31));
        repeadpass->setEchoMode(QLineEdit::Password);
        firstname = new QLineEdit(groupBox);
        firstname->setObjectName("firstname");
        firstname->setGeometry(QRect(180, 20, 211, 31));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(0, 90, 181, 51));
        label_4->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255,1);\n"
"font: 900 10pt \"Segoe UI Black\";\n"
"color: rgb(255, 255, 255,255);\n"
"color: rgb(255, 255, 255);"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(0, 10, 181, 51));
        label_5->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255,1);\n"
"font: 900 10pt \"Segoe UI Black\";\n"
"color: rgb(255, 255, 255,255);\n"
"color: rgb(255, 255, 255);"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(0, 50, 181, 51));
        label_6->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255,1);\n"
"font: 900 10pt \"Segoe UI Black\";\n"
"color: rgb(255, 255, 255,255);\n"
"color: rgb(255, 255, 255);"));
        lastname = new QLineEdit(groupBox);
        lastname->setObjectName("lastname");
        lastname->setGeometry(QRect(180, 60, 211, 31));
        username = new QLineEdit(groupBox);
        username->setObjectName("username");
        username->setGeometry(QRect(180, 100, 211, 31));
        pass = new QLineEdit(groupBox);
        pass->setObjectName("pass");
        pass->setGeometry(QRect(180, 140, 211, 31));
        pass->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(80, 220, 211, 61));
        pushButton->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255,1);\n"
"font: 900 20pt \"Segoe UI Black\";\n"
"color: rgb(255, 255, 255,255);\n"
"color: rgb(255, 255, 255);"));
        repeadpass->raise();
        label_2->raise();
        label_3->raise();
        firstname->raise();
        label_4->raise();
        label_6->raise();
        label_5->raise();
        lastname->raise();
        username->raise();
        pass->raise();
        pushButton->raise();

        retranslateUi(signup);

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QDialog *signup)
    {
        signup->setWindowTitle(QCoreApplication::translate("signup", "Dialog", nullptr));
        loginbuttom->setText(QCoreApplication::translate("signup", "create", nullptr));
        label->setText(QCoreApplication::translate("signup", "Messanger", nullptr));
        pushButton_3->setText(QString());
        groupBox->setTitle(QString());
        label_3->setText(QCoreApplication::translate("signup", "repead passwprd", nullptr));
        label_2->setText(QCoreApplication::translate("signup", "password", nullptr));
        label_4->setText(QCoreApplication::translate("signup", "username", nullptr));
        label_5->setText(QCoreApplication::translate("signup", "fristname", nullptr));
        label_6->setText(QCoreApplication::translate("signup", "lastname", nullptr));
        pushButton->setText(QCoreApplication::translate("signup", "signup", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
