#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "atom_name.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Atom_Name name;//子窗口指针
};

#endif // MAINWINDOW_H
