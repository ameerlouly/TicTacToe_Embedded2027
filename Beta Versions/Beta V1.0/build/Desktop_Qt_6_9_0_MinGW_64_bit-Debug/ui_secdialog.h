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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecDialog
{
public:
    QGridLayout *gridLayout_4;
    QFormLayout *formLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_3;
    QGridLayout *gridLayout_3;
    QPushButton *history;
    QPushButton *home;
    QPushButton *settings;
    QPushButton *profile;
    QLabel *HistoryWarning;
    QStackedWidget *stackedWidget;
    QWidget *page_2;
    QGridLayout *gridLayout_6;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *startgame;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_4;
    QWidget *page_3;
    QGridLayout *gridLayout_10;
    QPushButton *back_3;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *horizontalSpacer_8;
    QGridLayout *gridLayout_9;
    QPushButton *PVP;
    QPushButton *PVE;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_9;
    QWidget *page_5;
    QGridLayout *gridLayout_19;
    QPushButton *back_2;
    QSpacerItem *horizontalSpacer_22;
    QSpacerItem *verticalSpacer_18;
    QSpacerItem *horizontalSpacer_21;
    QGridLayout *gridLayout_18;
    QPushButton *normal;
    QPushButton *infinite;
    QSpacerItem *horizontalSpacer_23;
    QSpacerItem *verticalSpacer_19;
    QWidget *page_6;
    QGridLayout *gridLayout_5;
    QPushButton *back;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_2;
    QPushButton *hard;
    QPushButton *easy;
    QPushButton *medium;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QWidget *page_4;
    QPushButton *grid6;
    QPushButton *grid5;
    QPushButton *grid2;
    QFrame *line_2;
    QFrame *line_3;
    QPushButton *grid0;
    QPushButton *grid7;
    QPushButton *grid4;
    QPushButton *grid3;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit;
    QPushButton *grid1;
    QFrame *line_4;
    QPushButton *grid8;
    QFrame *line;
    QPushButton *GameReview;
    QPushButton *Rematch;
    QPushButton *back_4;
    QGroupBox *groupBox_2;
    QLabel *label;
    QTextEdit *textEdit_3;
    QLabel *label_2;
    QWidget *page;
    QTableWidget *historyTable;
    QWidget *widget;
    QGridLayout *gridLayout_20;
    QSpacerItem *verticalSpacer_13;
    QSpacerItem *verticalSpacer_12;
    QSpacerItem *verticalSpacer_10;
    QLabel *draws;
    QLabel *wins;
    QSpacerItem *verticalSpacer_11;
    QTextEdit *losses_label;
    QTextEdit *wins_label;
    QLabel *losses;
    QSpacerItem *verticalSpacer_14;
    QTextEdit *draws_label;
    QSpacerItem *verticalSpacer_15;
    QWidget *page_7;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_21;
    QTextEdit *textEdit_9;
    QTextEdit *textEdit_24;
    QTextEdit *textEdit_25;
    QTextEdit *textEdit_26;
    QTextEdit *textEdit_27;
    QWidget *page_8;
    QGridLayout *gridLayout_8;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *horizontalSpacer_6;
    QGridLayout *gridLayout_7;
    QLabel *UsenameTag;
    QPushButton *Log_out;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_7;

    void setupUi(QDialog *SecDialog)
    {
        if (SecDialog->objectName().isEmpty())
            SecDialog->setObjectName("SecDialog");
        SecDialog->resize(1181, 804);
        SecDialog->setStyleSheet(QString::fromUtf8("QDialog\n"
"{\n"
"	background-color: rgb(230, 230, 230);\n"
"}"));
        gridLayout_4 = new QGridLayout(SecDialog);
        gridLayout_4->setObjectName("gridLayout_4");
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        groupBox = new QGroupBox(SecDialog);
        groupBox->setObjectName("groupBox");
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(186, 200, 224, 255), stop:1 rgba(106, 133, 182, 255));\n"
"}"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer_3 = new QSpacerItem(20, 457, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 1, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        history = new QPushButton(groupBox);
        history->setObjectName("history");
        history->setMinimumSize(QSize(0, 30));
        history->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:10px;\n"
"background-color:white;\n"
"color: rgb(0,0,0);\n"
"}"));

        gridLayout_3->addWidget(history, 2, 0, 1, 1);

        home = new QPushButton(groupBox);
        home->setObjectName("home");
        home->setMinimumSize(QSize(0, 30));
        home->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:10px;\n"
