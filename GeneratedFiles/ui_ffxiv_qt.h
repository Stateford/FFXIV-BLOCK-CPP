/********************************************************************************
** Form generated from reading UI file 'ffxiv_qt.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FFXIV_QT_H
#define UI_FFXIV_QT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FFXIV_QTClass
{
public:
    QAction *actionQuit;
    QAction *actionAbout;
    QWidget *centralWidget;
    QPushButton *button_translate;
    QPushButton *button_clear;
    QTextEdit *input;
    QTextEdit *output;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *FFXIV_QTClass)
    {
        if (FFXIV_QTClass->objectName().isEmpty())
            FFXIV_QTClass->setObjectName(QStringLiteral("FFXIV_QTClass"));
        FFXIV_QTClass->resize(574, 287);
        actionQuit = new QAction(FFXIV_QTClass);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionAbout = new QAction(FFXIV_QTClass);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(FFXIV_QTClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        button_translate = new QPushButton(centralWidget);
        button_translate->setObjectName(QStringLiteral("button_translate"));
        button_translate->setGeometry(QRect(400, 200, 75, 23));
        button_clear = new QPushButton(centralWidget);
        button_clear->setObjectName(QStringLiteral("button_clear"));
        button_clear->setGeometry(QRect(480, 200, 75, 23));
        input = new QTextEdit(centralWidget);
        input->setObjectName(QStringLiteral("input"));
        input->setGeometry(QRect(20, 20, 231, 151));
        output = new QTextEdit(centralWidget);
        output->setObjectName(QStringLiteral("output"));
        output->setGeometry(QRect(320, 20, 231, 151));
        FFXIV_QTClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FFXIV_QTClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 574, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        FFXIV_QTClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FFXIV_QTClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        FFXIV_QTClass->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionQuit);
        menuHelp->addAction(actionAbout);

        retranslateUi(FFXIV_QTClass);

        QMetaObject::connectSlotsByName(FFXIV_QTClass);
    } // setupUi

    void retranslateUi(QMainWindow *FFXIV_QTClass)
    {
        FFXIV_QTClass->setWindowTitle(QApplication::translate("FFXIV_QTClass", "FFXIV_QT", 0));
        actionQuit->setText(QApplication::translate("FFXIV_QTClass", "Quit", 0));
        actionAbout->setText(QApplication::translate("FFXIV_QTClass", "About", 0));
        button_translate->setText(QApplication::translate("FFXIV_QTClass", "Translate", 0));
        button_clear->setText(QApplication::translate("FFXIV_QTClass", "Clear", 0));
        menuFile->setTitle(QApplication::translate("FFXIV_QTClass", "File", 0));
        menuHelp->setTitle(QApplication::translate("FFXIV_QTClass", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class FFXIV_QTClass: public Ui_FFXIV_QTClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FFXIV_QT_H
