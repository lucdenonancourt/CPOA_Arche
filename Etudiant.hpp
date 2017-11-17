#ifndef ETUDIANT
#define ETUDIANT

#include "Utilisateur.hpp"


class Etudiant : public Utilisateur {

  std::string numIne;


protected:
  Etudiant(std::string n, std::string p, struct tm d)
  {
    id = "test";
    nom = n;
    prenom = p;
    dateNaiss = d;
    numIne = id+"_"+nom;
  }

 
