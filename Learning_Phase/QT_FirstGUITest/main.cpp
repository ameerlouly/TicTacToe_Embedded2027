#include <QApplication>
#include <QLabel>
#include <QWidget>
int main(int argc, char *argv[ ])
{
    QApplication app(argc, argv);
    QLabel hello("Hello World");
    hello.setWindowTitle("My First Qt Program");
    hello.resize(400, 400);
    hello.show();
    hello.resize(500,500);
    hello.show();
    return app.exec();
}
