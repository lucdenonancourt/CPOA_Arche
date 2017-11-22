#ifndef ENSEIGNANT
#define ENSEIGNANT

#include "Utilisateur.hpp"
#include <string>
#include <ostream>



class Enseignant : public Utilisateur {

  //Numéro de l'enseignant
  std::string numEns;

  friend std::ostream& operator<<(std::ostream&, const Enseignant&);


public:
  
  Enseignant(std::string n, std::string pre, struct tm dateN)
  :Utilisateur(n,pre,dateN)
  {
    numEns = "testEns_"+nom;
    prenom = pre;
    nom = n;
    dateNaiss = dateN;
    
  }

};

std::ostream& operator<<(std::ostream &strm, const Enseignant &e) {
  return strm << "Enseignant(" << e.nom << ", " << e.prenom << ", " 
	      << e.numEns << ")";
}

#endif
