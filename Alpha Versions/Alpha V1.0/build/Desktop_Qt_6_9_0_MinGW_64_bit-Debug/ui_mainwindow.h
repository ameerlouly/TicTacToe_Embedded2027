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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page_0;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *loginModeselect;
    QPushButton *SignupModeSelect;
    QPushButton *gusetModeSelect;
    QWidget *page_1;
    QLineEdit *username_input;
    QLineEdit *passcode_input;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *Login_PushBottom;
    QLabel *wronginput;
    QWidget *page_2;
    QPushButton *grid8;
    QPushButton *PvAI_Button_hard;
    QPushButton *rematch;
    QPushButton *grid1;
    QPushButton *normal_Button;
    QPushButton *grid0;
    QPushButton *showHistory;
    QPushButton *PvAI_Button_Normal;
    QPushButton *PvAI_Button_easy;
    QPushButton *grid6;
    QPushButton *PvP_Button;
    QPushButton *grid7;
    QPushButton *infinite_Button;
    QPushButton *PvAI_Button;
    QPushButton *grid3;
    QPushButton *grid4;
    QPushButton *grid2;
    QPushButton *grid5;
    QLabel *gameResut;
    QPushButton *ShowResults;
    QWidget *page_3;
    QLabel *label_6;
    QTableWidget *tableWidget_history;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(758, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 751, 511));
        page_0 = new QWidget();
        page_0->setObjectName("page_0");
        label_4 = new QLabel(page_0);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(160, 30, 481, 101));
        QFont font;
        font.setPointSize(27);
        font.setWeight(QFont::Black);
        label_4->setFont(font);
        label_5 = new QLabel(page_0);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(200, 130, 361, 81));
        QFont font1;
        font1.setPointSize(18);
        font1.setWeight(QFont::Black);
        label_5->setFont(font1);
        loginModeselect = new QPushButton(page_0);
        loginModeselect->setObjectName("loginModeselect");
        loginModeselect->setGeometry(QRect(290, 220, 131, 51));
        QFont font2;
        font2.setPointSize(15);
        font2.setWeight(QFont::ExtraBold);
        loginModeselect->setFont(font2);
        SignupModeSelect = new QPushButton(page_0);
        SignupModeSelect->setObjectName("SignupModeSelect");
        SignupModeSelect->setGeometry(QRect(290, 290, 131, 51));
        SignupModeSelect->setFont(font2);
        gusetModeSelect = new QPushButton(page_0);
        gusetModeSelect->setObjectName("gusetModeSelect");
        gusetModeSelect->setGeometry(QRect(290, 360, 131, 51));
        gusetModeSelect->setFont(font2);
        stackedWidget->addWidget(page_0);
        page_1 = new QWidget();
        page_1->setObjectName("page_1");
        username_input = new QLineEdit(page_1);
        username_input->setObjectName("username_input");
        username_input->setGeometry(QRect(210, 190, 331, 41));
        passcode_input = new QLineEdit(page_1);
        passcode_input->setObjectName("passcode_input");
        passcode_input->setGeometry(QRect(210, 260, 331, 41));
        passcode_input->setEchoMode(QLineEdit::EchoMode::Password);
        label = new QLabel(page_1);
        label->setObjectName("label");
        label->setGeometry(QRect(280, 70, 211, 81));
        QFont font3;
        font3.setPointSize(21);
        font3.setWeight(QFont::Black);
        label->setFont(font3);
        label_2 = new QLabel(page_1);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(200, 160, 101, 31));
        QFont font4;
        font4.setPointSize(12);
        font4.setWeight(QFont::Black);
        label_2->setFont(font4);
        label_3 = new QLabel(page_1);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(200, 230, 91, 31));
        label_3->setFont(font4);
        Login_PushBottom = new QPushButton(page_1);
        Login_PushBottom->setObjectName("Login_PushBottom");
        Login_PushBottom->setGeometry(QRect(310, 340, 131, 51));
        Login_PushBottom->setFont(font2);
        wronginput = new QLabel(page_1);
        wronginput->setObjectName("wronginput");
        wronginput->setGeometry(QRect(260, 300, 221, 31));
        QFont font5;
        font5.setPointSize(11);
        font5.setWeight(QFont::Black);
        wronginput->setFont(font5);
        stackedWidget->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        grid8 = new QPushButton(page_2);
        grid8->setObjectName("grid8");
        grid8->setEnabled(true);
        grid8->setGeometry(QRect(400, 260, 100, 100));
        QFont font6;
        font6.setPointSize(30);
        font6.setBold(true);
        grid8->setFont(font6);
        grid8->setAutoDefault(false);
        grid8->setFlat(false);
        PvAI_Button_hard = new QPushButton(page_2);
        PvAI_Button_hard->setObjectName("PvAI_Button_hard");
        PvAI_Button_hard->setEnabled(true);
        PvAI_Button_hard->setGeometry(QRect(270, 300, 181, 91));
        QFont font7;
        font7.setPointSize(13);
        font7.setBold(true);
        PvAI_Button_hard->setFont(font7);
        rematch = new QPushButton(page_2);
        rematch->setObjectName("rematch");
        rematch->setEnabled(true);
        rematch->setGeometry(QRect(400, 370, 100, 81));
        QFont font8;
        font8.setPointSize(10);
        font8.setBold(true);
        rematch->setFont(font8);
        rematch->setAutoDefault(false);
        rematch->setFlat(false);
        grid1 = new QPushButton(page_2);
        grid1->setObjectName("grid1");
        grid1->setEnabled(true);
        grid1->setGeometry(QRect(290, 40, 100, 100));
        grid1->setFont(font6);
        grid1->setAutoDefault(false);
        grid1->setFlat(false);
        normal_Button = new QPushButton(page_2);
        normal_Button->setObjectName("normal_Button");
        normal_Button->setEnabled(true);
        normal_Button->setGeometry(QRect(280, 90, 161, 81));
        QFont font9;
        font9.setPointSize(20);
        font9.setBold(true);
        normal_Button->setFont(font9);
        normal_Button->setAutoDefault(false);
        normal_Button->setFlat(false);
        grid0 = new QPushButton(page_2);
        grid0->setObjectName("grid0");
        grid0->setEnabled(true);
        grid0->setGeometry(QRect(180, 40, 100, 100));
        QFont font10;
        font10.setPointSize(30);
        font10.setBold(true);
        font10.setUnderline(false);
        grid0->setFont(font10);
        grid0->setAutoFillBackground(false);
        grid0->setCheckable(false);
        grid0->setAutoDefault(false);
        grid0->setFlat(false);
        showHistory = new QPushButton(page_2);
        showHistory->setObjectName("showHistory");
        showHistory->setEnabled(true);
        showHistory->setGeometry(QRect(180, 370, 201, 81));
        QFont font11;
        font11.setPointSize(15);
        font11.setBold(true);
        showHistory->setFont(font11);
        PvAI_Button_Normal = new QPushButton(page_2);
        PvAI_Button_Normal->setObjectName("PvAI_Button_Normal");
        PvAI_Button_Normal->setEnabled(true);
        PvAI_Button_Normal->setGeometry(QRect(270, 190, 181, 91));
        PvAI_Button_Normal->setFont(font7);
        PvAI_Button_easy = new QPushButton(page_2);
        PvAI_Button_easy->setObjectName("PvAI_Button_easy");
        PvAI_Button_easy->setEnabled(true);
        PvAI_Button_easy->setGeometry(QRect(270, 80, 181, 91));
        PvAI_Button_easy->setFont(font7);
        grid6 = new QPushButton(page_2);
        grid6->setObjectName("grid6");
        grid6->setEnabled(true);
        grid6->setGeometry(QRect(180, 260, 100, 100));
        grid6->setFont(font6);
        grid6->setAutoDefault(false);
        grid6->setFlat(false);
        PvP_Button = new QPushButton(page_2);
        PvP_Button->setObjectName("PvP_Button");
        PvP_Button->setEnabled(true);
        PvP_Button->setGeometry(QRect(280, 90, 161, 81));
        PvP_Button->setFont(font7);
        PvP_Button->setAutoDefault(false);
        PvP_Button->setFlat(false);
        grid7 = new QPushButton(page_2);
        grid7->setObjectName("grid7");
        grid7->setEnabled(true);
        grid7->setGeometry(QRect(290, 260, 100, 100));
        grid7->setFont(font6);
        grid7->setAutoDefault(false);
        grid7->setFlat(false);
        infinite_Button = new QPushButton(page_2);
        infinite_Button->setObjectName("infinite_Button");
        infinite_Button->setEnabled(true);
        infinite_Button->setGeometry(QRect(280, 220, 161, 81));
        infinite_Button->setFont(font9);
        PvAI_Button = new QPushButton(page_2);
        PvAI_Button->setObjectName("PvAI_Button");
        PvAI_Button->setEnabled(true);
        PvAI_Button->setGeometry(QRect(280, 220, 161, 81));
        PvAI_Button->setFont(font7);
        grid3 = new QPushButton(page_2);
        grid3->setObjectName("grid3");
        grid3->setEnabled(true);
        grid3->setGeometry(QRect(180, 150, 100, 100));
        grid3->setFont(font6);
        grid3->setAutoDefault(false);
        grid3->setFlat(false);
        grid4 = new QPushButton(page_2);
        grid4->setObjectName("grid4");
        grid4->setEnabled(true);
        grid4->setGeometry(QRect(290, 150, 100, 100));
        grid4->setFont(font6);
        grid4->setAutoDefault(false);
        grid4->setFlat(false);
        grid2 = new QPushButton(page_2);
        grid2->setObjectName("grid2");
        grid2->setEnabled(true);
        grid2->setGeometry(QRect(400, 40, 100, 100));
        grid2->setFont(font6);
        grid2->setAutoDefault(false);
        grid2->setFlat(false);
        grid5 = new QPushButton(page_2);
        grid5->setObjectName("grid5");
        grid5->setEnabled(true);
        grid5->setGeometry(QRect(400, 150, 100, 100));
        grid5->setFont(font6);
        grid5->setAutoDefault(false);
        grid5->setFlat(false);
        gameResut = new QLabel(page_2);
        gameResut->setObjectName("gameResut");
        gameResut->setGeometry(QRect(180, 190, 351, 101));
        QFont font12;
        font12.setPointSize(19);
        font12.setWeight(QFont::Black);
        font12.setItalic(true);
        font12.setUnderline(true);
        font12.setStrikeOut(false);
        gameResut->setFont(font12);
        ShowResults = new QPushButton(page_2);
        ShowResults->setObjectName("ShowResults");
        ShowResults->setEnabled(true);
        ShowResults->setGeometry(QRect(280, 320, 161, 81));
        ShowResults->setFont(font7);
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        label_6 = new QLabel(page_3);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(210, 30, 371, 91));
        QFont font13;
        font13.setPointSize(22);
        font13.setBold(true);
        font13.setItalic(true);
        label_6->setFont(font13);
        tableWidget_history = new QTableWidget(page_3);
        tableWidget_history->setObjectName("tableWidget_history");
        tableWidget_history->setGeometry(QRect(30, 110, 691, 391));
        stackedWidget->addWidget(page_3);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 758, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);
        grid8->setDefault(false);
        rematch->setDefault(false);
        grid1->setDefault(false);
        normal_Button->setDefault(false);
        grid0->setDefault(false);
        grid6->setDefault(false);
        PvP_Button->setDefault(false);
        grid7->setDefault(false);
        grid3->setDefault(false);
        grid4->setDefault(false);
        grid2->setDefault(false);
        grid5->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "WELCOME TO OUR GAME ", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Please Select a regsiter Mode", nullptr));
        loginModeselect->setText(QCoreApplication::translate("MainWindow", "Login ", nullptr));
        SignupModeSelect->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        gusetModeSelect->setText(QCoreApplication::translate("MainWindow", "Guest ", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Login/Sign Up", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "UserName", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Passcode", nullptr));
        Login_PushBottom->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        wronginput->setText(QCoreApplication::translate("MainWindow", "Wrong pass or usernname !!", nullptr));
        grid8->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        PvAI_Button_hard->setText(QCoreApplication::translate("MainWindow", "Hard", nullptr));
        rematch->setText(QCoreApplication::translate("MainWindow", "Re-Match", nullptr));
        grid1->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        normal_Button->setText(QCoreApplication::translate("MainWindow", "Normal", nullptr));
        grid0->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        showHistory->setText(QCoreApplication::translate("MainWindow", "Review game", nullptr));
        PvAI_Button_Normal->setText(QCoreApplication::translate("MainWindow", "Normal", nullptr));
        PvAI_Button_easy->setText(QCoreApplication::translate("MainWindow", "Easy", nullptr));
        grid6->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        PvP_Button->setText(QCoreApplication::translate("MainWindow", "PvP", nullptr));
        grid7->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        infinite_Button->setText(QCoreApplication::translate("MainWindow", "Infinite", nullptr));
        PvAI_Button->setText(QCoreApplication::translate("MainWindow", "PvAI", nullptr));
        grid3->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        grid4->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        grid2->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        grid5->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        gameResut->setText(QCoreApplication::translate("MainWindow", "Winner Winner ", nullptr));
        ShowResults->setText(QCoreApplication::translate("MainWindow", "Show Results", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "LAST 10 GAME RESULTS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
