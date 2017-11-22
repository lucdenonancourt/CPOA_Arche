#ifndef ADMINISTRATEUR
#define ADMINISTRATEUR

#include "Utilisateur.hpp"
#include <string>
#include <ostream>
#include <iostream>


class Administrateur : public Utilisateur {

  //Numéro de l'Administrateur, généré automatiquement dans le construceur
  std::string numAdmin;
  //Permet la redefinition de l'opérateur <<
  friend std::ostream& operator<<(std::ostream&, const Administrateur&);

public:
  //Constructeur de la classe Administrateur.
  Administrateur(std::string n, std::string p, struct tm d)
  :Utilisateur(n,p,d)
  {
    numAdmin =  "admin_" + n.substr(0,5) + p.substr(0,3);
  }

  
};

//Permet l'affichage des données de l'administrateur
std::ostream& operator<<(std::ostream &strm, const Administrateur &a) {
  return strm << "Administrateur(" << a.nom << ", " << a.prenom << ", " << a.numAdmin << ")";
}

#endif
