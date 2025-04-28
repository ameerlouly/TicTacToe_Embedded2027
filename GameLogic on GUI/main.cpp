
// this is the QT main.cpp file

#include <QApplication>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>
#include <QMessageBox>
#include <QTimer>

void onButtonClicked(int *x , QPushButton *button , int num , int clicked[9]) {

    if(clicked[num]<1){

        if(*x ==1){
            button ->setText("X");
            *x=2;
        }

        else if(*x ==2){
            button ->setText("O");
            *x=1;
        }

        clicked[num]=1;
    }

    return;
}

void nextHistorymove(int x,QPushButton *Button[9]){

    if(x>=20)
        Button[x-20] ->setText("O");
    else
        Button[x-10] ->setText("X");
    return;
}


void showhistory(QPushButton *Button[9] , int hitory[9] ,  QWidget *window){


   /* for(int i =0; i<9; i++){
        QTimer::singleShot(1000+i*1000, window, [=]() { nextHistorymove(hitory[i] , Button);  });
    }*/

    int x=0;
    QTimer::singleShot(1000, window, [=]() { nextHistorymove(hitory[x] , Button);  });
    x++;
    QTimer::singleShot(2000, window, [=]() { nextHistorymove(hitory[x] , Button);  });
    x++;
    QTimer::singleShot(3000, window, [=]() { nextHistorymove(hitory[x] , Button);  });
    x++;
    QTimer::singleShot(4000, window, [=]() { nextHistorymove(hitory[x] , Button);  });
    x++;
    QTimer::singleShot(5000, window, [=]() { nextHistorymove(hitory[x] , Button);  });
    x++;
    QTimer::singleShot(6000, window, [=]() { nextHistorymove(hitory[x] , Button);  });
    x++;
    QTimer::singleShot(7000, window, [=]() { nextHistorymove(hitory[x] , Button);  });
    x++;
    QTimer::singleShot(8000, window, [=]() { nextHistorymove(hitory[x] , Button);  });
    x++;
    QTimer::singleShot(9000, window, [=]() { nextHistorymove(hitory[x] , Button);  });

    return;
}



int main(int argc, char *argv[])
{
    int HistoryRecorder[9]={12,26,15,20,18,21,17,23,14};
    int clicked[9] = {0};

    int x=1;
    QApplication app(argc, argv);

    QWidget window;
    window.setWindowTitle("Window 1");

    QPushButton *Grid[9];

    for (int i = 0; i < 9; ++i)
    {
        Grid[i] = new QPushButton(QString("%1").arg(i+1),&window);
    }

     QPushButton *Button = new QPushButton("Show detailed history", &window);


    Grid[0]->setFixedSize(100, 100);
    Grid[1]->setFixedSize(100, 100);
    Grid[2]->setFixedSize(100, 100);
    Grid[3]->setFixedSize(100, 100);
    Grid[4]->setFixedSize(100, 100);
    Grid[5]->setFixedSize(100, 100);
    Grid[6]->setFixedSize(100, 100);
    Grid[7]->setFixedSize(100, 100);
    Grid[8]->setFixedSize(100, 100);

    Button->setFixedSize(200, 100);

    Grid[0]->move(0, 0);
    Grid[1]->move(100, 0);
    Grid[2]->move(200, 0);
    Grid[3]->move(0, 100);
    Grid[4]->move(100, 100);
    Grid[5]->move(200, 100);
    Grid[6]->move(0, 200);
    Grid[7]->move(100, 200);
    Grid[8]->move(200, 200);

    Button->move(150, 350);

    QFont font;
    font.setPointSize(30);

    Grid[0]->setFont(font);
    Grid[1]->setFont(font);
    Grid[2]->setFont(font);
    Grid[3]->setFont(font);
    Grid[4]->setFont(font);
    Grid[5]->setFont(font);
    Grid[6]->setFont(font);
    Grid[7]->setFont(font);
    Grid[8]->setFont(font);


    QVBoxLayout *layout = new QVBoxLayout();



        QObject::connect(Grid[0], &QPushButton::clicked, [&]() {onButtonClicked(&x , Grid[0],0, clicked); });
        QObject::connect(Grid[1], &QPushButton::clicked, [&]() {onButtonClicked(&x , Grid[1],1, clicked); });
        QObject::connect(Grid[2], &QPushButton::clicked, [&]() {onButtonClicked(&x , Grid[2],2, clicked); });
        QObject::connect(Grid[3], &QPushButton::clicked, [&]() {onButtonClicked(&x , Grid[3],3, clicked); });
        QObject::connect(Grid[4], &QPushButton::clicked, [&]() {onButtonClicked(&x , Grid[4],4, clicked); });
        QObject::connect(Grid[5], &QPushButton::clicked, [&]() {onButtonClicked(&x , Grid[5],5, clicked); });
        QObject::connect(Grid[6], &QPushButton::clicked, [&]() {onButtonClicked(&x , Grid[6],6, clicked); });
        QObject::connect(Grid[7], &QPushButton::clicked, [&]() {onButtonClicked(&x , Grid[7],7, clicked); });
        QObject::connect(Grid[8], &QPushButton::clicked, [&]() {onButtonClicked(&x , Grid[8],8, clicked); });

        QObject::connect(Button, &QPushButton::clicked, [&]() {showhistory(Grid,HistoryRecorder,&window); });



    window.setLayout(layout);

    window.resize(500, 500);
    window.show();

    return app.exec();
}
