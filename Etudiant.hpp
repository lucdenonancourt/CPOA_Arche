#ifndef ETUDIANT
#define ETUDIANT

#include "Utilisateur.hpp"


class Etudiant : public Utilisateur {

  std::string numIne;


protected:
  Etudiant(std::string nom, std::string prenom, struct tm date)
 
