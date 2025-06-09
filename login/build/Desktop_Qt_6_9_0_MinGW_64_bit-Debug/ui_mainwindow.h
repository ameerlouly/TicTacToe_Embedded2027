/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_4;
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
    QGridLayout *gridLayout;
    QLineEdit *username;
    QLabel *username_2;
    QSpacerItem *verticalSpacer_5;
    QGridLayout *gridLayout_6;
    QLabel *password_2;
    QLineEdit *password;
    QGridLayout *gridLayout_10;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *horizontalSpacer_10;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(933, 655);
        QFont font;
        font.setBold(false);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow\n"
"{\n"
"	border-image: url(:/Logic/Graphics/Ready/Login Background.png) 0 0 0 0 stretch stretch;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setObjectName("gridLayout_4");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
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
        Login_Button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 300 20pt \"Montserrat\";\n"
"	Background: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0.2, stop:0 rgba(22, 45, 211, 255), stop:1 rgba(17, 180, 237, 255));\n"
"	Border-radius: 10px;\n"
"	height: 40px\n"
"}"));

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
"	Border-radius: 10px;\n"
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
"	\n"
"	border-color: Green;\n"
"}"));
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
"}"));
        BackLogin_button->setIconSize(QSize(12, 9));

        gridLayout_7->addWidget(BackLogin_button, 0, 0, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_11, 0, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout_7);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        username = new QLineEdit(LoginFormGroup);
        username->setObjectName("username");

        gridLayout->addWidget(username, 2, 0, 1, 1);

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

        gridLayout->addWidget(username_2, 0, 0, 1, 1);


        verticalLayout_4->addLayout(gridLayout);

        verticalSpacer_5 = new QSpacerItem(10, 22, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        verticalLayout_4->addItem(verticalSpacer_5);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName("gridLayout_6");
        password_2 = new QLabel(LoginFormGroup);
        password_2->setObjectName("password_2");
        password_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	colour: black;\n"
"}"));
        password_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_6->addWidget(password_2, 0, 0, 1, 1);

        password = new QLineEdit(LoginFormGroup);
        password->setObjectName("password");
        password->setEchoMode(QLineEdit::EchoMode::Password);

        gridLayout_6->addWidget(password, 1, 0, 1, 1);


        verticalLayout_4->addLayout(gridLayout_6);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName("gridLayout_10");
        horizontalSpacer_6 = new QSpacerItem(137, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_6, 0, 0, 1, 1);

        pushButton = new QPushButton(LoginFormGroup);
        pushButton->setObjectName("pushButton");

        gridLayout_10->addWidget(pushButton, 0, 1, 1, 1);

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

        verticalSpacer_8 = new QSpacerItem(20, 12, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_9->addItem(verticalSpacer_8, 2, 1, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(173, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_9, 1, 0, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 12, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_9->addItem(verticalSpacer_9, 0, 1, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(173, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_10, 1, 2, 1, 1);

        stackedWidget->addWidget(page2);

        gridLayout_4->addWidget(stackedWidget, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 933, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox_3->setTitle(QString());
        label->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "sign in ", nullptr));
        Login_Button->setText(QCoreApplication::translate("MainWindow", "Log In", nullptr));
        Signup_Button->setText(QCoreApplication::translate("MainWindow", "Sign up", nullptr));
        Guest_Button->setText(QCoreApplication::translate("MainWindow", "Continue as a Guest", nullptr));
        MiddleBox->setTitle(QString());
        label_2->setText(QString());
        LoginFormGroup->setTitle(QString());
        BackLogin_button->setText(QCoreApplication::translate("MainWindow", "< Back", nullptr));
        username_2->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        password_2->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Log In", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
