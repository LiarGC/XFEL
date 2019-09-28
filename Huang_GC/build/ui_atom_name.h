/********************************************************************************
** Form generated from reading UI file 'atom_name.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATOM_NAME_H
#define UI_ATOM_NAME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Atom_Name
{
public:
    QLabel *label;

    void setupUi(QWidget *Atom_Name)
    {
        if (Atom_Name->objectName().isEmpty())
            Atom_Name->setObjectName(QString::fromUtf8("Atom_Name"));
        Atom_Name->resize(400, 300);
        label = new QLabel(Atom_Name);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 71, 21));

        retranslateUi(Atom_Name);

        QMetaObject::connectSlotsByName(Atom_Name);
    } // setupUi

    void retranslateUi(QWidget *Atom_Name)
    {
        Atom_Name->setWindowTitle(QApplication::translate("Atom_Name", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Atom_Name", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\216\237\345\255\220\345\220\215\347\247\260</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Atom_Name: public Ui_Atom_Name {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATOM_NAME_H
