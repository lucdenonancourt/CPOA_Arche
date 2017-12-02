#ifndef ENSEIGNANT
#define ENSEIGNANT

#include "Utilisateur.hpp"
#include <string>
#include <ostream>



class Enseignant : public Utilisateur {

  //Numéro de l'enseignant
  std::string numEns;



public:

  Enseignant(std::string n, std::string pre, struct tm dateN)
  :Utilisateur(n,pre,dateN)
  {
    numEns = "enseig_"+nom;
    prenom = pre;
    nom = n;
    dateNaiss = dateN;

  }

  //Affiche le nom et prenom de l'enseignant en console
  void print(){
        std::cout << "Enseignant " <<  nom << " " << prenom <<'\n';
  }

};


#endif
