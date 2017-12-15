#ifndef ADMINISTRATEUR
#define ADMINISTRATEUR

#include "Utilisateur.hpp"
#include <string>
#include <ostream>
#include <iostream>


class Administrateur : public Utilisateur {

  std::string numAdmin;
  friend std::ostream& operator<<(std::ostream&, const Administrateur&);

public:
  
  Administrateur(std::string n, std::string p, struct tm d)
  :Utilisateur(n,p,d)
  {
    numAdmin =  "admin_" + n.substr(0,5) + p.substr(0,3);
  }

  
};

std::ostream& operator<<(std::ostream &strm, const Administrateur &a) {
  return strm << "Administrateur(" << a.nom << ", " << a.prenom << ", " << a.numAdmin << ")";
}

#endif
