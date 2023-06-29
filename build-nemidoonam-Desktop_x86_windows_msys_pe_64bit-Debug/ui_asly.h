/********************************************************************************
** Form generated from reading UI file 'asly.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASLY_H
#define UI_ASLY_H

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
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_asly
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *nemidonma;
    QPushButton *pushButton_22;
    QPushButton *pushButton_23;
    QLineEdit *lineEdit_4;
    QGroupBox *userinformation;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_20;
    QSpacerItem *horizontalSpacer_5;
    QGridLayout *gridLayout_5;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_17;
    QSpacerItem *verticalSpacer_5;
    QGroupBox *groupBox_12;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QGroupBox *setting;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_4;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton_15;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_16;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_13;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_14;
    QGroupBox *contactpage;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QPushButton *safejadid;
    QLineEdit *serchtxt;
    QPushButton *doserch;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_15;
    QGroupBox *chatpage;
    QVBoxLayout *verticalLayout_2;
    QWidget *user;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *usericon;
    QLabel *username;
    QScrollArea *messegarea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_10;
    QGroupBox *groupBox_17;
    QGroupBox *type;
    QGridLayout *gridLayout;
    QPushButton *emoji;
    QTextEdit *textEdit;
    QPushButton *send;
    QGroupBox *contactinformation;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox_10;
    QPushButton *pushButton_18;
    QLabel *label_6;
    QPushButton *pushButton_21;
    QPushButton *pushButton_5;
    QGroupBox *groupBox_9;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_8;
    QLineEdit *lineEdit_5;
    QLabel *label_9;
    QLineEdit *lineEdit_6;
    QLabel *label_10;
    QTextEdit *textEdit_2;

    void setupUi(QDialog *asly)
    {
        if (asly->objectName().isEmpty())
            asly->setObjectName("asly");
        asly->resize(1277, 800);
        asly->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout = new QHBoxLayout(asly);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        nemidonma = new QGroupBox(asly);
        nemidonma->setObjectName("nemidonma");
        nemidonma->setMinimumSize(QSize(0, 0));
        nemidonma->setMaximumSize(QSize(0, 0));
        nemidonma->setSizeIncrement(QSize(0, 0));
        nemidonma->setBaseSize(QSize(0, 0));
        nemidonma->setStyleSheet(QString::fromUtf8("background-color: rgb(6, 25, 29);\n"
"border-color: none;\n"
""));
        pushButton_22 = new QPushButton(nemidonma);
        pushButton_22->setObjectName("pushButton_22");
        pushButton_22->setGeometry(QRect(10, 90, 81, 81));
        pushButton_22->setAutoFillBackground(false);
        pushButton_22->setStyleSheet(QString::fromUtf8("background-color: rgb(249, 180, 255);\n"
"background: rgb(44, 227, 255);\n"
"border-radius:40px;\n"
""));
        pushButton_22->setFlat(true);
        pushButton_23 = new QPushButton(nemidonma);
        pushButton_23->setObjectName("pushButton_23");
        pushButton_23->setGeometry(QRect(20, 20, 51, 41));
        pushButton_23->setMinimumSize(QSize(51, 41));
        pushButton_23->setMaximumSize(QSize(51, 41));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/hi-def/arrowleft.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_23->setIcon(icon);
        lineEdit_4 = new QLineEdit(nemidonma);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(120, 110, 161, 31));
        lineEdit_4->setStyleSheet(QString::fromUtf8("border-rigt:0px;"));

        horizontalLayout->addWidget(nemidonma);

        userinformation = new QGroupBox(asly);
        userinformation->setObjectName("userinformation");
        userinformation->setMinimumSize(QSize(0, 0));
        userinformation->setMaximumSize(QSize(0, 0));
        userinformation->setSizeIncrement(QSize(0, 0));
        userinformation->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 255);\n"
"font: 900 14pt \"Segoe UI Black\";\n"
"background-color: rgb(6, 25, 29);\n"
"border-color: none;\n"
""));
        verticalLayout_7 = new QVBoxLayout(userinformation);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_20 = new QPushButton(userinformation);
        pushButton_20->setObjectName("pushButton_20");
        pushButton_20->setMaximumSize(QSize(40, 40));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/standard/arrowleft.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_20->setIcon(icon1);

        horizontalLayout_3->addWidget(pushButton_20);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout_7->addLayout(horizontalLayout_3);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName("gridLayout_5");
        label_2 = new QLabel(userinformation);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 900 9pt \"Segoe UI Black\";\n"
"font: 700 11pt \"Segoe UI Black\";\n"
"Padding-left:17px;"));

        gridLayout_5->addWidget(label_2, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_3, 2, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_4, 2, 0, 1, 1);

        pushButton_17 = new QPushButton(userinformation);
        pushButton_17->setObjectName("pushButton_17");
        pushButton_17->setEnabled(false);
        pushButton_17->setMinimumSize(QSize(141, 131));
        pushButton_17->setStyleSheet(QString::fromUtf8("background-color: rgb(16, 136, 136);\n"
"border-radius:65px;"));

        gridLayout_5->addWidget(pushButton_17, 2, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_5, 0, 1, 1, 1);


        verticalLayout_7->addLayout(gridLayout_5);

        groupBox_12 = new QGroupBox(userinformation);
        groupBox_12->setObjectName("groupBox_12");
        groupBox_12->setStyleSheet(QString::fromUtf8("padding: 10px;\n"
"\n"
"background-color: rgba(255, 255, 255, 20);\n"
"border-radius:30px;"));
        verticalLayout_8 = new QVBoxLayout(groupBox_12);
        verticalLayout_8->setObjectName("verticalLayout_8");
        label_3 = new QLabel(groupBox_12);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255,1);\n"
"font: 900 10pt \"Segoe UI Black\";\n"
"color: rgb(255, 255, 255,255);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_8->addWidget(label_3);

        lineEdit_3 = new QLineEdit(groupBox_12);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setEnabled(false);
        lineEdit_3->setStyleSheet(QString::fromUtf8("border-top-left-radius:0px;\n"
"border-bottom-right-radius:0px;\n"
"border-radius:10px;"));
        lineEdit_3->setEchoMode(QLineEdit::Password);
        lineEdit_3->setReadOnly(true);

        verticalLayout_8->addWidget(lineEdit_3);

        label_4 = new QLabel(groupBox_12);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255,1);\n"
"font: 900 10pt \"Segoe UI Black\";\n"
"color: rgb(255, 255, 255,255);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_8->addWidget(label_4);

        lineEdit_2 = new QLineEdit(groupBox_12);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setEnabled(false);
        lineEdit_2->setStyleSheet(QString::fromUtf8("border-radius:10px;"));
        lineEdit_2->setReadOnly(true);

        verticalLayout_8->addWidget(lineEdit_2);


        verticalLayout_7->addWidget(groupBox_12);

        verticalLayout_7->setStretch(0, 1);
        verticalLayout_7->setStretch(1, 10);
        verticalLayout_7->setStretch(2, 114);

        horizontalLayout->addWidget(userinformation);

        setting = new QGroupBox(asly);
        setting->setObjectName("setting");
        setting->setMinimumSize(QSize(0, 0));
        setting->setMaximumSize(QSize(0, 0));
        setting->setStyleSheet(QString::fromUtf8("background-color: rgb(6, 25, 29);\n"
"border-color: none;\n"
""));
        verticalLayout_4 = new QVBoxLayout(setting);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        groupBox_7 = new QGroupBox(setting);
        groupBox_7->setObjectName("groupBox_7");
        groupBox_7->setMinimumSize(QSize(0, 0));
        groupBox_7->setMaximumSize(QSize(400, 350));
        groupBox_7->setStyleSheet(QString::fromUtf8("color: rgb(232, 199, 255);\n"
"border:none;\n"
"background-color: rgb(239, 197, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0.975962, y2:0.063, stop:0 rgba(0, 197, 200, 255), stop:1 rgba(112, 231, 209, 255));\n"
"border-radius:0px;"));
        gridLayout_6 = new QGridLayout(groupBox_7);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_4, 0, 0, 1, 1);

        pushButton_15 = new QPushButton(groupBox_7);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setEnabled(false);
        pushButton_15->setMinimumSize(QSize(111, 111));
        pushButton_15->setMaximumSize(QSize(111, 111));
        pushButton_15->setStyleSheet(QString::fromUtf8("border-radius:55px;\n"
"background-color: rgb(255, 248, 193);"));

        gridLayout_4->addWidget(pushButton_15, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 1, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_4, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        pushButton_16 = new QPushButton(groupBox_7);
        pushButton_16->setObjectName("pushButton_16");
        pushButton_16->setMaximumSize(QSize(41, 29));
        pushButton_16->setStyleSheet(QString::fromUtf8("background-color: rgb(121, 121, 121);"));

        gridLayout_3->addWidget(pushButton_16, 1, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 1, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_3, 0, 1, 1, 1);


        verticalLayout_4->addWidget(groupBox_7);

        pushButton_13 = new QPushButton(setting);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setMinimumSize(QSize(0, 0));
        pushButton_13->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"font: 700 10pt \"Segoe UI\";\n"
"font: 600 11pt \"Segoe UI\";\n"
"	color: rgb(255, 255, 255);\n"
"background: rgb(70, 30, 40,0);\n"
"border-radius:15px;\n"
"border-radius:10px;\n"
"background-color: rgb(201, 209, 213,0);\n"
"	font: 900 9pt \"Segoe UI Black\";\n"
"\n"
"}\n"
"QPushButton::hover\n"
"{\n"
"\n"
"}"));

        verticalLayout_4->addWidget(pushButton_13);

        pushButton_10 = new QPushButton(setting);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setMinimumSize(QSize(0, 0));
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"font: 700 10pt \"Segoe UI\";\n"
"font: 600 11pt \"Segoe UI\";\n"
"	color: rgb(255, 255, 255);\n"
"background: rgb(70, 30, 40,0);\n"
"border-radius:15px;\n"
"border-radius:10px;\n"
"background-color: rgb(201, 209, 213,0);\n"
"	font: 900 9pt \"Segoe UI Black\";\n"
"\n"
"}\n"
"QPushButton::hover\n"
"{\n"
"\n"
"}"));

        verticalLayout_4->addWidget(pushButton_10);

        pushButton_11 = new QPushButton(setting);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setMinimumSize(QSize(0, 0));
        pushButton_11->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"font: 700 10pt \"Segoe UI\";\n"
"font: 600 11pt \"Segoe UI\";\n"
"	color: rgb(255, 255, 255);\n"
"background: rgb(70, 30, 40,0);\n"
"border-radius:15px;\n"
"border-radius:10px;\n"
"background-color: rgb(201, 209, 213,0);\n"
"	font: 900 9pt \"Segoe UI Black\";\n"
"\n"
"}\n"
"QPushButton::hover\n"
"{\n"
"\n"
"}"));

        verticalLayout_4->addWidget(pushButton_11);

        pushButton_12 = new QPushButton(setting);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setMinimumSize(QSize(0, 0));
        pushButton_12->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"font: 700 10pt \"Segoe UI\";\n"
"font: 600 11pt \"Segoe UI\";\n"
"	color: rgb(255, 255, 255);\n"
"background: rgb(70, 30, 40,0);\n"
"border-radius:15px;\n"
"border-radius:10px;\n"
"background-color: rgb(201, 209, 213,0);\n"
"	font: 900 9pt \"Segoe UI Black\";\n"
"\n"
"}\n"
"QPushButton::hover\n"
"{\n"
"\n"
"}"));

        verticalLayout_4->addWidget(pushButton_12);

        pushButton_14 = new QPushButton(setting);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setMinimumSize(QSize(0, 0));
        pushButton_14->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"font: 700 10pt \"Segoe UI\";\n"
"font: 600 11pt \"Segoe UI\";\n"
"	color: rgb(255, 255, 255);\n"
"background: rgb(70, 30, 40,0);\n"
"border-radius:15px;\n"
"border-radius:10px;\n"
"background-color: rgb(201, 209, 213,0);\n"
"	font: 900 9pt \"Segoe UI Black\";\n"
"\n"
"}\n"
"QPushButton::hover\n"
"{\n"
"\n"
"}"));

        verticalLayout_4->addWidget(pushButton_14);

        verticalLayout_4->setStretch(1, 2);
        verticalLayout_4->setStretch(2, 2);
        verticalLayout_4->setStretch(3, 2);
        verticalLayout_4->setStretch(4, 2);
        verticalLayout_4->setStretch(5, 2);

        horizontalLayout->addWidget(setting);

        contactpage = new QGroupBox(asly);
        contactpage->setObjectName("contactpage");
        contactpage->setMaximumSize(QSize(12345432, 16777215));
        contactpage->setStyleSheet(QString::fromUtf8("border:none;\n"
""));
        verticalLayout_3 = new QVBoxLayout(contactpage);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBox_3 = new QGroupBox(contactpage);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setMinimumSize(QSize(0, 80));
        groupBox_3->setStyleSheet(QString::fromUtf8("background-color: rgb(6, 25, 29);\n"
"border:none;"));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName("gridLayout_2");
        safejadid = new QPushButton(groupBox_3);
        safejadid->setObjectName("safejadid");
        safejadid->setEnabled(true);
        safejadid->setMinimumSize(QSize(0, 15));
        safejadid->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"font: 700 10pt \"Segoe UI\";\n"
"font: 600 11pt \"Segoe UI\";\n"
"color: rgb(255, 255, 0);\n"
"background: rgb(70, 30, 40,0);\n"
"border-radius:15px;\n"
"border-radius:10px;\n"
"background-color: rgb(201, 209, 213,0);\n"
"\n"
"}\n"
"QPushButton::hover\n"
"{\n"
"	background-color: rgb(225, 225, 225);\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/standard/arrowright.png"), QSize(), QIcon::Normal, QIcon::Off);
        safejadid->setIcon(icon2);
        safejadid->setFlat(true);

        gridLayout_2->addWidget(safejadid, 0, 0, 1, 1);

        serchtxt = new QLineEdit(groupBox_3);
        serchtxt->setObjectName("serchtxt");
        serchtxt->setStyleSheet(QString::fromUtf8("border-radius:7px;\n"
"background-color: rgb(201, 209, 213);\n"
"TextMargins:2px;\n"
"padding-left:4px;\n"
"font: 900 9pt \"Segoe UI Black\";"));
        serchtxt->setCursorPosition(0);

        gridLayout_2->addWidget(serchtxt, 0, 1, 1, 1);

        doserch = new QPushButton(groupBox_3);
        doserch->setObjectName("doserch");
        doserch->setEnabled(true);
        doserch->setMinimumSize(QSize(0, 15));
        doserch->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"font: 700 10pt \"Segoe UI\";\n"
"font: 600 11pt \"Segoe UI\";\n"
"color: rgb(255, 255, 0);\n"
"background: rgb(70, 30, 40,0);\n"
"border-radius:15px;\n"
"border-radius:10px;\n"
"background-color: rgb(201, 209, 213,0);\n"
"}\n"
"QPushButton::hover\n"
"{\n"
"	background-color: rgb(225, 225, 225);\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/standard/magnifyingglass.png"), QSize(), QIcon::Normal, QIcon::Off);
        doserch->setIcon(icon3);
        doserch->setFlat(true);

        gridLayout_2->addWidget(doserch, 0, 2, 1, 1);

        serchtxt->raise();
        safejadid->raise();
        doserch->raise();

        verticalLayout_3->addWidget(groupBox_3);

        scrollArea = new QScrollArea(contactpage);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setSizeIncrement(QSize(0, 0));
        scrollArea->setStyleSheet(QString::fromUtf8("background-color: rgb(6, 25, 29);\n"
"border-color: none;"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 319, 720));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName("verticalLayout");
        groupBox_15 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_15->setObjectName("groupBox_15");
        groupBox_15->setMaximumSize(QSize(0, 0));

        verticalLayout->addWidget(groupBox_15);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);

        verticalLayout_3->setStretch(0, 2);
        verticalLayout_3->setStretch(1, 20);

        horizontalLayout->addWidget(contactpage);

        chatpage = new QGroupBox(asly);
        chatpage->setObjectName("chatpage");
        chatpage->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0.975962, y2:0.063, stop:0 rgba(0, 197, 200, 255), stop:1 rgba(112, 231, 209, 255));"));
        verticalLayout_2 = new QVBoxLayout(chatpage);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        user = new QWidget(chatpage);
        user->setObjectName("user");
        user->setMinimumSize(QSize(0, 80));
        user->setMaximumSize(QSize(16777215, 80));
        user->setStyleSheet(QString::fromUtf8("background-color: rgb(6, 25, 29);\n"
"border:none;\n"
""));
        horizontalLayout_2 = new QHBoxLayout(user);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        usericon = new QPushButton(user);
        usericon->setObjectName("usericon");
        usericon->setMinimumSize(QSize(82, 72));
        usericon->setMaximumSize(QSize(82, 72));
        usericon->setSizeIncrement(QSize(0, 0));
        usericon->setStyleSheet(QString::fromUtf8("border-radius:36px;\n"
"background-color: rgb(120, 255, 140);\n"
""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/standard/man.png"), QSize(), QIcon::Normal, QIcon::Off);
        usericon->setIcon(icon4);
        usericon->setIconSize(QSize(91, 81));

        horizontalLayout_2->addWidget(usericon);

        username = new QLabel(user);
        username->setObjectName("username");
        username->setMinimumSize(QSize(221, 61));
        username->setMaximumSize(QSize(16777215, 16777215));
        username->setStyleSheet(QString::fromUtf8("font: 900 11pt \"Segoe UI Black\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(username);

        horizontalLayout_2->setStretch(0, 3);
        horizontalLayout_2->setStretch(1, 6);

        verticalLayout_2->addWidget(user);

        messegarea = new QScrollArea(chatpage);
        messegarea->setObjectName("messegarea");
        messegarea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 954, 660));
        verticalLayout_10 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_10->setObjectName("verticalLayout_10");
        groupBox_17 = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox_17->setObjectName("groupBox_17");
        groupBox_17->setMinimumSize(QSize(0, 500));
        groupBox_17->setStyleSheet(QString::fromUtf8("border:none;\n"
""));

        verticalLayout_10->addWidget(groupBox_17);

        messegarea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_2->addWidget(messegarea);

        type = new QGroupBox(chatpage);
        type->setObjectName("type");
        type->setMaximumSize(QSize(16777215, 56));
        type->setAutoFillBackground(false);
        type->setStyleSheet(QString::fromUtf8("background-color: rgb(6, 25, 29);\n"
"border:none;\n"
"\n"
""));
        type->setFlat(false);
        gridLayout = new QGridLayout(type);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(7);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(11, 15, 12, 11);
        emoji = new QPushButton(type);
        emoji->setObjectName("emoji");
        emoji->setMinimumSize(QSize(0, 30));
        emoji->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color: rgb(201, 209, 213,0);\n"
"\n"
""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/prefix1/standard/games.png"), QSize(), QIcon::Normal, QIcon::Off);
        emoji->setIcon(icon5);

        gridLayout->addWidget(emoji, 0, 0, 1, 1);

        textEdit = new QTextEdit(type);
        textEdit->setObjectName("textEdit");
        textEdit->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"background-color: rgb(201, 209, 213);\n"
"TextMargins:2px;\n"
"padding-left:10px;"));

        gridLayout->addWidget(textEdit, 0, 1, 1, 1);

        send = new QPushButton(type);
        send->setObjectName("send");
        send->setMinimumSize(QSize(0, 30));
        send->setSizeIncrement(QSize(0, 0));
        send->setBaseSize(QSize(0, 0));
        send->setLayoutDirection(Qt::RightToLeft);
        send->setAutoFillBackground(false);
        send->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color: rgb(201, 209, 213,0);\n"
""));
        send->setIcon(icon2);

        gridLayout->addWidget(send, 0, 2, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 20);
        gridLayout->setColumnStretch(2, 1);

        verticalLayout_2->addWidget(type);


        horizontalLayout->addWidget(chatpage);

        contactinformation = new QGroupBox(asly);
        contactinformation->setObjectName("contactinformation");
        contactinformation->setMinimumSize(QSize(0, 0));
        contactinformation->setMaximumSize(QSize(0, 0));
        verticalLayout_9 = new QVBoxLayout(contactinformation);
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        groupBox_8 = new QGroupBox(contactinformation);
        groupBox_8->setObjectName("groupBox_8");
        groupBox_8->setStyleSheet(QString::fromUtf8("border:none;\n"
"\n"
"background-color: rgb(12, 36, 60);"));
        verticalLayout_6 = new QVBoxLayout(groupBox_8);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        groupBox_10 = new QGroupBox(groupBox_8);
        groupBox_10->setObjectName("groupBox_10");
        pushButton_18 = new QPushButton(groupBox_10);
        pushButton_18->setObjectName("pushButton_18");
        pushButton_18->setGeometry(QRect(-10, 0, 451, 261));
        pushButton_18->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/Desktop.png);"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/vector-jan-2021-19_generated.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_18->setIcon(icon6);
        pushButton_18->setIconSize(QSize(461, 927));
        label_6 = new QLabel(groupBox_10);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(0, 210, 221, 41));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(201, 209, 213);\n"
"font: 900 14pt \"Segoe UI Black\";\n"
"background-color: rgb(255, 255, 255,0);"));
        pushButton_21 = new QPushButton(groupBox_10);
        pushButton_21->setObjectName("pushButton_21");
        pushButton_21->setGeometry(QRect(320, 180, 81, 81));
        pushButton_21->setStyleSheet(QString::fromUtf8("border-radius:40px;"));
        pushButton_5 = new QPushButton(groupBox_10);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(342, 0, 51, 51));
        pushButton_5->setIcon(icon2);

        verticalLayout_6->addWidget(groupBox_10);

        groupBox_9 = new QGroupBox(groupBox_8);
        groupBox_9->setObjectName("groupBox_9");
        groupBox_9->setStyleSheet(QString::fromUtf8("padding: 10px;\n"
"\n"
"background-color: rgba(255, 255, 255, 20);\n"
"border-radius:30px;"));
        verticalLayout_5 = new QVBoxLayout(groupBox_9);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_8 = new QLabel(groupBox_9);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255,1);\n"
"font: 900 10pt \"Segoe UI Black\";\n"
"color: rgb(255, 255, 255,255);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_5->addWidget(label_8);

        lineEdit_5 = new QLineEdit(groupBox_9);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setStyleSheet(QString::fromUtf8("border-top-left-radius:0px;\n"
"border-bottom-right-radius:0px;\n"
"border-radius:10px;"));
        lineEdit_5->setEchoMode(QLineEdit::Password);
        lineEdit_5->setReadOnly(true);

        verticalLayout_5->addWidget(lineEdit_5);

        label_9 = new QLabel(groupBox_9);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255,1);\n"
"font: 900 10pt \"Segoe UI Black\";\n"
"color: rgb(255, 255, 255,255);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_5->addWidget(label_9);

        lineEdit_6 = new QLineEdit(groupBox_9);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setStyleSheet(QString::fromUtf8("border-radius:10px;"));
        lineEdit_6->setReadOnly(true);

        verticalLayout_5->addWidget(lineEdit_6);

        label_10 = new QLabel(groupBox_9);
        label_10->setObjectName("label_10");
        label_10->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255,1);\n"
"font: 900 10pt \"Segoe UI Black\";\n"
"color: rgb(255, 255, 255,255);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_5->addWidget(label_10);

        textEdit_2 = new QTextEdit(groupBox_9);
        textEdit_2->setObjectName("textEdit_2");

        verticalLayout_5->addWidget(textEdit_2);


        verticalLayout_6->addWidget(groupBox_9);

        verticalLayout_6->setStretch(0, 9);
        verticalLayout_6->setStretch(1, 1);

        verticalLayout_9->addWidget(groupBox_8);


        horizontalLayout->addWidget(contactinformation);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(3, 1);
        horizontalLayout->setStretch(4, 3);
        horizontalLayout->setStretch(5, 1);

        retranslateUi(asly);

        QMetaObject::connectSlotsByName(asly);
    } // setupUi

    void retranslateUi(QDialog *asly)
    {
        asly->setWindowTitle(QCoreApplication::translate("asly", "Dialog", nullptr));
        nemidonma->setTitle(QString());
        pushButton_22->setText(QString());
        pushButton_23->setText(QString());
        lineEdit_4->setPlaceholderText(QCoreApplication::translate("asly", "Enter group name", nullptr));
        userinformation->setTitle(QString());
        pushButton_20->setText(QString());
        label_2->setText(QCoreApplication::translate("asly", "username", nullptr));
        pushButton_17->setText(QString());
        groupBox_12->setTitle(QString());
        label_3->setText(QCoreApplication::translate("asly", "firstname", nullptr));
        label_4->setText(QCoreApplication::translate("asly", "lastname", nullptr));
        setting->setTitle(QString());
        groupBox_7->setTitle(QString());
        pushButton_15->setText(QString());
        pushButton_16->setText(QCoreApplication::translate("asly", "back", nullptr));
        pushButton_13->setText(QCoreApplication::translate("asly", "new group", nullptr));
        pushButton_10->setText(QCoreApplication::translate("asly", "contacts", nullptr));
        pushButton_11->setText(QCoreApplication::translate("asly", "sevad message", nullptr));
        pushButton_12->setText(QCoreApplication::translate("asly", "new chanel", nullptr));
        pushButton_14->setText(QCoreApplication::translate("asly", "profile", nullptr));
        contactpage->setTitle(QString());
        groupBox_3->setTitle(QCoreApplication::translate("asly", "GroupBox", nullptr));
        safejadid->setText(QString());
        serchtxt->setPlaceholderText(QCoreApplication::translate("asly", "search...", nullptr));
        doserch->setText(QString());
        groupBox_15->setTitle(QCoreApplication::translate("asly", "GroupBox", nullptr));
        chatpage->setTitle(QString());
        usericon->setText(QString());
        username->setText(QCoreApplication::translate("asly", "user name", nullptr));
        groupBox_17->setTitle(QString());
        type->setTitle(QString());
        emoji->setText(QString());
        textEdit->setPlaceholderText(QCoreApplication::translate("asly", "Message...", nullptr));
        send->setText(QString());
        contactinformation->setTitle(QString());
        groupBox_8->setTitle(QString());
        groupBox_10->setTitle(QString());
        pushButton_18->setText(QString());
        label_6->setText(QCoreApplication::translate("asly", "username", nullptr));
        pushButton_21->setText(QString());
        pushButton_5->setText(QString());
        groupBox_9->setTitle(QString());
        label_8->setText(QCoreApplication::translate("asly", "firstname", nullptr));
        label_9->setText(QCoreApplication::translate("asly", "lastname", nullptr));
        label_10->setText(QCoreApplication::translate("asly", "bio", nullptr));
    } // retranslateUi

};

namespace Ui {
    class asly: public Ui_asly {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASLY_H
