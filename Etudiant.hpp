#ifndef ETUDIANT
#define ETUDIANT

#include "Utilisateur.hpp"
#include <string>


class Etudiant : public Utilisateur {

  std::string numIne;


public:
  
  Etudiant(std::string n, std::string p, struct tm d)
  :Utilisateur(n,p,d)
  {
    numIne = "test_"+n;
    prenom = p;
    nom = n;
    dateNaiss = d;
  }

};
#endif
