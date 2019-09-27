#include "atom_name.h"
#include "ui_atom_name.h"

Atom_Name::Atom_Name(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Atom_Name)
{
    ui->setupUi(this);
    setWindowTitle("原子名称");
}

Atom_Name::~Atom_Name()
{
    delete ui;
}
