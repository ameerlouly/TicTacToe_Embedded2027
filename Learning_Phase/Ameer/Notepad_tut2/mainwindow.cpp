#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this); // set the user interface
    this->setCentralWidget(ui->textEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_triggered()
{
    currentFile.clear();
    ui->textEdit->setText(QString());

}


void MainWindow::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Open the file"); // Display file dialog for opening file
    QFile file(fileName);
    currentFile = fileName;

    // Open the file
    if(!file.open(QIODevice::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this, "Warning", "Canno open file : " + file.errorString()); // Error message is case file fails to open
        return;
    }

    setWindowTitle(fileName); // Set the title of the window
    QTextStream in(&file); // create an input stream with the opened file
    QString text = in.readAll(); // Store all read text in "text" object
    ui->textEdit->setText(text); // Display all read text on ui
    file.close(); // close the opened file
}


void MainWindow::on_actionSaveAs_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Save as"); // Display file dialog for saving file
    QFile file(fileName);

    if(!file.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this, "Warning", "Canno Save file : " + file.errorString()); // Error message is case file fails to save
        return;
    }

    currentFile = fileName; // Switch current file
    setWindowTitle(fileName);   // Change window title
    QTextStream out(&file); // Set output text stream
    QString text = ui->textEdit->toPlainText(); // store text in editor to text object
    out << text; // release written text to file stream
    file.close(); // close the file when done

}


void MainWindow::on_actionPrint_triggered()
{
    QPrinter printer; // Object Allows you to connect to any printer in the network
    printer.setPrinterName("Printer Name"); // Set the Name of the printer
    QPrintDialog pDialog(&printer, this); // Opens dialog to choose the printer
    if(pDialog.exec() == QDialog::Rejected)
    {
        QMessageBox::warning(this, "Warning", "Cannot Access Printer");
        return;
    }

    ui->textEdit->print(&printer); // Sends text to chosen printer
}




void MainWindow::on_actionExit_triggered()
{
    QApplication::quit(); // Exits Application
}


void MainWindow::on_actionCopy_triggered()
{
    ui->textEdit->copy(); // Copies text to clipboard
}


void MainWindow::on_actionCut_triggered()
{
    ui->textEdit->cut(); // Cuts text to clipboard
}


void MainWindow::on_actionPaste_triggered()
{
    ui->textEdit->paste(); // Pastes text from clipboard
}


void MainWindow::on_actionUndo_triggered()
{
    ui->textEdit->undo(); // undoes edits
}


void MainWindow::on_actionRedo_triggered()
{
    ui->textEdit->redo(); // redoes edits
}

