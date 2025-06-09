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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *PvP_Button;
    QPushButton *PvAI_Button;
    QPushButton *normal_Button;
    QPushButton *infinite_Button;
    QPushButton *grid0;
    QPushButton *grid1;
    QPushButton *grid2;
    QPushButton *grid3;
    QPushButton *grid5;
    QPushButton *grid4;
    QPushButton *grid6;
    QPushButton *grid8;
    QPushButton *grid7;
    QPushButton *showHistory;
    QPushButton *rematch;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        PvP_Button = new QPushButton(centralwidget);
        PvP_Button->setObjectName("PvP_Button");
        PvP_Button->setEnabled(true);
        PvP_Button->setGeometry(QRect(320, 110, 161, 81));
        PvP_Button->setAutoDefault(false);
        PvP_Button->setFlat(false);
        PvAI_Button = new QPushButton(centralwidget);
        PvAI_Button->setObjectName("PvAI_Button");
        PvAI_Button->setEnabled(true);
        PvAI_Button->setGeometry(QRect(320, 240, 161, 81));
        normal_Button = new QPushButton(centralwidget);
        normal_Button->setObjectName("normal_Button");
        normal_Button->setEnabled(true);
        normal_Button->setGeometry(QRect(320, 110, 161, 81));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        normal_Button->setFont(font);
        normal_Button->setAutoDefault(false);
        normal_Button->setFlat(false);
        infinite_Button = new QPushButton(centralwidget);
        infinite_Button->setObjectName("infinite_Button");
        infinite_Button->setEnabled(true);
        infinite_Button->setGeometry(QRect(320, 240, 161, 81));
        infinite_Button->setFont(font);
        grid0 = new QPushButton(centralwidget);
        grid0->setObjectName("grid0");
        grid0->setEnabled(true);
        grid0->setGeometry(QRect(220, 60, 100, 100));
        QFont font1;
        font1.setPointSize(30);
        font1.setBold(true);
        font1.setUnderline(false);
        grid0->setFont(font1);
        grid0->setAutoFillBackground(false);
        grid0->setCheckable(false);
        grid0->setAutoDefault(false);
        grid0->setFlat(false);
        grid1 = new QPushButton(centralwidget);
        grid1->setObjectName("grid1");
        grid1->setEnabled(true);
        grid1->setGeometry(QRect(330, 60, 100, 100));
        QFont font2;
        font2.setPointSize(30);
        font2.setBold(true);
        grid1->setFont(font2);
        grid1->setAutoDefault(false);
        grid1->setFlat(false);
        grid2 = new QPushButton(centralwidget);
        grid2->setObjectName("grid2");
        grid2->setEnabled(true);
        grid2->setGeometry(QRect(440, 60, 100, 100));
        grid2->setFont(font2);
        grid2->setAutoDefault(false);
        grid2->setFlat(false);
        grid3 = new QPushButton(centralwidget);
        grid3->setObjectName("grid3");
        grid3->setEnabled(true);
        grid3->setGeometry(QRect(220, 170, 100, 100));
        grid3->setFont(font2);
        grid3->setAutoDefault(false);
        grid3->setFlat(false);
        grid5 = new QPushButton(centralwidget);
        grid5->setObjectName("grid5");
        grid5->setEnabled(true);
        grid5->setGeometry(QRect(440, 170, 100, 100));
        grid5->setFont(font2);
        grid5->setAutoDefault(false);
        grid5->setFlat(false);
        grid4 = new QPushButton(centralwidget);
        grid4->setObjectName("grid4");
        grid4->setEnabled(true);
        grid4->setGeometry(QRect(330, 170, 100, 100));
        grid4->setFont(font2);
        grid4->setAutoDefault(false);
        grid4->setFlat(false);
        grid6 = new QPushButton(centralwidget);
        grid6->setObjectName("grid6");
        grid6->setEnabled(true);
        grid6->setGeometry(QRect(220, 280, 100, 100));
        grid6->setFont(font2);
        grid6->setAutoDefault(false);
        grid6->setFlat(false);
        grid8 = new QPushButton(centralwidget);
        grid8->setObjectName("grid8");
        grid8->setEnabled(true);
        grid8->setGeometry(QRect(440, 280, 100, 100));
        grid8->setFont(font2);
        grid8->setAutoDefault(false);
        grid8->setFlat(false);
        grid7 = new QPushButton(centralwidget);
        grid7->setObjectName("grid7");
        grid7->setEnabled(true);
        grid7->setGeometry(QRect(330, 280, 100, 100));
        grid7->setFont(font2);
        grid7->setAutoDefault(false);
        grid7->setFlat(false);
        showHistory = new QPushButton(centralwidget);
        showHistory->setObjectName("showHistory");
        showHistory->setEnabled(true);
        showHistory->setGeometry(QRect(220, 390, 201, 81));
        QFont font3;
        font3.setPointSize(15);
        font3.setBold(true);
        showHistory->setFont(font3);
        rematch = new QPushButton(centralwidget);
        rematch->setObjectName("rematch");
        rematch->setEnabled(true);
        rematch->setGeometry(QRect(440, 390, 100, 81));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        rematch->setFont(font4);
        rematch->setAutoDefault(false);
        rematch->setFlat(false);
        MainWindow->setCentralWidget(centralwidget);
        grid0->raise();
        grid1->raise();
        grid2->raise();
        grid3->raise();
        grid5->raise();
        grid4->raise();
        grid6->raise();
        grid8->raise();
        grid7->raise();
        showHistory->raise();
        rematch->raise();
        PvAI_Button->raise();
        PvP_Button->raise();
        infinite_Button->raise();
        normal_Button->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        PvP_Button->setDefault(false);
        normal_Button->setDefault(false);
        grid0->setDefault(false);
        grid1->setDefault(false);
        grid2->setDefault(false);
        grid3->setDefault(false);
        grid5->setDefault(false);
        grid4->setDefault(false);
        grid6->setDefault(false);
        grid8->setDefault(false);
        grid7->setDefault(false);
        rematch->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        PvP_Button->setText(QCoreApplication::translate("MainWindow", "PvP", nullptr));
        PvAI_Button->setText(QCoreApplication::translate("MainWindow", "PvAI", nullptr));
        normal_Button->setText(QCoreApplication::translate("MainWindow", "Normal", nullptr));
        infinite_Button->setText(QCoreApplication::translate("MainWindow", "Infinite", nullptr));
        grid0->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        grid1->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        grid2->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        grid3->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        grid5->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        grid4->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        grid6->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        grid8->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        grid7->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        showHistory->setText(QCoreApplication::translate("MainWindow", "Review game", nullptr));
        rematch->setText(QCoreApplication::translate("MainWindow", "Re-Match", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
