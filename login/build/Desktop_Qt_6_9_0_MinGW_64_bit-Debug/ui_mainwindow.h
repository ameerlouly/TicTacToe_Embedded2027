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
    QGroupBox *groupBox_2;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *username;
    QLabel *username_2;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *forgotlabel;
    QLabel *password_2;
    QLineEdit *password;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(866, 631);
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
        horizontalSpacer_4 = new QSpacerItem(139, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_5->addItem(verticalSpacer_3, 2, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(140, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

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
"}"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(12);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(20, 20, 20, 20);
        Login_Button = new QPushButton(groupBox);
        Login_Button->setObjectName("Login_Button");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Montserrat")});
        font1.setPointSize(15);
        font1.setBold(false);
        font1.setItalic(false);
        Login_Button->setFont(font1);
        Login_Button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 15pt \"Montserrat\";\n"
"	Background: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0.2, stop:0 rgba(22, 45, 211, 255), stop:1 rgba(17, 180, 237, 255));\n"
"	Border-radius: 10px;\n"
"	height: 40px\n"
"}"));

        verticalLayout_2->addWidget(Login_Button);

        Signup_Button = new QPushButton(groupBox);
        Signup_Button->setObjectName("Signup_Button");
        Signup_Button->setFont(font1);
        Signup_Button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 15pt \"Montserrat\";\n"
"	Background: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0.2, stop:0 rgba(22, 45, 211, 255), stop:1 rgba(17, 180, 237, 255));\n"
"	Border-radius: 10px;\n"
"	height: 40px\n"
"}"));

        verticalLayout_2->addWidget(Signup_Button);

        Guest_Button = new QPushButton(groupBox);
        Guest_Button->setObjectName("Guest_Button");
        Guest_Button->setFont(font1);
        Guest_Button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 15pt \"Montserrat\";\n"
"	Background: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0.2, stop:0 rgba(22, 45, 211, 255), stop:1 rgba(17, 180, 237, 255));\n"
"	Border-radius: 10px;\n"
"	height: 40px\n"
"}"));

        verticalLayout_2->addWidget(Guest_Button);


        verticalLayout_3->addWidget(groupBox);


        gridLayout_3->addWidget(groupBox_3, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 2, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_3, 1, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_5->addItem(verticalSpacer_4, 0, 1, 1, 1);

        stackedWidget->addWidget(page1);
        page2 = new QWidget();
        page2->setObjectName("page2");
        groupBox_2 = new QGroupBox(page2);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(90, 40, 651, 441));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(90, 170, 481, 55));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        username = new QLineEdit(layoutWidget);
        username->setObjectName("username");

        gridLayout->addWidget(username, 2, 0, 1, 1);

        username_2 = new QLabel(layoutWidget);
        username_2->setObjectName("username_2");
        username_2->setFont(font);
        username_2->setLineWidth(1);
        username_2->setMidLineWidth(0);
        username_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        username_2->setOpenExternalLinks(false);

        gridLayout->addWidget(username_2, 0, 0, 1, 1);

        layoutWidget_2 = new QWidget(groupBox_2);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(90, 230, 481, 82));
        gridLayout_2 = new QGridLayout(layoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        forgotlabel = new QLabel(layoutWidget_2);
        forgotlabel->setObjectName("forgotlabel");
        forgotlabel->setFrameShape(QFrame::Shape::NoFrame);
        forgotlabel->setFrameShadow(QFrame::Shadow::Plain);
        forgotlabel->setTextFormat(Qt::TextFormat::RichText);

        gridLayout_2->addWidget(forgotlabel, 0, 1, 1, 1);

        password_2 = new QLabel(layoutWidget_2);
        password_2->setObjectName("password_2");
        password_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout_2->addWidget(password_2, 0, 0, 1, 1);

        password = new QLineEdit(layoutWidget_2);
        password->setObjectName("password");
        password->setEchoMode(QLineEdit::EchoMode::Password);

        gridLayout_2->addWidget(password, 1, 0, 1, 2);

        stackedWidget->addWidget(page2);

        gridLayout_4->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 866, 21));
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
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "sign in ", nullptr));
        username_2->setText(QCoreApplication::translate("MainWindow", "Username or Email", nullptr));
        forgotlabel->setText(QCoreApplication::translate("MainWindow", "<a href=\"#\">Forgot?</a>", nullptr));
        password_2->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
