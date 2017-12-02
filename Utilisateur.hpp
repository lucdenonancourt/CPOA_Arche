#ifndef UTILISATEUR
#define UTILISATEUR

#include <ctime>
#include <string>
#include <iostream>

class Utilisateur {

protected:

  std::string nom;
  std::string prenom;
  struct tm dateNaiss;

  Utilisateur(std::string n, std::string p, struct tm d){
    nom = n;
    prenom = p;
    dateNaiss = d;
  }

public:
  ///destructeur.
  virtual ~Utilisateur() {}
  virtual void print() = 0;

};

#endif
