#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("XFEL");

    //if using the following code, 'make' will fail for unkonwn reason
    /*connect(ui->AtomName,&QPushButton::pressed,[=](){
        name.show();
    });*/
}

MainWindow::~MainWindow()
{
    delete ui;
}
