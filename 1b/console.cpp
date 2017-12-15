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



  return 0;
}