"background-color:white;\n"
"color: rgb(0,0,0);\n"
"\n"
"}"));

        gridLayout_3->addWidget(home, 1, 0, 1, 1);

        settings = new QPushButton(groupBox);
        settings->setObjectName("settings");
        settings->setMinimumSize(QSize(100, 60));
        settings->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 700 11pt \"Segoe UI\";\n"
"border-radius:25px;\n"
"color:black;\n"
"background-color: rgb(115, 199, 255);\n"
"}"));

        gridLayout_3->addWidget(settings, 4, 0, 1, 1);

        profile = new QPushButton(groupBox);
        profile->setObjectName("profile");
        profile->setMinimumSize(QSize(0, 30));
        profile->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:10px;\n"
"background-color:white;\n"
"color: rgb(0,0,0);\n"
"}"));

        gridLayout_3->addWidget(profile, 0, 0, 1, 1);

        HistoryWarning = new QLabel(groupBox);
        HistoryWarning->setObjectName("HistoryWarning");
        HistoryWarning->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);"));

        gridLayout_3->addWidget(HistoryWarning, 3, 0, 1, 1);


        gridLayout->addLayout(gridLayout_3, 0, 0, 1, 1);


        formLayout_2->setWidget(0, QFormLayout::ItemRole::LabelRole, groupBox);

        stackedWidget = new QStackedWidget(SecDialog);
        stackedWidget->setObjectName("stackedWidget");
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        gridLayout_6 = new QGridLayout(page_2);
        gridLayout_6->setObjectName("gridLayout_6");
        verticalSpacer_5 = new QSpacerItem(20, 209, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_6->addItem(verticalSpacer_5, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(189, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_4, 1, 0, 1, 1);

        startgame = new QPushButton(page_2);
        startgame->setObjectName("startgame");
        startgame->setMinimumSize(QSize(500, 120));
        startgame->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-radius:30px;\n"
"	color: white;\n"
"	\n"
"	font: 500 30pt \"Montserrat\";\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0.2, stop:0 rgba(84, 204, 190, 255), stop:1 rgba(164, 227, 207, 255));\n"
"	border-color:black;\n"
"}"));

        gridLayout_6->addWidget(startgame, 1, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(189, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_5, 1, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 320, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_6->addItem(verticalSpacer_4, 2, 1, 1, 1);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        gridLayout_10 = new QGridLayout(page_3);
        gridLayout_10->setObjectName("gridLayout_10");
        back_3 = new QPushButton(page_3);
        back_3->setObjectName("back_3");
        back_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:white;\n"
"color:rgb(0, 0, 0);\n"
"font: 900 9pt \"Segoe UI\";\n"
"}"));

        gridLayout_10->addWidget(back_3, 0, 0, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(402, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_9, 0, 1, 1, 2);

        verticalSpacer_8 = new QSpacerItem(20, 289, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_10->addItem(verticalSpacer_8, 0, 3, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(188, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_8, 1, 0, 1, 2);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName("gridLayout_9");
        PVP = new QPushButton(page_3);
        PVP->setObjectName("PVP");
        PVP->setMinimumSize(QSize(250, 70));
        PVP->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"background-color:white;\n"
"color:rgb(0, 0, 0);\n"
"font: 900 9pt \"Segoe UI\";\n"
"}"));

        gridLayout_9->addWidget(PVP, 0, 0, 1, 1);

        PVE = new QPushButton(page_3);
        PVE->setObjectName("PVE");
        PVE->setMinimumSize(QSize(250, 70));
        PVE->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"background-color:white;\n"
"color:rgb(0, 0, 0);\n"
"font: 900 9pt \"Segoe UI\";\n"
"}"));

        gridLayout_9->addWidget(PVE, 0, 1, 1, 1);


        gridLayout_10->addLayout(gridLayout_9, 1, 2, 1, 2);

        horizontalSpacer_10 = new QSpacerItem(277, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_10, 1, 4, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 288, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_10->addItem(verticalSpacer_9, 2, 3, 1, 1);

        stackedWidget->addWidget(page_3);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        gridLayout_19 = new QGridLayout(page_5);
        gridLayout_19->setObjectName("gridLayout_19");
        back_2 = new QPushButton(page_5);
        back_2->setObjectName("back_2");
        back_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:rgb(0, 0, 0);\n"
"font: 900 9pt \"Segoe UI\";\n"
"}\n"
""));

        gridLayout_19->addWidget(back_2, 0, 0, 1, 1);

        horizontalSpacer_22 = new QSpacerItem(414, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_19->addItem(horizontalSpacer_22, 0, 1, 1, 2);

        verticalSpacer_18 = new QSpacerItem(20, 250, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_19->addItem(verticalSpacer_18, 0, 3, 1, 1);

        horizontalSpacer_21 = new QSpacerItem(298, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_19->addItem(horizontalSpacer_21, 1, 0, 1, 2);

        gridLayout_18 = new QGridLayout();
        gridLayout_18->setObjectName("gridLayout_18");
        normal = new QPushButton(page_5);
        normal->setObjectName("normal");
        normal->setMinimumSize(QSize(250, 70));
        normal->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:10px;\n"
"background-color:white;\n"
"color:rgb(0, 0, 0);\n"
"font: 900 9pt \"Segoe UI\";\n"
"}\n"
""));

        gridLayout_18->addWidget(normal, 0, 0, 1, 1);

        infinite = new QPushButton(page_5);
        infinite->setObjectName("infinite");
        infinite->setMinimumSize(QSize(250, 70));
        infinite->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:10px;\n"
"background-color:white;\n"
"color:rgb(0, 0, 0);\n"
"font: 900 9pt \"Segoe UI\";\n"
"}\n"
""));

        gridLayout_18->addWidget(infinite, 1, 0, 1, 1);


        gridLayout_19->addLayout(gridLayout_18, 1, 2, 1, 2);

        horizontalSpacer_23 = new QSpacerItem(336, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_19->addItem(horizontalSpacer_23, 1, 4, 1, 1);

        verticalSpacer_19 = new QSpacerItem(20, 250, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_19->addItem(verticalSpacer_19, 2, 3, 1, 1);

        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        gridLayout_5 = new QGridLayout(page_6);
        gridLayout_5->setObjectName("gridLayout_5");
        back = new QPushButton(page_6);
        back->setObjectName("back");
        back->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:rgb(0, 0, 0);\n"
"font: 900 9pt \"Segoe UI\";\n"
"}\n"
""));

        gridLayout_5->addWidget(back, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(318, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 0, 1, 1, 2);

        verticalSpacer = new QSpacerItem(20, 242, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(241, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 1, 0, 1, 2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        hard = new QPushButton(page_6);
        hard->setObjectName("hard");
        hard->setMinimumSize(QSize(300, 50));
        hard->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:10px;\n"
"background-color:white;\n"
"color:rgb(0, 0, 0);\n"
"font: 900 9pt \"Segoe UI\";\n"
"}\n"
""));

        gridLayout_2->addWidget(hard, 2, 0, 1, 1);

        easy = new QPushButton(page_6);
        easy->setObjectName("easy");
        easy->setMinimumSize(QSize(300, 50));
        easy->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:10px;\n"
"background-color:white;\n"
"color:rgb(0, 0, 0);\n"
"font: 900 9pt \"Segoe UI\";\n"
"}\n"
""));

        gridLayout_2->addWidget(easy, 0, 0, 1, 1);

        medium = new QPushButton(page_6);
        medium->setObjectName("medium");
        medium->setMinimumSize(QSize(300, 50));
        medium->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:10px;\n"
