/********************************************************************************
** Form generated from reading UI file 'secdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECDIALOG_H
#define UI_SECDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecDialog
{
public:
    QGroupBox *groupBox;
    QPushButton *profile;
    QPushButton *home;
    QPushButton *history;
    QPushButton *settings;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *page_2;
    QPushButton *startgame;
    QWidget *page_3;
    QPushButton *PVP;
    QPushButton *pushButton_3;

    void setupUi(QDialog *SecDialog)
    {
        if (SecDialog->objectName().isEmpty())
            SecDialog->setObjectName("SecDialog");
        SecDialog->resize(731, 459);
        groupBox = new QGroupBox(SecDialog);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 0, 121, 451));
        profile = new QPushButton(groupBox);
        profile->setObjectName("profile");
        profile->setGeometry(QRect(10, 80, 93, 29));
        profile->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:10px;\n"
"background-color:white;\n"
"\n"
"}"));
        home = new QPushButton(groupBox);
        home->setObjectName("home");
        home->setGeometry(QRect(10, 150, 93, 29));
        home->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:10px;\n"
"background-color:white;\n"
"\n"
"}"));
        history = new QPushButton(groupBox);
        history->setObjectName("history");
        history->setGeometry(QRect(10, 220, 93, 29));
        history->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:10px;\n"
"background-color:white;\n"
"\n"
"}"));
        settings = new QPushButton(groupBox);
        settings->setObjectName("settings");
        settings->setGeometry(QRect(10, 400, 93, 29));
        settings->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:10px;\n"
"background-color:white;\n"
"\n"
"}"));
        stackedWidget = new QStackedWidget(SecDialog);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(130, 10, 591, 441));
        page = new QWidget();
        page->setObjectName("page");
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 20, 63, 20));
        label_2 = new QLabel(page);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(240, 20, 63, 20));
        label_3 = new QLabel(page);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(360, 20, 63, 20));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        startgame = new QPushButton(page_2);
        startgame->setObjectName("startgame");
        startgame->setGeometry(QRect(50, 200, 441, 91));
        startgame->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"background-color:white;\n"
"border-color:black;\n"
"\n"
"}"));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        PVP = new QPushButton(page_3);
        PVP->setObjectName("PVP");
        PVP->setGeometry(QRect(80, 218, 131, 51));
        PVP->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"background-color:white;\n"
"\n"
"}"));
        pushButton_3 = new QPushButton(page_3);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(330, 220, 131, 51));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"background-color:white;\n"
"\n"
"}"));
        stackedWidget->addWidget(page_3);

        retranslateUi(SecDialog);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(SecDialog);
    } // setupUi

    void retranslateUi(QDialog *SecDialog)
    {
        SecDialog->setWindowTitle(QCoreApplication::translate("SecDialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SecDialog", "GroupBox", nullptr));
        profile->setText(QCoreApplication::translate("SecDialog", "Profile", nullptr));
        home->setText(QCoreApplication::translate("SecDialog", "Home", nullptr));
        history->setText(QCoreApplication::translate("SecDialog", "History", nullptr));
        settings->setText(QCoreApplication::translate("SecDialog", "Settings", nullptr));
        label->setText(QCoreApplication::translate("SecDialog", "WINS", nullptr));
        label_2->setText(QCoreApplication::translate("SecDialog", "LOSSES", nullptr));
        label_3->setText(QCoreApplication::translate("SecDialog", "DRAWS", nullptr));
        startgame->setText(QCoreApplication::translate("SecDialog", "START GAME", nullptr));
        PVP->setText(QCoreApplication::translate("SecDialog", "PVP", nullptr));
        pushButton_3->setText(QCoreApplication::translate("SecDialog", "PVE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecDialog: public Ui_SecDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECDIALOG_H
