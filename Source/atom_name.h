#ifndef ATOM_NAME_H
#define ATOM_NAME_H

#include <QWidget>

namespace Ui {
class Atom_Name;
}

class Atom_Name : public QWidget
{
    Q_OBJECT

public:
    explicit Atom_Name(QWidget *parent = 0);
    ~Atom_Name();

private:
    Ui::Atom_Name *ui;
};

#endif // ATOM_NAME_H
