/********************************************************************************
** Form generated from reading UI file 'mainwindow1.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW1_H
#define UI_MAINWINDOW1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow1
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page1;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QPushButton *Login_Button;
    QPushButton *Signup_Button;
    QPushButton *Guest_Button;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QWidget *page2;
    QGridLayout *gridLayout_9;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_9;
    QPushButton *Reset_buttom;
    QGridLayout *gridLayout_8;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *horizontalSpacer_8;
    QGroupBox *MiddleBox;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QGroupBox *LoginFormGroup;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout_7;
    QPushButton *BackLogin_button;
    QSpacerItem *horizontalSpacer_11;
    QGridLayout *gridLayout_2;
    QLabel *username_2;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_13;
    QLineEdit *username;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *verticalSpacer_5;
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayout_6;
    QSpacerItem *horizontalSpacer_15;
    QSpacerItem *horizontalSpacer_14;
    QLineEdit *password;
    QLabel *password_2;
    QGridLayout *confirmPasswordPar;
    QGridLayout *confContainer;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *horizontalSpacer_17;
    QLineEdit *password_3;
    QLabel *password_4;
    QSpacerItem *verticalSpacer_11;
    QSpacerItem *verticalSpacer_12;
    QLabel *WrongWarning;
    QSpacerItem *verticalSpacer_10;
    QGridLayout *gridLayout_10;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *Login_User_Button;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_7;
    QLineEdit *phone_number;
    QLabel *phone_number_label;
    QWidget *page3;
    QLabel *label_3;
    QLineEdit *username_reset;
    QLineEdit *Phone_reset;
    QLineEdit *pass_reset;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *Confirm_reset;
    QLabel *wrong_input_reset;
    QLabel *label_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow1)
    {
        if (MainWindow1->objectName().isEmpty())
            MainWindow1->setObjectName("MainWindow1");
        MainWindow1->resize(1071, 779);
        QFont font;
        font.setBold(false);
        MainWindow1->setFont(font);
        MainWindow1->setAutoFillBackground(false);
        MainWindow1->setStyleSheet(QString::fromUtf8("QMainWindow\n"
"{\n"
"	border-image: url(:/Logic/Graphics/Ready/Login Background.png) 0 0 0 0 stretch stretch;\n"
"}"));
        centralwidget = new QWidget(MainWindow1);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(10, 20, 954, 626));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page1 = new QWidget();
        page1->setObjectName("page1");
        gridLayout_5 = new QGridLayout(page1);
        gridLayout_5->setObjectName("gridLayout_5");
        horizontalSpacer_4 = new QSpacerItem(174, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 32, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_5->addItem(verticalSpacer_3, 2, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(174, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 1, 0, 1, 1);

        groupBox_3 = new QGroupBox(page1);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"	border-radius: 0px;\n"
"	padding: 3px;\n"
"}"));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(-1, 0, -1, -1);
        label = new QLabel(groupBox_3);
        label->setObjectName("label");
        label->setPixmap(QPixmap(QString::fromUtf8(":/Logic/Graphics/Ready/Login Graphic.png")));
        label->setScaledContents(true);

        verticalLayout_3->addWidget(label);

        groupBox = new QGroupBox(groupBox_3);
        groupBox->setObjectName("groupBox");
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"	color:white;\n"
"	Background-color: White;\n"
"	border-bottom-left-radius: 10px;\n"
"	border-bottom-right-radius: 10px;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"	font: 300 20pt \"Montserrat\";\n"
"	Background: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0.2, stop:0 rgba(22, 45, 211, 255), stop:1 rgba(17, 180, 237, 255));\n"
"	Border-radius: 10px;\n"
"	height: 40px\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	font: 300 20pt \"Montserrat\";\n"
"	Background: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0.2, stop:0 rgba(22, 45, 150, 255), stop:1 rgba(17, 180, 237, 255));\n"
"	Border-radius: 10px;\n"
"	height: 40px\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 300 20pt \"Montserrat\";\n"
"	Background: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0.2, stop:0 rgba(22, 45, 150, 255), stop:1 rgba(17, 180, 150, 255));\n"
"	Border-radius: 10px;\n"
"	height: 40px;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(12);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(20, 20, 20, 20);
        Login_Button = new QPushButton(groupBox);
        Login_Button->setObjectName("Login_Button");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Montserrat")});
        font1.setPointSize(20);
        font1.setWeight(QFont::Light);
        font1.setItalic(false);
        Login_Button->setFont(font1);
        Login_Button->setStyleSheet(QString::fromUtf8(""));
        Login_Button->setFlat(false);

        verticalLayout_2->addWidget(Login_Button);

        Signup_Button = new QPushButton(groupBox);
        Signup_Button->setObjectName("Signup_Button");
        Signup_Button->setFont(font1);
        Signup_Button->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(Signup_Button);

        Guest_Button = new QPushButton(groupBox);
        Guest_Button->setObjectName("Guest_Button");
        Guest_Button->setFont(font1);
        Guest_Button->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(Guest_Button);


        verticalLayout_3->addWidget(groupBox);


        gridLayout_3->addWidget(groupBox_3, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 2, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_3, 1, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 32, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_5->addItem(verticalSpacer_4, 0, 1, 1, 1);

        stackedWidget->addWidget(page1);
        page2 = new QWidget();
        page2->setObjectName("page2");
        gridLayout_9 = new QGridLayout(page2);
        gridLayout_9->setObjectName("gridLayout_9");
        horizontalSpacer_9 = new QSpacerItem(173, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_9, 1, 0, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 12, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_9->addItem(verticalSpacer_8, 5, 1, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(173, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_10, 1, 2, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 12, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_9->addItem(verticalSpacer_9, 0, 1, 1, 1);

        Reset_buttom = new QPushButton(page2);
        Reset_buttom->setObjectName("Reset_buttom");

        gridLayout_9->addWidget(Reset_buttom, 3, 2, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName("gridLayout_8");
        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_8->addItem(verticalSpacer_6, 0, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_8, 1, 0, 1, 1);

        MiddleBox = new QGroupBox(page2);
        MiddleBox->setObjectName("MiddleBox");
        MiddleBox->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"	border-radius: 0px;\n"
"	padding: 3px;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"	font: 300 15pt \"Montserrat\";\n"
"	Background: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0.2, stop:0 rgba(22, 45, 211, 255), stop:1 rgba(17, 180, 237, 255));\n"
"	Border-radius: 5px;\n"
"	height: 30px;\n"
"	width: 100px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	font: 300 15pt \"Montserrat\";\n"
"	Background: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0.2, stop:0 rgba(22, 45, 150, 255), stop:1 rgba(17, 180, 237, 255));\n"
"	Border-radius: 5px;\n"
"	height: 30px;\n"
"	width: 100px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 300 15pt \"Montserrat\";\n"
"	Background: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0.2, stop:0 rgba(22, 45, 150, 255), stop:1 rgba(17, 180, 150, 255));\n"
"	Border-radius: 5px;\n"
"	height: 30px;\n"
"	width: 100px;\n"
"}"));
        verticalLayout = new QVBoxLayout(MiddleBox);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(MiddleBox);
        label_2->setObjectName("label_2");
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Logic/Graphics/Ready/Login Graphic.png")));
        label_2->setScaledContents(true);

        verticalLayout->addWidget(label_2);

        LoginFormGroup = new QGroupBox(MiddleBox);
        LoginFormGroup->setObjectName("LoginFormGroup");
        LoginFormGroup->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"	color:white;\n"
"	Background-color: White;\n"
"	border-bottom-left-radius: 10px;\n"
"	border-bottom-right-radius: 10px;\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"	font: 300 12pt \"Montserrat\";\n"
"	color: Black;\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"	color: black;\n"
"	font: 15pt \"Montserrat\";\n"
"	border: 2px solid green;\n"
"	Background-color: white;\n"
"	font-size: 14px;\n"
"	selection-background-color: lightgray;\n"
"	height: 25px;\n"
"}\n"
"\n"
"QLineEdit:focus\n"
"{\n"
"    border: 2px solid blue;\n"
"    background-color: #f0f8ff; /* Light blue */\n"
"}\n"
""));
        verticalLayout_4 = new QVBoxLayout(LoginFormGroup);
        verticalLayout_4->setObjectName("verticalLayout_4");
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName("gridLayout_7");
        BackLogin_button = new QPushButton(LoginFormGroup);
        BackLogin_button->setObjectName("BackLogin_button");
        BackLogin_button->setStyleSheet(QString::fromUtf8("QPushButton#BackLogin_button\n"
"{\n"
"	font: 300 13pt \"Montserrat\";\n"
"	color: grey;\n"
"	Background: rgba(0, 0, 0, 0);\n"
"}\n"
"\n"
"QPushButton#BackLogin_button:hover\n"
"{\n"
"	font: 300 13pt \"Montserrat\";\n"
"	color: rgb(90, 90, 90);\n"
"	Background: rgba(0, 0, 0, 0);\n"
"}\n"
"\n"
"QPushButton#BackLogin_button:pressed\n"
"{\n"
"	font: 300 13pt \"Montserrat\";\n"
"	color: rgb(36, 36, 36)\n"
"	Background: rgba(0, 0, 0, 0);\n"
"}"));
        BackLogin_button->setIconSize(QSize(12, 9));

        gridLayout_7->addWidget(BackLogin_button, 0, 0, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_11, 0, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout_7);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        username_2 = new QLabel(LoginFormGroup);
        username_2->setObjectName("username_2");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Montserrat")});
        font2.setPointSize(12);
        font2.setWeight(QFont::Light);
        font2.setItalic(false);
        username_2->setFont(font2);
        username_2->setLineWidth(1);
        username_2->setMidLineWidth(0);
        username_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        username_2->setOpenExternalLinks(false);

        gridLayout_2->addWidget(username_2, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer_13 = new QSpacerItem(35, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_13, 0, 0, 1, 1);

        username = new QLineEdit(LoginFormGroup);
        username->setObjectName("username");

        gridLayout->addWidget(username, 0, 1, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(35, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_12, 0, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);


        verticalLayout_4->addLayout(gridLayout_2);

        verticalSpacer_5 = new QSpacerItem(10, 22, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        verticalLayout_4->addItem(verticalSpacer_5);

        gridLayout_11 = new QGridLayout();
        gridLayout_11->setObjectName("gridLayout_11");
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName("gridLayout_6");
        horizontalSpacer_15 = new QSpacerItem(35, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_15, 1, 0, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(35, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_14, 1, 4, 1, 1);

        password = new QLineEdit(LoginFormGroup);
        password->setObjectName("password");
        password->setEchoMode(QLineEdit::EchoMode::Password);

        gridLayout_6->addWidget(password, 1, 2, 1, 1);


        gridLayout_11->addLayout(gridLayout_6, 1, 0, 1, 1);

        password_2 = new QLabel(LoginFormGroup);
        password_2->setObjectName("password_2");
        password_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	colour: black;\n"
"}"));
        password_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_11->addWidget(password_2, 0, 0, 1, 1);


        verticalLayout_4->addLayout(gridLayout_11);

        confirmPasswordPar = new QGridLayout();
        confirmPasswordPar->setObjectName("confirmPasswordPar");
        confContainer = new QGridLayout();
        confContainer->setObjectName("confContainer");
        horizontalSpacer_16 = new QSpacerItem(35, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        confContainer->addItem(horizontalSpacer_16, 1, 4, 1, 1);

        horizontalSpacer_17 = new QSpacerItem(35, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        confContainer->addItem(horizontalSpacer_17, 1, 0, 1, 1);

        password_3 = new QLineEdit(LoginFormGroup);
        password_3->setObjectName("password_3");
        password_3->setEchoMode(QLineEdit::EchoMode::Password);

        confContainer->addWidget(password_3, 1, 2, 1, 1);


        confirmPasswordPar->addLayout(confContainer, 2, 0, 1, 1);

        password_4 = new QLabel(LoginFormGroup);
        password_4->setObjectName("password_4");
        password_4->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	colour: black;\n"
"}"));
        password_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        confirmPasswordPar->addWidget(password_4, 1, 0, 1, 1);

        verticalSpacer_11 = new QSpacerItem(10, 22, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        confirmPasswordPar->addItem(verticalSpacer_11, 0, 0, 1, 1);


        verticalLayout_4->addLayout(confirmPasswordPar);

        verticalSpacer_12 = new QSpacerItem(5, 6, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        verticalLayout_4->addItem(verticalSpacer_12);

        WrongWarning = new QLabel(LoginFormGroup);
        WrongWarning->setObjectName("WrongWarning");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI")});
        font3.setPointSize(9);
        font3.setBold(false);
        font3.setItalic(false);
        WrongWarning->setFont(font3);
        WrongWarning->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"font: 9pt \"Segoe UI\";"));
        WrongWarning->setLineWidth(1);
        WrongWarning->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(WrongWarning);

        verticalSpacer_10 = new QSpacerItem(5, 6, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        verticalLayout_4->addItem(verticalSpacer_10);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName("gridLayout_10");
        horizontalSpacer_6 = new QSpacerItem(137, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_6, 0, 0, 1, 1);

        Login_User_Button = new QPushButton(LoginFormGroup);
        Login_User_Button->setObjectName("Login_User_Button");

        gridLayout_10->addWidget(Login_User_Button, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(136, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_5, 0, 2, 1, 1);


        verticalLayout_4->addLayout(gridLayout_10);


        verticalLayout->addWidget(LoginFormGroup);


        gridLayout_8->addWidget(MiddleBox, 1, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_7, 1, 2, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_8->addItem(verticalSpacer_7, 2, 1, 1, 1);


        gridLayout_9->addLayout(gridLayout_8, 1, 1, 1, 1);

        phone_number = new QLineEdit(page2);
        phone_number->setObjectName("phone_number");
        phone_number->setEchoMode(QLineEdit::EchoMode::Normal);

        gridLayout_9->addWidget(phone_number, 3, 0, 1, 1);

        phone_number_label = new QLabel(page2);
        phone_number_label->setObjectName("phone_number_label");

        gridLayout_9->addWidget(phone_number_label, 2, 0, 1, 1);

        stackedWidget->addWidget(page2);
        page3 = new QWidget();
        page3->setObjectName("page3");
        label_3 = new QLabel(page3);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(380, 330, 195, 16));
        username_reset = new QLineEdit(page3);
        username_reset->setObjectName("username_reset");
        username_reset->setGeometry(QRect(380, 290, 231, 24));
        Phone_reset = new QLineEdit(page3);
        Phone_reset->setObjectName("Phone_reset");
        Phone_reset->setGeometry(QRect(380, 350, 231, 24));
        pass_reset = new QLineEdit(page3);
        pass_reset->setObjectName("pass_reset");
        pass_reset->setGeometry(QRect(380, 400, 231, 24));
        pass_reset->setEchoMode(QLineEdit::EchoMode::Password);
        label_5 = new QLabel(page3);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(380, 270, 195, 16));
        label_6 = new QLabel(page3);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(380, 380, 195, 16));
        Confirm_reset = new QPushButton(page3);
        Confirm_reset->setObjectName("Confirm_reset");
        Confirm_reset->setGeometry(QRect(440, 490, 111, 41));
        wrong_input_reset = new QLabel(page3);
        wrong_input_reset->setObjectName("wrong_input_reset");
        wrong_input_reset->setGeometry(QRect(390, 430, 271, 41));
        label_8 = new QLabel(page3);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(380, 190, 261, 51));
        QFont font4;
        font4.setPointSize(22);
        font4.setBold(true);
        label_8->setFont(font4);
        stackedWidget->addWidget(page3);
        Confirm_reset->raise();
        label_3->raise();
        username_reset->raise();
        Phone_reset->raise();
        pass_reset->raise();
        label_5->raise();
        label_6->raise();
        wrong_input_reset->raise();
        label_8->raise();
        MainWindow1->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow1);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1071, 25));
        MainWindow1->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow1);
        statusbar->setObjectName("statusbar");
        MainWindow1->setStatusBar(statusbar);

        retranslateUi(MainWindow1);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow1);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow1)
    {
        MainWindow1->setWindowTitle(QCoreApplication::translate("MainWindow1", "MainWindow1", nullptr));
        groupBox_3->setTitle(QString());
        label->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("MainWindow1", "sign in ", nullptr));
        Login_Button->setText(QCoreApplication::translate("MainWindow1", "Log In", nullptr));
        Signup_Button->setText(QCoreApplication::translate("MainWindow1", "Sign up", nullptr));
        Guest_Button->setText(QCoreApplication::translate("MainWindow1", "Continue as a Guest", nullptr));
        Reset_buttom->setText(QCoreApplication::translate("MainWindow1", "Reset", nullptr));
        MiddleBox->setTitle(QString());
        label_2->setText(QString());
        LoginFormGroup->setTitle(QString());
        BackLogin_button->setText(QCoreApplication::translate("MainWindow1", "< Back", nullptr));
        username_2->setText(QCoreApplication::translate("MainWindow1", "Username", nullptr));
        password_2->setText(QCoreApplication::translate("MainWindow1", "Password", nullptr));
        password_4->setText(QCoreApplication::translate("MainWindow1", "Confirm Password", nullptr));
        WrongWarning->setText(QCoreApplication::translate("MainWindow1", "Wrong Username or Password !", nullptr));
        Login_User_Button->setText(QCoreApplication::translate("MainWindow1", "Log In", nullptr));
        phone_number_label->setText(QCoreApplication::translate("MainWindow1", "enter your Phone number", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow1", "Phone number you enterd before*", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow1", "username  you enterd before*", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow1", "New Password", nullptr));
        Confirm_reset->setText(QCoreApplication::translate("MainWindow1", "Confirm", nullptr));
        wrong_input_reset->setText(QCoreApplication::translate("MainWindow1", "Wrong username or Phone ", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow1", "Reseting Account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow1: public Ui_MainWindow1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW1_H
