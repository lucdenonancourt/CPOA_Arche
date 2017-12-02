#ifndef ADMINISTRATEUR
#define ADMINISTRATEUR

#include "Utilisateur.hpp"
#include <string>
#include <ostream>
#include <iostream>


class Administrateur : public Utilisateur {

  //Numéro de l'Administrateur, généré automatiquement dans le construceur
  std::string numAdmin;

public:
  //Constructeur de la classe Administrateur.
  Administrateur(std::string n, std::string p, struct tm d)
  :Utilisateur(n,p,d)
  {
    numAdmin =  "admin_" + n.substr(0,5) + p.substr(0,3);
  }

  //Affiche le nom et prenom de l'administrateur en console
  void print(){
        std::cout << "Administrateur " <<  nom << " " << prenom <<'\n';
  }


};


#endif
