#include "proposercours.h"
#include "ui_proposercours.h"
#include "Enseignant.hpp"
#include "Etudiant.hpp"
#include "Administrateur.hpp"
#include "UtilisateurConcreteFactory.hpp"
#include <iostream>
#include <fstream>

using namespace std;

proposerCours::proposerCours(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::proposerCours)
{
    ui->setupUi(this);
}

proposerCours::~proposerCours()
{
    delete ui;
}

void proposerCours::on_pushButton_clicked() {

    struct tm date;
    date.tm_year = 2000;
    date.tm_mon = 1;
    date.tm_mday = 1;
    Enseignant *enseignant = UtilisateurConcreteFactory::creerEnseignant("Hugo", "Brecourt",date);

    string dateDeb = ui->dateDeb->date().toString().toStdString();
    string dateFin = ui->dateFin->date().toString().toStdString();


    ofstream fichier("../proposercours.txt", ios::app);  // ouverture en écriture avec effacement du fichier ouvert
    if(fichier)
    {
        fichier << "Cours proposer par : " << enseignant->getNom() << endl;
        fichier << "Cours : " << ui->nom->text().toStdString() << " "  << ui->description->text().toStdString()  << " "
                << dateDeb << " " << dateFin << endl;

        fichier.close();
    }
    else
        cerr << "Impossible d'ouvrir le fichier !" << endl;
    enseignant->~Enseignant();
    this->close();
}
