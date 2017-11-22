#ifndef ENSEIGNANT
#define ENSEIGNANT

#include "Utilisateur.hpp"
#include <string>


class Enseignant : public Utilisateur {

  //Numéro de l'enseignant
  std::string numEns;


public:
  
  Etudiant(std::string n, std::string p, struct tm d)
  :Utilisateur(n,p,d)
  {
    numIne = "test_"+nom;
  }

};
#endif
