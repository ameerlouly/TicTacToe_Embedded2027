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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow1
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_4;
    QStackedWidget *stackedWidget;
    QWidget *ChooseRegisterType_Page;
    QGridLayout *gridLayout_5;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QPushButton *Login_Button;
    QPushButton *Signup_Button;
    QPushButton *Guest_Button;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_13;
    QWidget *LoginSignup_Page;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_8;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *horizontalSpacer_8;
    QGroupBox *MiddleBox;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QGroupBox *LoginFormGroup;
    QVBoxLayout *verticalLayout_7;
    QGridLayout *gridLayout_7;
    QPushButton *BackLogin_button;
    QSpacerItem *horizontalSpacer_11;
    QGridLayout *gridLayout_2;
    QLabel *username_2;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_13;
    QLineEdit *username;
    QSpacerItem *horizontalSpacer_12;
    QVBoxLayout *PhoneNumber_Layout;
    QSpacerItem *PhoneNumber_Spacer;
    QLabel *phone_number_label;
    QHBoxLayout *PhoneNumber_Container;
    QSpacerItem *horizontalSpacer_19;
    QLineEdit *phone_number;
    QSpacerItem *horizontalSpacer_18;
    QVBoxLayout *PasswordLayout;
    QSpacerItem *verticalSpacer_14;
    QHBoxLayout *PasswordAndForget_Layout;
    QLabel *password_label;
    QPushButton *Reset_buttom;
    QGridLayout *gridLayout_6;
    QSpacerItem *horizontalSpacer_15;
    QSpacerItem *horizontalSpacer_14;
    QLineEdit *password;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *ConfirmPassword_Spacer;
    QLabel *password_4;
    QGridLayout *confContainer;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *horizontalSpacer_17;
    QLineEdit *password_3;
    QSpacerItem *Warning2_Spacer;
    QLabel *WrongWarning;
    QSpacerItem *Warning1_Spacer;
    QGridLayout *gridLayout_10;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *Login_User_Button;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *horizontalSpacer_9;
    QWidget *ResetAccount_Page;
    QGridLayout *gridLayout_13;
    QSpacerItem *verticalSpacer_16;
    QGridLayout *gridLayout_12;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *horizontalSpacer_29;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_3;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout_11;
    QPushButton *BackLogin_button_2;
    QSpacerItem *horizontalSpacer_26;
    QVBoxLayout *Username_ResetLayout;
    QLabel *OldUsername_Label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_20;
    QLineEdit *username_reset;
    QSpacerItem *horizontalSpacer_21;
    QVBoxLayout *PhoneNumber_ResetLayout;
    QSpacerItem *verticalSpacer_5;
    QLabel *OldPhone_Label;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_23;
    QLineEdit *Phone_reset;
    QSpacerItem *horizontalSpacer_22;
    QVBoxLayout *NewPassword_ResetLayout;
    QSpacerItem *verticalSpacer_3;
    QLabel *NewPass_Label;
    QHBoxLayout *NewPassword_Container;
    QSpacerItem *horizontalSpacer_24;
    QLineEdit *pass_reset;
    QSpacerItem *horizontalSpacer_25;
    QSpacerItem *verticalSpacer_11;
    QLabel *WarningReset_Label;
    QSpacerItem *verticalSpacer_12;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_27;
    QPushButton *Confirm_reset;
    QSpacerItem *horizontalSpacer_28;
    QSpacerItem *horizontalSpacer_30;
    QSpacerItem *verticalSpacer_15;
    QSpacerItem *verticalSpacer_17;

    void setupUi(QMainWindow *MainWindow1)
    {
        if (MainWindow1->objectName().isEmpty())
            MainWindow1->setObjectName("MainWindow1");
        MainWindow1->resize(1064, 987);
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
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setObjectName("gridLayout_4");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        ChooseRegisterType_Page = new QWidget();
        ChooseRegisterType_Page->setObjectName("ChooseRegisterType_Page");
        gridLayout_5 = new QGridLayout(ChooseRegisterType_Page);
        gridLayout_5->setObjectName("gridLayout_5");
        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_5->addItem(verticalSpacer_4, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        groupBox_3 = new QGroupBox(ChooseRegisterType_Page);
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

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 2, 1, 1);


        gridLayout_5->addLayout(gridLayout_3, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        verticalSpacer_13 = new QSpacerItem(20, 107, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_5->addItem(verticalSpacer_13, 2, 1, 1, 1);

        stackedWidget->addWidget(ChooseRegisterType_Page);
        LoginSignup_Page = new QWidget();
        LoginSignup_Page->setObjectName("LoginSignup_Page");
        gridLayout_9 = new QGridLayout(LoginSignup_Page);
        gridLayout_9->setObjectName("gridLayout_9");
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName("gridLayout_8");
        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_8->addItem(verticalSpacer_6, 0, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_8, 1, 0, 1, 1);

        MiddleBox = new QGroupBox(LoginSignup_Page);
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
"	height: 50px;\n"
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
        verticalLayout_7 = new QVBoxLayout(LoginFormGroup);
        verticalLayout_7->setObjectName("verticalLayout_7");
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
"	color: rgb(36, 36, 36);\n"
"	Background: rgba(0, 0, 0, 0);\n"
"}"));
        BackLogin_button->setIconSize(QSize(12, 9));

        gridLayout_7->addWidget(BackLogin_button, 0, 0, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_11, 0, 1, 1, 1);


        verticalLayout_7->addLayout(gridLayout_7);

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
        gridLayout->setHorizontalSpacing(0);
        horizontalSpacer_13 = new QSpacerItem(35, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_13, 0, 0, 1, 1);

        username = new QLineEdit(LoginFormGroup);
        username->setObjectName("username");

        gridLayout->addWidget(username, 0, 1, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(35, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_12, 0, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);


        verticalLayout_7->addLayout(gridLayout_2);

        PhoneNumber_Layout = new QVBoxLayout();
        PhoneNumber_Layout->setObjectName("PhoneNumber_Layout");
        PhoneNumber_Spacer = new QSpacerItem(10, 15, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        PhoneNumber_Layout->addItem(PhoneNumber_Spacer);

        phone_number_label = new QLabel(LoginFormGroup);
        phone_number_label->setObjectName("phone_number_label");
        phone_number_label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        PhoneNumber_Layout->addWidget(phone_number_label);

        PhoneNumber_Container = new QHBoxLayout();
        PhoneNumber_Container->setSpacing(0);
        PhoneNumber_Container->setObjectName("PhoneNumber_Container");
        horizontalSpacer_19 = new QSpacerItem(35, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        PhoneNumber_Container->addItem(horizontalSpacer_19);

        phone_number = new QLineEdit(LoginFormGroup);
        phone_number->setObjectName("phone_number");
        phone_number->setEchoMode(QLineEdit::EchoMode::Normal);

        PhoneNumber_Container->addWidget(phone_number);

        horizontalSpacer_18 = new QSpacerItem(35, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        PhoneNumber_Container->addItem(horizontalSpacer_18);


        PhoneNumber_Layout->addLayout(PhoneNumber_Container);


        verticalLayout_7->addLayout(PhoneNumber_Layout);

        PasswordLayout = new QVBoxLayout();
        PasswordLayout->setObjectName("PasswordLayout");
        verticalSpacer_14 = new QSpacerItem(10, 15, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        PasswordLayout->addItem(verticalSpacer_14);

        PasswordAndForget_Layout = new QHBoxLayout();
        PasswordAndForget_Layout->setObjectName("PasswordAndForget_Layout");
        password_label = new QLabel(LoginFormGroup);
        password_label->setObjectName("password_label");
        password_label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	colour: black;\n"
"}"));
        password_label->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        PasswordAndForget_Layout->addWidget(password_label);

        Reset_buttom = new QPushButton(LoginFormGroup);
        Reset_buttom->setObjectName("Reset_buttom");
        Reset_buttom->setEnabled(true);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Montserrat")});
        font3.setPointSize(10);
        font3.setWeight(QFont::Light);
        font3.setItalic(false);
        font3.setUnderline(true);
        font3.setStrikeOut(false);
        Reset_buttom->setFont(font3);
        Reset_buttom->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        Reset_buttom->setStyleSheet(QString::fromUtf8("QPushButton#Reset_buttom\n"
"{\n"
"	text-align: left;\n"
"	padding: 2px;\n"
"	font: 300 10pt \"Montserrat\";\n"
"	color: rgb(0, 150, 255);\n"
"	background-color: rgba(0, 0, 0, 0);\n"
"}\n"
"\n"
"QPushButton#Reset_buttom:hover\n"
"{\n"
"	text-align: left;\n"
"	padding: 2px;\n"
"	font: 300 10pt \"Montserrat\";\n"
"	background-color: rgb(0, 0, 0, 0);\n"
"	color:rgb(1, 117, 195);\n"
"}\n"
"\n"
"QPushButton#Reset_buttom:pressed\n"
"{\n"
"	text-align: left;\n"
"	padding: 2px;\n"
"	font: 300 10pt \"Montserrat\";\n"
"	background-color: rgb(0, 0, 0, 0);\n"
"	color: rgb(0, 76, 127);\n"
"}"));

        PasswordAndForget_Layout->addWidget(Reset_buttom);


        PasswordLayout->addLayout(PasswordAndForget_Layout);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setHorizontalSpacing(0);
        horizontalSpacer_15 = new QSpacerItem(35, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_15, 1, 0, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(35, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_14, 1, 4, 1, 1);

        password = new QLineEdit(LoginFormGroup);
        password->setObjectName("password");
        password->setEchoMode(QLineEdit::EchoMode::Password);

        gridLayout_6->addWidget(password, 1, 2, 1, 1);


        PasswordLayout->addLayout(gridLayout_6);


        verticalLayout_7->addLayout(PasswordLayout);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        ConfirmPassword_Spacer = new QSpacerItem(13, 15, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        verticalLayout_5->addItem(ConfirmPassword_Spacer);

        password_4 = new QLabel(LoginFormGroup);
        password_4->setObjectName("password_4");
        password_4->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        password_4->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	colour: black;\n"
"}"));
        password_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(password_4);

        confContainer = new QGridLayout();
        confContainer->setObjectName("confContainer");
        confContainer->setHorizontalSpacing(0);
        horizontalSpacer_16 = new QSpacerItem(35, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        confContainer->addItem(horizontalSpacer_16, 1, 4, 1, 1);

        horizontalSpacer_17 = new QSpacerItem(35, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        confContainer->addItem(horizontalSpacer_17, 1, 0, 1, 1);

        password_3 = new QLineEdit(LoginFormGroup);
        password_3->setObjectName("password_3");
        password_3->setEchoMode(QLineEdit::EchoMode::Password);

        confContainer->addWidget(password_3, 1, 2, 1, 1);


        verticalLayout_5->addLayout(confContainer);


        verticalLayout_7->addLayout(verticalLayout_5);

        Warning2_Spacer = new QSpacerItem(5, 5, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        verticalLayout_7->addItem(Warning2_Spacer);

        WrongWarning = new QLabel(LoginFormGroup);
        WrongWarning->setObjectName("WrongWarning");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Segoe UI")});
        font4.setPointSize(9);
        font4.setBold(false);
        font4.setItalic(false);
        WrongWarning->setFont(font4);
        WrongWarning->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"font: 9pt \"Segoe UI\";"));
        WrongWarning->setLineWidth(1);
        WrongWarning->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_7->addWidget(WrongWarning);

        Warning1_Spacer = new QSpacerItem(5, 5, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_7->addItem(Warning1_Spacer);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName("gridLayout_10");
        horizontalSpacer_6 = new QSpacerItem(137, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_6, 0, 0, 1, 1);

        Login_User_Button = new QPushButton(LoginFormGroup);
        Login_User_Button->setObjectName("Login_User_Button");

        gridLayout_10->addWidget(Login_User_Button, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(136, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_5, 0, 2, 1, 1);


        verticalLayout_7->addLayout(gridLayout_10);


        verticalLayout->addWidget(LoginFormGroup);


        gridLayout_8->addWidget(MiddleBox, 1, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_7, 1, 2, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_8->addItem(verticalSpacer_7, 2, 1, 1, 1);


        gridLayout_9->addLayout(gridLayout_8, 1, 1, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(173, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_10, 1, 2, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 12, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_9->addItem(verticalSpacer_8, 3, 1, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 12, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_9->addItem(verticalSpacer_9, 0, 1, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(173, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_9, 1, 0, 1, 1);

        stackedWidget->addWidget(LoginSignup_Page);
        ResetAccount_Page = new QWidget();
        ResetAccount_Page->setObjectName("ResetAccount_Page");
        gridLayout_13 = new QGridLayout(ResetAccount_Page);
        gridLayout_13->setObjectName("gridLayout_13");
        verticalSpacer_16 = new QSpacerItem(20, 111, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_13->addItem(verticalSpacer_16, 0, 1, 1, 1);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName("gridLayout_12");
        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_12->addItem(verticalSpacer_10, 0, 1, 1, 1);

        horizontalSpacer_29 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_29, 1, 0, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_3 = new QLabel(ResetAccount_Page);
        label_3->setObjectName("label_3");
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/Logic/Graphics/Ready/Login Graphic.png")));
        label_3->setScaledContents(true);

        verticalLayout_6->addWidget(label_3);

        groupBox_2 = new QGroupBox(ResetAccount_Page);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"	color: white;\n"
"	Background-color: White;\n"
"	border-bottom-left-radius: 10px;\n"
"	border-bottom-right-radius: 10px;\n"
"	height: 50px;\n"
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
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(9, 9, 9, 9);
        gridLayout_11 = new QGridLayout();
        gridLayout_11->setObjectName("gridLayout_11");
        BackLogin_button_2 = new QPushButton(groupBox_2);
        BackLogin_button_2->setObjectName("BackLogin_button_2");
        BackLogin_button_2->setStyleSheet(QString::fromUtf8("QPushButton#BackLogin_button_2\n"
"{\n"
"	font: 300 13pt \"Montserrat\";\n"
"	color: grey;\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"}\n"
"\n"
"QPushButton#BackLogin_button_2:hover\n"
"{\n"
"	font: 300 13pt \"Montserrat\";\n"
"	color: rgb(90, 90, 90);\n"
"	Background: rgba(0, 0, 0, 0);\n"
"}\n"
"\n"
"QPushButton#BackLogin_button_2:pressed\n"
"{\n"
"	font: 300 13pt \"Montserrat\";\n"
"	color: rgb(36, 36, 36);\n"
"	Background: rgba(0, 0, 0, 0);\n"
"}"));
        BackLogin_button_2->setIconSize(QSize(12, 9));

        gridLayout_11->addWidget(BackLogin_button_2, 0, 0, 1, 1);

        horizontalSpacer_26 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_26, 0, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout_11);

        Username_ResetLayout = new QVBoxLayout();
        Username_ResetLayout->setObjectName("Username_ResetLayout");
        OldUsername_Label = new QLabel(groupBox_2);
        OldUsername_Label->setObjectName("OldUsername_Label");
        OldUsername_Label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        Username_ResetLayout->addWidget(OldUsername_Label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_20 = new QSpacerItem(35, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_20);

        username_reset = new QLineEdit(groupBox_2);
        username_reset->setObjectName("username_reset");

        horizontalLayout->addWidget(username_reset);

        horizontalSpacer_21 = new QSpacerItem(35, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_21);


        Username_ResetLayout->addLayout(horizontalLayout);


        verticalLayout_4->addLayout(Username_ResetLayout);

        PhoneNumber_ResetLayout = new QVBoxLayout();
        PhoneNumber_ResetLayout->setObjectName("PhoneNumber_ResetLayout");
        verticalSpacer_5 = new QSpacerItem(20, 15, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        PhoneNumber_ResetLayout->addItem(verticalSpacer_5);

        OldPhone_Label = new QLabel(groupBox_2);
        OldPhone_Label->setObjectName("OldPhone_Label");
        OldPhone_Label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        PhoneNumber_ResetLayout->addWidget(OldPhone_Label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_23 = new QSpacerItem(35, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_23);

        Phone_reset = new QLineEdit(groupBox_2);
        Phone_reset->setObjectName("Phone_reset");

        horizontalLayout_2->addWidget(Phone_reset);

        horizontalSpacer_22 = new QSpacerItem(35, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_22);


        PhoneNumber_ResetLayout->addLayout(horizontalLayout_2);


        verticalLayout_4->addLayout(PhoneNumber_ResetLayout);

        NewPassword_ResetLayout = new QVBoxLayout();
        NewPassword_ResetLayout->setObjectName("NewPassword_ResetLayout");
        verticalSpacer_3 = new QSpacerItem(20, 15, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        NewPassword_ResetLayout->addItem(verticalSpacer_3);

        NewPass_Label = new QLabel(groupBox_2);
        NewPass_Label->setObjectName("NewPass_Label");
        NewPass_Label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        NewPassword_ResetLayout->addWidget(NewPass_Label);

        NewPassword_Container = new QHBoxLayout();
        NewPassword_Container->setObjectName("NewPassword_Container");
        horizontalSpacer_24 = new QSpacerItem(35, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        NewPassword_Container->addItem(horizontalSpacer_24);

        pass_reset = new QLineEdit(groupBox_2);
        pass_reset->setObjectName("pass_reset");
        pass_reset->setEchoMode(QLineEdit::EchoMode::Password);

        NewPassword_Container->addWidget(pass_reset);

        horizontalSpacer_25 = new QSpacerItem(35, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        NewPassword_Container->addItem(horizontalSpacer_25);


        NewPassword_ResetLayout->addLayout(NewPassword_Container);


        verticalLayout_4->addLayout(NewPassword_ResetLayout);

        verticalSpacer_11 = new QSpacerItem(20, 5, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        verticalLayout_4->addItem(verticalSpacer_11);

        WarningReset_Label = new QLabel(groupBox_2);
        WarningReset_Label->setObjectName("WarningReset_Label");
        WarningReset_Label->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"font: 9pt \"Segoe UI\";"));
        WarningReset_Label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(WarningReset_Label);

        verticalSpacer_12 = new QSpacerItem(20, 5, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        verticalLayout_4->addItem(verticalSpacer_12);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_27 = new QSpacerItem(137, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_27);

        Confirm_reset = new QPushButton(groupBox_2);
        Confirm_reset->setObjectName("Confirm_reset");
        Confirm_reset->setStyleSheet(QString::fromUtf8("QPushButton\n"
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

        horizontalLayout_3->addWidget(Confirm_reset);

        horizontalSpacer_28 = new QSpacerItem(136, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_28);


        verticalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_6->addWidget(groupBox_2);


        gridLayout_12->addLayout(verticalLayout_6, 1, 1, 1, 1);

        horizontalSpacer_30 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_30, 1, 2, 1, 1);

        verticalSpacer_15 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_12->addItem(verticalSpacer_15, 2, 1, 1, 1);


        gridLayout_13->addLayout(gridLayout_12, 1, 1, 2, 1);

        verticalSpacer_17 = new QSpacerItem(20, 110, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_13->addItem(verticalSpacer_17, 3, 1, 1, 1);

        stackedWidget->addWidget(ResetAccount_Page);

        gridLayout_4->addWidget(stackedWidget, 1, 0, 1, 1);

        MainWindow1->setCentralWidget(centralwidget);

        retranslateUi(MainWindow1);

        stackedWidget->setCurrentIndex(1);


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
        MiddleBox->setTitle(QString());
        label_2->setText(QString());
        LoginFormGroup->setTitle(QString());
        BackLogin_button->setText(QCoreApplication::translate("MainWindow1", "< Back", nullptr));
        username_2->setText(QCoreApplication::translate("MainWindow1", "Username", nullptr));
        phone_number_label->setText(QCoreApplication::translate("MainWindow1", "Phone Number", nullptr));
        password_label->setText(QCoreApplication::translate("MainWindow1", "Password", nullptr));
        Reset_buttom->setText(QCoreApplication::translate("MainWindow1", "Forgot Password?", nullptr));
        password_4->setText(QCoreApplication::translate("MainWindow1", "Confirm Password", nullptr));
        WrongWarning->setText(QCoreApplication::translate("MainWindow1", "Wrong Username or Password !", nullptr));
        Login_User_Button->setText(QCoreApplication::translate("MainWindow1", "Log In", nullptr));
        label_3->setText(QString());
        groupBox_2->setTitle(QString());
        BackLogin_button_2->setText(QCoreApplication::translate("MainWindow1", "< Back", nullptr));
        OldUsername_Label->setText(QCoreApplication::translate("MainWindow1", "Old Username", nullptr));
        OldPhone_Label->setText(QCoreApplication::translate("MainWindow1", "Old Phone Number", nullptr));
        NewPass_Label->setText(QCoreApplication::translate("MainWindow1", "New Password", nullptr));
        WarningReset_Label->setText(QCoreApplication::translate("MainWindow1", "Wrong username or Phone ", nullptr));
        Confirm_reset->setText(QCoreApplication::translate("MainWindow1", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow1: public Ui_MainWindow1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW1_H
