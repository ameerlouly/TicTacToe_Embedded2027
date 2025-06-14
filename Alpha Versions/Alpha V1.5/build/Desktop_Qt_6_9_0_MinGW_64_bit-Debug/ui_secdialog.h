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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
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
    QPushButton *PVE;
    QPushButton *back_3;
    QWidget *page_5;
    QPushButton *normal;
    QPushButton *infinite;
    QPushButton *back_2;
    QWidget *page_6;
    QPushButton *easy;
    QPushButton *medium;
    QPushButton *hard;
    QPushButton *back;
    QWidget *page_4;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_9;
    QFrame *line_2;
    QFrame *line_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit;
    QPushButton *pushButton_7;
    QFrame *line_4;
    QPushButton *pushButton_10;
    QFrame *line;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QGroupBox *groupBox_2;

    void setupUi(QDialog *SecDialog)
    {
        if (SecDialog->objectName().isEmpty())
            SecDialog->setObjectName("SecDialog");
        SecDialog->resize(1081, 715);
        SecDialog->setStyleSheet(QString::fromUtf8("QDialog\n"
"{\n"
"	background-color: rgb(230, 230, 230);\n"
"}"));
        groupBox = new QGroupBox(SecDialog);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 0, 121, 701));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(186, 200, 224, 255), stop:1 rgba(106, 133, 182, 255));\n"
"}"));
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
        stackedWidget->setGeometry(QRect(120, 10, 941, 691));
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
        startgame->setGeometry(QRect(240, 240, 441, 91));
        startgame->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-radius:30px;\n"
"	color: white;\n"
"	\n"
"	font: 500 30pt \"Montserrat\";\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0.2, stop:0 rgba(84, 204, 190, 255), stop:1 rgba(164, 227, 207, 255));\n"
"	border-color:black;\n"
"}"));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        PVP = new QPushButton(page_3);
        PVP->setObjectName("PVP");
        PVP->setGeometry(QRect(140, 260, 281, 51));
        PVP->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"background-color:white;\n"
"\n"
"}"));
        PVE = new QPushButton(page_3);
        PVE->setObjectName("PVE");
        PVE->setGeometry(QRect(550, 260, 281, 51));
        PVE->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"background-color:white;\n"
"\n"
"}"));
        back_3 = new QPushButton(page_3);
        back_3->setObjectName("back_3");
        back_3->setGeometry(QRect(10, 0, 93, 29));
        stackedWidget->addWidget(page_3);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        normal = new QPushButton(page_5);
        normal->setObjectName("normal");
        normal->setGeometry(QRect(370, 140, 241, 81));
        normal->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:10px;\n"
"background-color:white;\n"
"\n"
"}"));
        infinite = new QPushButton(page_5);
        infinite->setObjectName("infinite");
        infinite->setGeometry(QRect(370, 300, 241, 81));
        infinite->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:10px;\n"
"background-color:white;\n"
"\n"
"}"));
        back_2 = new QPushButton(page_5);
        back_2->setObjectName("back_2");
        back_2->setGeometry(QRect(20, 0, 93, 29));
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        easy = new QPushButton(page_6);
        easy->setObjectName("easy");
        easy->setGeometry(QRect(310, 80, 251, 81));
        medium = new QPushButton(page_6);
        medium->setObjectName("medium");
        medium->setGeometry(QRect(310, 200, 251, 81));
        hard = new QPushButton(page_6);
        hard->setObjectName("hard");
        hard->setGeometry(QRect(310, 320, 251, 81));
        back = new QPushButton(page_6);
        back->setObjectName("back");
        back->setGeometry(QRect(40, 10, 93, 29));
        stackedWidget->addWidget(page_6);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        pushButton_4 = new QPushButton(page_4);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(170, 490, 201, 131));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border :none;\n"
"color:black;\n"
"	font: 28pt \"Segoe Fluent Icons\";\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"background-color:blue;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color:red;\n"
"}"));
        pushButton_6 = new QPushButton(page_4);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(580, 350, 201, 131));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border :none;\n"
