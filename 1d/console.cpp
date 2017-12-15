/** @example console.cpp
 **
 ** Ce programme teste les classes héritant de @ref Utilisateur.
 **
 ** À compiler avec la commande 'make -f text.make'.
 **
 ** @version 1a
 **
 ** @author Luc de Nonancourt
 **/

#include "Etudiant.hpp"
#include "Enseignant.hpp"
#include "Administrateur.hpp"
#include "UtilisateurAbstractFactory.hpp"
#include "Cours.hpp"


#include <ctime>
#include <ostream>
#include <stdio.h>
//Utile pour debugger les classes
#include <typeinfo>
#include <string>

int main(int argc, char *argv[]){
  //On utilise maintenant la factory pour creer des utilisateurs sans faire
  //Appel au classes "concrete"
  UtilisateurAbstractFactory *factory;

  //Etudiant
  factory = new EtudiantConcreteFactory;
  Utilisateur *etudiant = factory->creerUtilisateur("Luc", "de Nonancourt");
  etudiant->print();

  //Enseignant
  factory = new EnseignantConcreteFactory;
  Utilisateur *enseignant = factory->creerUtilisateur("Hugo", "Brecourt");
  enseignant->print();

  //Administrateur
  factory = new AdministrateurConcreteFactory;
  Utilisateur *administrateur = factory->creerUtilisateur("Marvin", "Fornito");
  administrateur->print();

  struct tm date;
  date.tm_year = 95;
  date.tm_mon = 1;
  date.tm_mday = 12;

  //On créer un cours
  Enseignant* ens = static_cast<Enseignant*>(enseignant);
  Cours *c = ens->proposerCours("CPOA", "Conception", date, date, date, 200);
  c->print();
  std::cout << ens << std::endl;




  return 0;
}