"background-color:white;\n"
"color:rgb(0, 0, 0);\n"
"font: 900 9pt \"Segoe UI\";\n"
"}\n"
""));

        gridLayout_2->addWidget(medium, 1, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_2, 1, 2, 1, 3);

        horizontalSpacer_3 = new QSpacerItem(335, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_3, 1, 5, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 241, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_5->addItem(verticalSpacer_2, 2, 4, 1, 1);

        stackedWidget->addWidget(page_6);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        grid6 = new QPushButton(page_4);
        grid6->setObjectName("grid6");
        grid6->setGeometry(QRect(170, 490, 201, 131));
        grid6->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        grid5 = new QPushButton(page_4);
        grid5->setObjectName("grid5");
        grid5->setGeometry(QRect(580, 350, 201, 131));
        grid5->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        grid2 = new QPushButton(page_4);
        grid2->setObjectName("grid2");
        grid2->setGeometry(QRect(580, 200, 201, 131));
        grid2->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        grid0 = new QPushButton(page_4);
        grid0->setObjectName("grid0");
        grid0->setGeometry(QRect(160, 200, 201, 131));
        grid0->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        grid7 = new QPushButton(page_4);
        grid7->setObjectName("grid7");
        grid7->setGeometry(QRect(370, 500, 201, 131));
        grid7->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        grid4 = new QPushButton(page_4);
        grid4->setObjectName("grid4");
        grid4->setGeometry(QRect(372, 350, 201, 131));
        grid4->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        grid3 = new QPushButton(page_4);
        grid3->setObjectName("grid3");
        grid3->setGeometry(QRect(160, 350, 201, 131));
        grid3->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        grid1 = new QPushButton(page_4);
        grid1->setObjectName("grid1");
        grid1->setGeometry(QRect(370, 200, 201, 131));
        grid1->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        grid8 = new QPushButton(page_4);
        grid8->setObjectName("grid8");
        grid8->setGeometry(QRect(580, 490, 201, 131));
        grid8->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        GameReview = new QPushButton(page_4);
        GameReview->setObjectName("GameReview");
        GameReview->setGeometry(QRect(640, 620, 171, 61));
        GameReview->setMaximumSize(QSize(500, 500));
        GameReview->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:black;\n"
"background-color: rgb(115, 199, 255);\n"
" font: 700 14pt \"Segoe UI\";\n"
"}"));
        Rematch = new QPushButton(page_4);
        Rematch->setObjectName("Rematch");
        Rematch->setGeometry(QRect(390, 620, 171, 61));
        Rematch->setMaximumSize(QSize(500, 500));
        Rematch->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:black;\n"
