#ifndef ETUDIANT
#define ETUDIANT

#include "Utilisateur.hpp"
#include <string>
#include <ostream>
#include <iostream>


class Etudiant : public Utilisateur {

  std::string numIne;
  friend std::ostream& operator<<(std::ostream&, const Etudiant&);

public:
  
  Etudiant(std::string n, std::string p, struct tm d)
  :Utilisateur(n,p,d)
  {
    numIne = "" + n.substr(0,5) + p.substr(0,3)+"3u";
  }

  
};

std::ostream& operator<<(std::ostream &strm, const Etudiant &a) {
  return strm << "Etudiant(" << a.nom << ", " << a.prenom << ", " << a.numIne << ")";
}

#endif
