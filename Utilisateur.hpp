#ifndef UTILISATEUR
#define UTILISATEUR

#include <ctime>
#include <string>
#include <iostream>

//Classe abstraite Utilisateur
class Utilisateur {

protected:

  //Tous les utilisateurs du site possèdent un nom, un prenom et une date de naissance
  std::string nom;
  std::string prenom;
  struct tm dateNaiss;

  //Constructeur de la classe utilisateur
  Utilisateur(std::string n, std::string p, struct tm d){
    nom = n;
    prenom = p;
    dateNaiss = d;
  }

public:
  //destructeur.
  virtual ~Utilisateur() {}
  //Affiche certaine information utilisateur
  virtual void print() = 0;

};

#endif
