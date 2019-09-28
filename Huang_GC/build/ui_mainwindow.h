/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_5;
    QAction *action_7;
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QPushButton *AtomName;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_2;
    QMenuBar *menuBar;
    QMenu *menu;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(849, 566);
        action_5 = new QAction(MainWindow);
        action_5->setObjectName(QString::fromUtf8("action_5"));
        action_7 = new QAction(MainWindow);
        action_7->setObjectName(QString::fromUtf8("action_7"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 491, 341));
        AtomName = new QPushButton(groupBox);
        AtomName->setObjectName(QString::fromUtf8("AtomName"));
        AtomName->setGeometry(QRect(10, 30, 80, 26));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 100, 80, 26));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(680, 120, 120, 80));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 849, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(action_5);
        menu->addAction(action_7);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        action_5->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\351\205\215\347\275\256", 0, QApplication::UnicodeUTF8));
        action_5->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        action_7->setText(QApplication::translate("MainWindow", "\350\257\273\345\217\226\351\205\215\347\275\256", 0, QApplication::UnicodeUTF8));
        action_7->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "\350\276\223\345\205\245\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        AtomName->setText(QApplication::translate("MainWindow", "\345\216\237\345\255\220\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "\345\216\237\345\255\220\344\275\215\347\275\256", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\350\276\223\345\205\245\345\206\205\345\256\271", 0, QApplication::UnicodeUTF8));
        menu->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
