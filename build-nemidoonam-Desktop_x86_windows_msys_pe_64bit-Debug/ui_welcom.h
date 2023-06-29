/********************************************************************************
** Form generated from reading UI file 'welcom.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOM_H
#define UI_WELCOM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_welcom
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QPushButton *loginbuttom;
    QSpacerItem *horizontalSpacer_4;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QWidget *widget;
    QPushButton *signupbutton_2;

    void setupUi(QDialog *welcom)
    {
        if (welcom->objectName().isEmpty())
            welcom->setObjectName("welcom");
        welcom->resize(780, 501);
        verticalLayout = new QVBoxLayout(welcom);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(welcom);
        widget_2->setObjectName("widget_2");
        widget_2->setStyleSheet(QString::fromUtf8("background-image: url(:/Desktop.png);\n"
"background-image: url(:/new/prefix1/Desktop.png);"));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        pushButton_2 = new QPushButton(widget_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(10, 10));
        pushButton_2->setMouseTracking(true);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        pushButton_2->setIcon(icon);
        pushButton_2->setFlat(false);

        horizontalLayout_3->addWidget(pushButton_2);

        horizontalLayout_3->setStretch(0, 10);
        horizontalLayout_3->setStretch(1, 10);
        horizontalLayout_3->setStretch(2, 1);

        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(widget_2);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 900 14pt \"Segoe UI Black\";\n"
"font: 900 18pt \"Segoe UI Black\";\n"
"color: rgb(255, 255, 255);\n"
"background: rgb(255, 255, 255,0);\n"
"color: rgb(0, 85, 255);\n"
"color: rgb(42, 205, 255);"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayout->setStretch(0, 6);
        horizontalLayout->setStretch(1, 4);
        horizontalLayout->setStretch(2, 5);

        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        groupBox = new QGroupBox(widget_2);
        groupBox->setObjectName("groupBox");
        groupBox->setStyleSheet(QString::fromUtf8("padding: 10px;\n"
"background-image: url(:/Desktop.pngz);\n"
"background-color: rgba(255, 255, 255, 50);\n"
"border-top-left-radius:30px;\n"
"border-bottom-right-radius:30px;"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255,1);\n"
"font: 900 10pt \"Segoe UI Black\";\n"
"color: rgb(255, 255, 255,255);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(label_2);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setStyleSheet(QString::fromUtf8("border-radius:10px;"));

        verticalLayout_3->addWidget(lineEdit);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255,1);\n"
"font: 900 10pt \"Segoe UI Black\";\n"
"color: rgb(255, 255, 255,255);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(label_3);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setStyleSheet(QString::fromUtf8("border-top-left-radius:0px;\n"
"border-bottom-right-radius:0px;\n"
"border-radius:10px;"));
        lineEdit_2->setEchoMode(QLineEdit::Password);

        verticalLayout_3->addWidget(lineEdit_2);

        loginbuttom = new QPushButton(groupBox);
        loginbuttom->setObjectName("loginbuttom");
        loginbuttom->setEnabled(true);
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

        verticalLayout_3->addWidget(loginbuttom);


        horizontalLayout_2->addWidget(groupBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 3);
        horizontalLayout_2->setStretch(2, 1);

        verticalLayout_2->addLayout(horizontalLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_4 = new QLabel(widget_2);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255,1);\n"
"font: 900 8pt \"Segoe UI Black\";\n"
"color: rgb(255, 255, 255,255);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 3);
        verticalLayout_2->setStretch(2, 6);

        verticalLayout->addWidget(widget_2);

        widget = new QWidget(welcom);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(68, 68, 68);\n"
"color: rgb(68, 68, , 68);"));
        signupbutton_2 = new QPushButton(widget);
        signupbutton_2->setObjectName("signupbutton_2");
        signupbutton_2->setEnabled(true);
        signupbutton_2->setGeometry(QRect(-30, -30, 158, 101));
        signupbutton_2->setCursor(QCursor(Qt::ArrowCursor));
        signupbutton_2->setMouseTracking(true);
        signupbutton_2->setTabletTracking(false);
        signupbutton_2->setAcceptDrops(false);
        signupbutton_2->setStyleSheet(QString::fromUtf8("QPushButton::hover\n"
"{\n"
"	background-color: rgb(225, 225, 225);\n"
"}\n"
"QPushButton{\n"
"font: 700 10pt \"Segoe UI\";\n"
"alternate-background: rgb(255, 255, 255);\n"
"font: 600 16pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"background: rgb(70, 30, 40,100);\n"
"padding: 10px;\n"
"border-radius:10px;\n"
"}"));
        signupbutton_2->setAutoDefault(false);
        signupbutton_2->setFlat(true);

        verticalLayout->addWidget(widget);

        verticalLayout->setStretch(0, 14);
        verticalLayout->setStretch(1, 2);

        retranslateUi(welcom);

        pushButton_2->setDefault(false);


        QMetaObject::connectSlotsByName(welcom);
    } // setupUi

    void retranslateUi(QDialog *welcom)
    {
        welcom->setWindowTitle(QCoreApplication::translate("welcom", "Dialog", nullptr));
        pushButton_2->setText(QString());
        label->setText(QCoreApplication::translate("welcom", "Messanger", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("welcom", "username", nullptr));
        label_3->setText(QCoreApplication::translate("welcom", "password", nullptr));
        loginbuttom->setText(QCoreApplication::translate("welcom", "login", nullptr));
        label_4->setText(QCoreApplication::translate("welcom", "Dont have an account ?", nullptr));
#if QT_CONFIG(statustip)
        signupbutton_2->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        signupbutton_2->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        signupbutton_2->setText(QCoreApplication::translate("welcom", "signup", nullptr));
    } // retranslateUi

};

namespace Ui {
    class welcom: public Ui_welcom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOM_H
