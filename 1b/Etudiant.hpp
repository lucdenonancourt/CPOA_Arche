#ifndef ETUDIANT
#define ETUDIANT

#include "Utilisateur.hpp"
#include <string>
#include <ostream>
#include <iostream>


class Etudiant : public Utilisateur {

  //Variable propre a l'étudiant (numero etudiant)
  std::string numIne;

public:

  //Le constructeur de la classe étudiant génére un numIne
  Etudiant(std::string n, std::string p, struct tm d)
  :Utilisateur(n,p,d)
  {
    numIne = "" + n.substr(0,5) + p.substr(0,3)+"3u";
  }

  //Affiche le nom et prenom de l'étudiant en console
  void print(){
        std::cout << "Etudiant " <<  nom << " " << prenom <<'\n';
  }

};
#endif
