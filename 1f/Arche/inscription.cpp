#include "inscription.h"
#include "ui_inscription.h"
#include "Enseignant.hpp"
#include "Etudiant.hpp"
#include "Administrateur.hpp"
#include "UtilisateurConcreteFactory.hpp"
#include <iostream>
#include <fstream>

using namespace std;

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
    //On ouvre le fichier d'ecriture
    ofstream sortie("../inscription.txt", ios::app);
    if(!sortie)
        cerr << "Impossible d'écrire en sortie !" << endl;

    //Récupération des informations de l'utilisateur
    QString qnom = ui->lineEdit->text();
    QString qprenom = ui->lineEdit_2->text();
    QDate date_naissance = ui->dateEdit->date();

    const char* nom = qnom.toStdString().c_str();
    const char* prenom = qprenom.toStdString().c_str();
    struct tm date;
    date.tm_year = date_naissance.year();
    date.tm_mon = date_naissance.month();
    date.tm_mday = date_naissance.day();
    //On creer un etudiant ou un enseignant
    //Si la valeur est vrai, alors c'est un enseignant
    if(ui->radioButton->isChecked()){
        Enseignant *user = UtilisateurConcreteFactory::creerEnseignant(nom,prenom,date);
        sortie << user->information() << endl;
        delete user;
    }else{
        Etudiant *user = UtilisateurConcreteFactory::creerEtudiant(nom,prenom,date);
        sortie << user->information() << endl;
        delete user;
    }
    sortie.close();
}
