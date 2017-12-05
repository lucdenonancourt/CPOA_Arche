#include "mainwindow.h"
#include "inscription.h"
#include "ui_mainwindow.h"
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
    //this->close();
    i->show();
}

void MainWindow::on_connexionButton_clicked()
{
}
