#ifndef ENSEIGNANT
#define ENSEIGNANT

#include "Utilisateur.hpp"
#include <string>


class Enseignant : public Utilisateur {

  //Numéro de l'enseignant
  std::string numEns;


public:
  
  Enseignant(std::string numE, std::string prenom, struct tm dateNais)
  :Utilisateur(n,p,d)
  {
    numIne = "test_"+nom;
  }

};
#endif
