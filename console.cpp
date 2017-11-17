
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

#include "Utilisateur.hpp"
#include "Etudiant.hpp"

#include <ctime>


int main(int argc, char *argv[]){

  // Creation de toutes les sous-classes d'utilisateur
  struct tm date;
  date.tm_year = 95;
  date.tm_mon = 1;
  date.tm_mday = 12;

  Etudiant etud("Nom","Prenom",date);

  return 0;
}
