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
#include "UtilisateurConcreteFactory.hpp"
#include "Cours.hpp"


#include <ctime>
#include <ostream>
#include <stdio.h>
//Utile pour debugger les classes
#include <typeinfo>
#include <string>

int main(int argc, char *argv[]){
  //Etudiant
  Etudiant *etudiant = UtilisateurConcreteFactory::creerEtudiant("Luc", "de Nonancourt");
  etudiant->print();

  //Enseignant
  Enseignant *enseignant = UtilisateurConcreteFactory::creerEnseignant("Hugo", "Brecourt");
  enseignant->print();

  //Administrateur
  Administrateur *administrateur = UtilisateurConcreteFactory::creerAdministrateur("Marvin", "Fornito");
  administrateur->print();

  struct tm date;
  date.tm_year = 95;
  date.tm_mon = 1;
  date.tm_mday = 12;

  //On créer un cours
  Cours *c = enseignant->proposerCours("CPOA", "Conception", date, date, date, 200);
  c->print();

  //On delete tout
  delete administrateur;
  delete c;
  delete enseignant;
  delete etudiant;

  return 0;
}
