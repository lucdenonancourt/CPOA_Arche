#include "mainwindow.h"
#include "inscription.h"
#include "ui_mainwindow.h"
#include "proposercours.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_inscriptionButton_clicked()
{
    Inscription *i = new Inscription();
    this->setWindowOpacity(0.8);
    i->exec();
    this->setWindowOpacity(1.0);
}

void MainWindow::on_connexionButton_clicked()
{
    proposerCours *p = new proposerCours();
    this->setWindowOpacity(0.8);
    p->exec();
    this->setWindowOpacity(1.0);
}

void MainWindow::on_coursButton_clicked()
{

}
