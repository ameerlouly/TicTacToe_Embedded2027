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
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page_1;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QPushButton *LOGIN;
    QPushButton *Signup;
    QPushButton *continueasaguest;
    QWidget *page_5;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *username;
    QLabel *username_2;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *forgotlabel;
    QLineEdit *password;
    QLabel *password_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        page_1 = new QWidget();
        page_1->setObjectName("page_1");
        groupBox = new QGroupBox(page_1);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(140, 40, 401, 351));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        LOGIN = new QPushButton(groupBox);
        LOGIN->setObjectName("LOGIN");
        QFont font;
        font.setPointSize(14);
        LOGIN->setFont(font);
        LOGIN->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(LOGIN);

        Signup = new QPushButton(groupBox);
        Signup->setObjectName("Signup");
        Signup->setFont(font);

        verticalLayout_2->addWidget(Signup);

        continueasaguest = new QPushButton(groupBox);
        continueasaguest->setObjectName("continueasaguest");
        continueasaguest->setFont(font);

        verticalLayout_2->addWidget(continueasaguest);

        stackedWidget->addWidget(page_1);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        groupBox_2 = new QGroupBox(page_5);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(40, 10, 651, 441));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(130, 60, 481, 55));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        username = new QLineEdit(layoutWidget);
        username->setObjectName("username");

        gridLayout->addWidget(username, 2, 0, 1, 1);

        username_2 = new QLabel(layoutWidget);
        username_2->setObjectName("username_2");
        username_2->setLineWidth(1);
        username_2->setMidLineWidth(0);
        username_2->setOpenExternalLinks(false);

        gridLayout->addWidget(username_2, 1, 0, 1, 1);

        layoutWidget_2 = new QWidget(groupBox_2);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(130, 130, 481, 82));
        gridLayout_2 = new QGridLayout(layoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        forgotlabel = new QLabel(layoutWidget_2);
        forgotlabel->setObjectName("forgotlabel");
        forgotlabel->setFrameShape(QFrame::Shape::NoFrame);
        forgotlabel->setFrameShadow(QFrame::Shadow::Plain);
        forgotlabel->setTextFormat(Qt::TextFormat::RichText);

        gridLayout_2->addWidget(forgotlabel, 0, 1, 1, 1);

        password = new QLineEdit(layoutWidget_2);
        password->setObjectName("password");
        password->setEchoMode(QLineEdit::EchoMode::Password);

        gridLayout_2->addWidget(password, 1, 0, 1, 2);

        password_2 = new QLabel(layoutWidget_2);
        password_2->setObjectName("password_2");

        gridLayout_2->addWidget(password_2, 0, 0, 1, 1);

        stackedWidget->addWidget(page_5);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
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
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "sign in ", nullptr));
        LOGIN->setText(QCoreApplication::translate("MainWindow", "LOG IN", nullptr));
        Signup->setText(QCoreApplication::translate("MainWindow", "Sign up", nullptr));
        continueasaguest->setText(QCoreApplication::translate("MainWindow", "continue as a guest", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "sign in ", nullptr));
        username_2->setText(QCoreApplication::translate("MainWindow", "                                   Username or Email", nullptr));
        forgotlabel->setText(QCoreApplication::translate("MainWindow", "<a href=\"#\">Forgot?</a>", nullptr));
        password_2->setText(QCoreApplication::translate("MainWindow", "                            password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
