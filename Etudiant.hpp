#ifndef ETUDIANT
#define ETUDIANT

#include "Utilisateur.hpp"
#include <string>


class Etudiant : public Utilisateur {

  std::string numIne;


public:
  Etudiant(std::string n, std::string p, struct tm d)
  {
    nom = n;
    prenom = p;
    dateNaiss = d;
    numIne = "test_"+nom;
  }

};
#endif
