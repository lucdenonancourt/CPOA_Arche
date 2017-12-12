/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdministrateur;
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *inscriptionButton;
    QPushButton *connexionButton;
    QSlider *horizontalSlider;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(651, 548);
        actionAdministrateur = new QAction(MainWindow);
        actionAdministrateur->setObjectName(QStringLiteral("actionAdministrateur"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, -10, 651, 101));
        inscriptionButton = new QPushButton(centralWidget);
        inscriptionButton->setObjectName(QStringLiteral("inscriptionButton"));
        inscriptionButton->setGeometry(QRect(230, 160, 179, 81));
        inscriptionButton->setIconSize(QSize(16, 16));
        connexionButton = new QPushButton(centralWidget);
        connexionButton->setObjectName(QStringLiteral("connexionButton"));
        connexionButton->setGeometry(QRect(230, 280, 181, 71));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(240, 400, 160, 29));
        horizontalSlider->setMouseTracking(false);
        horizontalSlider->setFocusPolicy(Qt::TabFocus);
        horizontalSlider->setContextMenuPolicy(Qt::ActionsContextMenu);
        horizontalSlider->setAutoFillBackground(false);
        horizontalSlider->setMinimum(50);
        horizontalSlider->setMaximum(64);
        horizontalSlider->setOrientation(Qt::Horizontal);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 651, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionAdministrateur->setText(QApplication::translate("MainWindow", "Administrateur", 0));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:28pt;\">Bienvenue sur ARCHE</span></p></body></html>", 0));
        inscriptionButton->setText(QApplication::translate("MainWindow", "Inscription", 0));
        connexionButton->setText(QApplication::translate("MainWindow", "Connexion", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