"color:black;\n"
"	font: 28pt \"Segoe Fluent Icons\";\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"background-color:blue;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color:red;\n"
"}"));
        pushButton_9 = new QPushButton(page_4);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(580, 200, 201, 131));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border :none;\n"
"color:black;\n"
"	font: 28pt \"Segoe Fluent Icons\";\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"background-color:blue;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color:red;\n"
"}"));
        line_2 = new QFrame(page_4);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(360, 200, 20, 421));
        line_2->setLineWidth(5);
        line_2->setFrameShape(QFrame::Shape::VLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        line_3 = new QFrame(page_4);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(190, 480, 601, 20));
        line_3->setLineWidth(5);
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        pushButton_8 = new QPushButton(page_4);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(160, 200, 201, 131));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border :none;\n"
"color:black;\n"
"	font: 28pt \"Segoe Fluent Icons\";\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"background-color:blue;\n"
"}\n"
"QPushButton:checked {\n"
"    background-color: red;\n"
"}\n"
""));
        pushButton_5 = new QPushButton(page_4);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(370, 500, 201, 131));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border :none;\n"
"color:black;\n"
"	font: 28pt \"Segoe Fluent Icons\";\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"background-color:blue;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color:red;\n"
"}"));
        pushButton = new QPushButton(page_4);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(372, 350, 201, 131));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border :none;\n"
"color:black;\n"
"	font: 28pt \"Segoe Fluent Icons\";\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"background-color:blue;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color:red;\n"
"}"));
        pushButton_2 = new QPushButton(page_4);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(160, 350, 201, 131));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border :none;\n"
"color:black;\n"
"	font: 28pt \"Segoe Fluent Icons\";\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"background-color:blue;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color:red;\n"
"}\n"
"QPushButton[text=\"O\"] {\n"
"    color: black;\n"
"   \n"
"}\n"
"QPushButton[text=\"X\"] {\n"
"    color: white;\n"
"    }\n"
""));
        textEdit_2 = new QTextEdit(page_4);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(590, 60, 261, 41));
        textEdit_2->setStyleSheet(QString::fromUtf8("QTextEdit\n"
"{\n"
"border :none;\n"
"color:black;\n"
"background-color: rgb(115, 199, 255);\n"
"font: 700 12pt \"Rockwell\";    \n"
" border-radius: 20px;\n"
"}"));
        textEdit = new QTextEdit(page_4);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(80, 60, 261, 41));
        textEdit->setStyleSheet(QString::fromUtf8("QTextEdit\n"
"{\n"
"border :none;\n"
"color:black;\n"
"background-color: rgb(115, 199, 255);\n"
"font: 700 12pt \"Rockwell\";    \n"
" border-radius: 20px;\n"
"}"));
        pushButton_7 = new QPushButton(page_4);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(370, 200, 201, 131));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border :none;\n"
"color:black;\n"
"	font: 28pt \"Segoe Fluent Icons\";\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"background-color:blue;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color:red;\n"
"}"));
        line_4 = new QFrame(page_4);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(180, 330, 611, 20));
        line_4->setLineWidth(5);
        line_4->setFrameShape(QFrame::Shape::HLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);
        pushButton_10 = new QPushButton(page_4);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(580, 490, 201, 131));
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border :none;\n"
"color:black;\n"
"	font: 28pt \"Segoe Fluent Icons\";\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"background-color:blue;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color:red;\n"
"}"));
        line = new QFrame(page_4);
        line->setObjectName("line");
        line->setGeometry(QRect(570, 200, 20, 421));
        line->setLineWidth(5);
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        pushButton_15 = new QPushButton(page_4);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setGeometry(QRect(640, 620, 171, 61));
        pushButton_15->setMaximumSize(QSize(500, 500));
        pushButton_15->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:black;\n"
