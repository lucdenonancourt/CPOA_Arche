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
  Utilisateur *etu = factory->creerUtilisateur("Luc", "de Nonancourt");
  etu->print();

  //Enseignant
  factory = new EnseignantConcreteFactory;
  etu = factory->creerUtilisateur("Hugo", "Brecourt");
  etu->print();

  //Administrateur
  factory = new AdministrateurConcreteFactory;
  etu = factory->creerUtilisateur("Marvin", "Fornito");
  etu->print();

  struct tm date;
  date.tm_year = 95;
  date.tm_mon = 1;
  date.tm_mday = 12;

  //On créer un cours
  Cours *c = new Cours("CPOA", "Conception", date, date, date, 200);
  std::cout << *c << "\n";




  return 0;
}
