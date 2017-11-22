#ifndef UTILISATEUR
#define UTILISATEUR

#include <ctime>
#include <string>

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
  
  
};

#endif