"background-color: rgb(115, 199, 255);\n"
"font: 700 12pt \"Rockwell\";    \n"
"}"));
        pushButton_16 = new QPushButton(page_4);
        pushButton_16->setObjectName("pushButton_16");
        pushButton_16->setGeometry(QRect(390, 620, 171, 61));
        pushButton_16->setMaximumSize(QSize(500, 500));
        pushButton_16->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:black;\n"
"background-color: rgb(115, 199, 255);\n"
"font: 700 12pt \"Rockwell\";    \n"
"\n"
"}"));
        pushButton_17 = new QPushButton(page_4);
        pushButton_17->setObjectName("pushButton_17");
        pushButton_17->setGeometry(QRect(150, 620, 171, 61));
        pushButton_17->setMaximumSize(QSize(500, 500));
        pushButton_17->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"\n"
"color:black;\n"
"background-color: rgb(115, 199, 255);\n"
"font: 700 12pt \"Rockwell\";    \n"
"}"));
        groupBox_2 = new QGroupBox(page_4);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(160, 170, 651, 441));
        stackedWidget->addWidget(page_4);
        groupBox_2->raise();
        pushButton_4->raise();
        pushButton_6->raise();
        pushButton_9->raise();
        line_2->raise();
        line_3->raise();
        pushButton_8->raise();
        pushButton_5->raise();
        pushButton->raise();
        pushButton_2->raise();
        textEdit_2->raise();
        textEdit->raise();
        pushButton_7->raise();
        line_4->raise();
        pushButton_10->raise();
        line->raise();
        pushButton_15->raise();
        pushButton_16->raise();
        pushButton_17->raise();

        retranslateUi(SecDialog);

        stackedWidget->setCurrentIndex(5);


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
        PVE->setText(QCoreApplication::translate("SecDialog", "PVE", nullptr));
        back_3->setText(QCoreApplication::translate("SecDialog", "back", nullptr));
        normal->setText(QCoreApplication::translate("SecDialog", "Normal", nullptr));
        infinite->setText(QCoreApplication::translate("SecDialog", "Infinite", nullptr));
        back_2->setText(QCoreApplication::translate("SecDialog", "back", nullptr));
        easy->setText(QCoreApplication::translate("SecDialog", "Easy", nullptr));
        medium->setText(QCoreApplication::translate("SecDialog", "Medium", nullptr));
        hard->setText(QCoreApplication::translate("SecDialog", "Hard", nullptr));
        back->setText(QCoreApplication::translate("SecDialog", "back", nullptr));
        pushButton_4->setText(QCoreApplication::translate("SecDialog", "7", nullptr));
        pushButton_6->setText(QCoreApplication::translate("SecDialog", "6", nullptr));
        pushButton_9->setText(QCoreApplication::translate("SecDialog", "3", nullptr));
        pushButton_8->setText(QCoreApplication::translate("SecDialog", "1", nullptr));
        pushButton_5->setText(QCoreApplication::translate("SecDialog", "8", nullptr));
        pushButton->setText(QCoreApplication::translate("SecDialog", "5", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SecDialog", "4", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("SecDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Rockwell'; font-size:12pt; font-weight:700; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:14pt;\">player2:</span></p></body></html>", nullptr));
        textEdit->setHtml(QCoreApplication::translate("SecDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Rockwell'; font-size:12pt; font-weight:700; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:14pt;\">player1:</span></p></body></html>", nullptr));
        pushButton_7->setText(QCoreApplication::translate("SecDialog", "2", nullptr));
        pushButton_10->setText(QCoreApplication::translate("SecDialog", "9", nullptr));
        pushButton_15->setText(QCoreApplication::translate("SecDialog", "REVIWE GAME", nullptr));
        pushButton_16->setText(QCoreApplication::translate("SecDialog", "RE_MATCH", nullptr));
        pushButton_17->setText(QCoreApplication::translate("SecDialog", "BACK", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("SecDialog", "GroupBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecDialog: public Ui_SecDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECDIALOG_H
