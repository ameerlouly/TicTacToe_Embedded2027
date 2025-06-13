#include"main.h"

MainWindow* LoginWindow = nullptr;
SecDialog* GameWindow = nullptr;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginWindow = new MainWindow();
    GameWindow = new SecDialog();

    LoginWindow->show();
    return a.exec();
}