"background-color: rgb(115, 199, 255);\n"
" font: 700 14pt \"Segoe UI\";\n"
"}"));
        back_4 = new QPushButton(page_4);
        back_4->setObjectName("back_4");
        back_4->setGeometry(QRect(150, 620, 171, 61));
        back_4->setMaximumSize(QSize(500, 500));
        back_4->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:black;\n"
"background-color: rgb(115, 199, 255);\n"
" font: 700 14pt \"Segoe UI\";\n"
"}"));
        groupBox_2 = new QGroupBox(page_4);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(160, 170, 651, 441));
        label = new QLabel(page_4);
        label->setObjectName("label");
        label->setGeometry(QRect(390, 150, 261, 20));
        textEdit_3 = new QTextEdit(page_4);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(90, 680, 321, 31));
        textEdit_3->setStyleSheet(QString::fromUtf8("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Rockwell'; font-size:12pt; font-weight:700; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:14pt;\">Are you sure you want to exit the game?:</span></p></body></html>"));
        label_2 = new QLabel(page_4);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(420, 680, 281, 20));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        stackedWidget->addWidget(page_4);
        groupBox_2->raise();
        grid6->raise();
        grid5->raise();
        grid2->raise();
        line_2->raise();
        line_3->raise();
        grid0->raise();
        grid7->raise();
        grid4->raise();
        grid3->raise();
        textEdit_2->raise();
        textEdit->raise();
        grid1->raise();
        line_4->raise();
        line->raise();
        GameReview->raise();
        Rematch->raise();
        back_4->raise();
        grid8->raise();
        label->raise();
        textEdit_3->raise();
        label_2->raise();
        page = new QWidget();
        page->setObjectName("page");
        historyTable = new QTableWidget(page);
        if (historyTable->columnCount() < 3)
            historyTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        historyTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        historyTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        historyTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (historyTable->rowCount() < 10)
            historyTable->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsEnabled);
        historyTable->setItem(0, 0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        historyTable->setItem(0, 1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        historyTable->setItem(0, 2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        historyTable->setItem(1, 2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        historyTable->setItem(2, 2, __qtablewidgetitem7);
        historyTable->setObjectName("historyTable");
        historyTable->setGeometry(QRect(410, 60, 481, 411));
        historyTable->setSizeIncrement(QSize(0, 1));
        historyTable->setFrameShape(QFrame::Shape::NoFrame);
        historyTable->setFrameShadow(QFrame::Shadow::Sunken);
        historyTable->setLineWidth(1);
        historyTable->setTextElideMode(Qt::TextElideMode::ElideMiddle);
        historyTable->setGridStyle(Qt::PenStyle::SolidLine);
        historyTable->setSortingEnabled(false);
        historyTable->horizontalHeader()->setMinimumSectionSize(36);
        widget = new QWidget(page);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(50, 60, 301, 371));
        gridLayout_20 = new QGridLayout(widget);
        gridLayout_20->setObjectName("gridLayout_20");
        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_20->addItem(verticalSpacer_13, 8, 0, 1, 1);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_20->addItem(verticalSpacer_12, 10, 0, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_20->addItem(verticalSpacer_10, 1, 0, 1, 1);

        draws = new QLabel(widget);
        draws->setObjectName("draws");

        gridLayout_20->addWidget(draws, 11, 0, 1, 1);

        wins = new QLabel(widget);
        wins->setObjectName("wins");
        wins->setStyleSheet(QString::fromUtf8("Label{\n"
"	background-color: rgb(0, 0, 0);\n"
"\n"
"}"));

        gridLayout_20->addWidget(wins, 7, 0, 1, 1);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_20->addItem(verticalSpacer_11, 6, 0, 1, 1);

        losses_label = new QTextEdit(widget);
        losses_label->setObjectName("losses_label");
        losses_label->setStyleSheet(QString::fromUtf8("QTextEdit\n"
"{\n"
"color:black;\n"
"background-color: rgb(115, 199, 255);\n"
" font: 700 16pt \"Segoe UI\";\n"
"}"));
        losses_label->setReadOnly(true);

        gridLayout_20->addWidget(losses_label, 0, 0, 1, 1);

        wins_label = new QTextEdit(widget);
        wins_label->setObjectName("wins_label");
        wins_label->setStyleSheet(QString::fromUtf8("QTextEdit\n"
"{\n"
"color:black;\n"
"background-color: rgb(115, 199, 255);\n"
" font: 700 16pt \"Segoe UI\";\n"
"}"));
        wins_label->setReadOnly(true);

        gridLayout_20->addWidget(wins_label, 5, 0, 1, 1);

        losses = new QLabel(widget);
        losses->setObjectName("losses");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(losses->sizePolicy().hasHeightForWidth());
        losses->setSizePolicy(sizePolicy);

        gridLayout_20->addWidget(losses, 2, 0, 2, 1);

        verticalSpacer_14 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_20->addItem(verticalSpacer_14, 4, 0, 1, 1);

        draws_label = new QTextEdit(widget);
        draws_label->setObjectName("draws_label");
        draws_label->setStyleSheet(QString::fromUtf8("QTextEdit\n"
"{\n"
"color:black;\n"
"background-color: rgb(115, 199, 255);\n"
" font: 700 16pt \"Segoe UI\";\n"
"}"));
        draws_label->setReadOnly(true);

        gridLayout_20->addWidget(draws_label, 9, 0, 1, 1);

        verticalSpacer_15 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_20->addItem(verticalSpacer_15, 12, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_7 = new QWidget();
        page_7->setObjectName("page_7");
        layoutWidget = new QWidget(page_7);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(220, 140, 511, 441));
        gridLayout_21 = new QGridLayout(layoutWidget);
        gridLayout_21->setObjectName("gridLayout_21");
        gridLayout_21->setContentsMargins(0, 0, 0, 0);
        textEdit_9 = new QTextEdit(layoutWidget);
        textEdit_9->setObjectName("textEdit_9");
        textEdit_9->setMinimumSize(QSize(450, 50));
        textEdit_9->setMaximumSize(QSize(450, 50));
        textEdit_9->setStyleSheet(QString::fromUtf8("QTextEdit\n"
"{\n"
"border :none;\n"
"color:black;\n"
"background-color: rgb(115, 199, 255);\n"
"font: 700 12pt \"Rockwell\";    \n"
" border-radius: 20px;\n"
"}"));

        gridLayout_21->addWidget(textEdit_9, 0, 0, 1, 1);

        textEdit_24 = new QTextEdit(layoutWidget);
        textEdit_24->setObjectName("textEdit_24");
        textEdit_24->setMinimumSize(QSize(450, 50));
        textEdit_24->setMaximumSize(QSize(450, 50));
        textEdit_24->setStyleSheet(QString::fromUtf8("QTextEdit\n"
"{\n"
"border :none;\n"
"color:black;\n"
"background-color: rgb(115, 199, 255);\n"
"font: 700 12pt \"Rockwell\";    \n"
" border-radius: 20px;\n"
"}"));

        gridLayout_21->addWidget(textEdit_24, 1, 0, 1, 1);

        textEdit_25 = new QTextEdit(layoutWidget);
        textEdit_25->setObjectName("textEdit_25");
        textEdit_25->setMinimumSize(QSize(450, 50));
        textEdit_25->setMaximumSize(QSize(450, 50));
        textEdit_25->setStyleSheet(QString::fromUtf8("QTextEdit\n"
"{\n"
"border :none;\n"
"color:black;\n"
"background-color: rgb(115, 199, 255);\n"
"font: 700 12pt \"Rockwell\";    \n"
" border-radius: 20px;\n"
"}"));

        gridLayout_21->addWidget(textEdit_25, 2, 0, 1, 1);

        textEdit_26 = new QTextEdit(layoutWidget);
        textEdit_26->setObjectName("textEdit_26");
        textEdit_26->setMinimumSize(QSize(450, 50));
        textEdit_26->setMaximumSize(QSize(450, 50));
        textEdit_26->setStyleSheet(QString::fromUtf8("QTextEdit\n"
"{\n"
"border :none;\n"
"color:black;\n"
"background-color: rgb(115, 199, 255);\n"
"font: 700 12pt \"Rockwell\";    \n"
" border-radius: 20px;\n"
"}"));

        gridLayout_21->addWidget(textEdit_26, 3, 0, 1, 1);

        textEdit_27 = new QTextEdit(layoutWidget);
        textEdit_27->setObjectName("textEdit_27");
        textEdit_27->setMinimumSize(QSize(450, 50));
        textEdit_27->setMaximumSize(QSize(450, 50));
        textEdit_27->setStyleSheet(QString::fromUtf8("QTextEdit\n"
"{\n"
"border :none;\n"
"color:black;\n"
"background-color: rgb(115, 199, 255);\n"
"font: 700 12pt \"Rockwell\";    \n"
" border-radius: 20px;\n"
"}"));

        gridLayout_21->addWidget(textEdit_27, 4, 0, 1, 1);

        stackedWidget->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName("page_8");
        gridLayout_8 = new QGridLayout(page_8);
        gridLayout_8->setObjectName("gridLayout_8");
        verticalSpacer_6 = new QSpacerItem(20, 215, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_8->addItem(verticalSpacer_6, 0, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(191, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_6, 1, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName("gridLayout_7");
        UsenameTag = new QLabel(page_8);
        UsenameTag->setObjectName("UsenameTag");
        UsenameTag->setStyleSheet(QString::fromUtf8("\n"
"font: 900 20pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));

        gridLayout_7->addWidget(UsenameTag, 0, 0, 1, 1);

        Log_out = new QPushButton(page_8);
        Log_out->setObjectName("Log_out");
        Log_out->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:10px;\n"
"background-color:white;\n"
"color:black;\n"
"	font: 700 14pt \"Source Code Pro\";\n"
"}"));

        gridLayout_7->addWidget(Log_out, 1, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 1, 1, 1, 2);

        horizontalSpacer_7 = new QSpacerItem(238, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_7, 1, 3, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 346, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_8->addItem(verticalSpacer_7, 2, 1, 1, 1);

        stackedWidget->addWidget(page_8);

        formLayout_2->setWidget(0, QFormLayout::ItemRole::FieldRole, stackedWidget);


        gridLayout_4->addLayout(formLayout_2, 0, 0, 1, 1);


        retranslateUi(SecDialog);

        stackedWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(SecDialog);
    } // setupUi

    void retranslateUi(QDialog *SecDialog)
    {
        SecDialog->setWindowTitle(QCoreApplication::translate("SecDialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SecDialog", "GroupBox", nullptr));
        history->setText(QCoreApplication::translate("SecDialog", "History", nullptr));
        home->setText(QCoreApplication::translate("SecDialog", "Home", nullptr));
        settings->setText(QCoreApplication::translate("SecDialog", "ABOUT US", nullptr));
        profile->setText(QCoreApplication::translate("SecDialog", "Profile", nullptr));
        HistoryWarning->setText(QCoreApplication::translate("SecDialog", "TextLabel", nullptr));
        startgame->setText(QCoreApplication::translate("SecDialog", "START GAME", nullptr));
        back_3->setText(QCoreApplication::translate("SecDialog", "back", nullptr));
        PVP->setText(QCoreApplication::translate("SecDialog", "PVP", nullptr));
        PVE->setText(QCoreApplication::translate("SecDialog", "PVE", nullptr));
        back_2->setText(QCoreApplication::translate("SecDialog", "back", nullptr));
        normal->setText(QCoreApplication::translate("SecDialog", "Normal", nullptr));
        infinite->setText(QCoreApplication::translate("SecDialog", "Infinite", nullptr));
        back->setText(QCoreApplication::translate("SecDialog", "back", nullptr));
        hard->setText(QCoreApplication::translate("SecDialog", "Hard", nullptr));
        easy->setText(QCoreApplication::translate("SecDialog", "Easy", nullptr));
        medium->setText(QCoreApplication::translate("SecDialog", "Medium", nullptr));
        grid6->setText(QString());
        grid5->setText(QString());
        grid2->setText(QString());
        grid0->setText(QString());
        grid7->setText(QString());
        grid4->setText(QString());
        grid3->setText(QString());
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
        grid1->setText(QString());
        grid8->setText(QString());
        GameReview->setText(QCoreApplication::translate("SecDialog", "REVIEW GAME", nullptr));
        Rematch->setText(QCoreApplication::translate("SecDialog", "RE_MATCH", nullptr));
        back_4->setText(QCoreApplication::translate("SecDialog", "BACK", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("SecDialog", "GroupBox", nullptr));
        label->setText(QCoreApplication::translate("SecDialog", "TextLabel", nullptr));
        textEdit_3->setHtml(QCoreApplication::translate("SecDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Are you sure you want to exit the game?</p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("SecDialog", "Are you sure you want to exit the game?", nullptr));
        QTableWidgetItem *___qtablewidgetitem = historyTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("SecDialog", "RESULT", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = historyTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("SecDialog", "DATE", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = historyTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("SecDialog", "REVIEW GAME", nullptr));

        const bool __sortingEnabled = historyTable->isSortingEnabled();
        historyTable->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem3 = historyTable->item(2, 2);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("SecDialog", "SHOW", nullptr));
        historyTable->setSortingEnabled(__sortingEnabled);

        draws->setText(QString());
        wins->setText(QString());
        losses_label->setHtml(QCoreApplication::translate("SecDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:16pt; font-weight:700; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">LOSSES</span></p></body></html>", nullptr));
        wins_label->setHtml(QCoreApplication::translate("SecDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:16pt; font-weight:700; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">WINS</p></body></html>", nullptr));
        losses->setText(QString());
        draws_label->setHtml(QCoreApplication::translate("SecDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:16pt; font-weight:700; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">DRAWS</span></p></body></html>", nullptr));
        textEdit_9->setHtml(QCoreApplication::translate("SecDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Rockwell'; font-size:12pt; font-weight:700; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:16pt;\">NOURHAN MOHAMMAD</span></p></body></html>", nullptr));
        textEdit_24->setHtml(QCoreApplication::translate("SecDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Rockwell'; font-size:12pt; font-weight:700; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:16pt;\">ROLA REFAAT</span></p></body></html>", nullptr));
        textEdit_25->setHtml(QCoreApplication::translate("SecDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Rockwell'; font-size:12pt; font-weight:700; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:16pt;\">AMEER LOULY</span></p></body></html>", nullptr));
        textEdit_26->setHtml(QCoreApplication::translate("SecDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Rockwell'; font-size:12pt; font-weight:700; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:16pt;\">AMIR SAMEH</span></p></body></html>", nullptr));
        textEdit_27->setHtml(QCoreApplication::translate("SecDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Rockwell'; font-size:12pt; font-weight:700; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:16pt;\">MOHAMED ABDULLAH</span></p></body></html>", nullptr));
        UsenameTag->setText(QCoreApplication::translate("SecDialog", "Welcome", nullptr));
        Log_out->setText(QCoreApplication::translate("SecDialog", "LOG OUT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecDialog: public Ui_SecDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECDIALOG_H
