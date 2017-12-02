#ifndef ETUDIANT
#define ETUDIANT

#include "Utilisateur.hpp"
#include <string>
#include <ostream>
#include <iostream>


class Etudiant : public Utilisateur {

  std::string numIne;

public:

  Etudiant(std::string n, std::string p, struct tm d)
  :Utilisateur(n,p,d)
  {
    numIne = "" + n.substr(0,5) + p.substr(0,3)+"3u";
  }

  void print(){
        std::cout << "Etudiant " <<  nom << " " << prenom <<'\n';
  }

};
#endif
