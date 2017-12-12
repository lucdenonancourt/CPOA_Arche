#include "inscription.h"
#include "ui_inscription.h"
#include <iostream>

Inscription::Inscription(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Inscription)
{
    ui->setupUi(this);
}

Inscription::~Inscription()
{
    delete ui;
}

void Inscription::on_buttonBox_accepted()
{
    //On verifie que les informations sont bonnes
    //Si elles sont correct, on creer un utilisateur
    //Sinon on relance le formulaire vide + message d'erreur
}
