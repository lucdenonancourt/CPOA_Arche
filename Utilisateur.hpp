#ifndef UTILISATEUR
#define UTILISATEUR

#include <ctime>
#include <string>

class Utilisateur {

protected:

  std::string id;
  std::string nom;
  std::string prenom;
  struct tm dateNaiss;

public:
  ///destructeur.
  virtual ~Utilisateur() {}
  Utilisateur();
  
  
};

#endif
