
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


#include <ctime>
#include <ostream>

int main(int argc, char *argv[]){

  // Creation de toutes les sous-classes d'utilisateur
  struct tm date;
  date.tm_year = 95;
  date.tm_mon = 1;
  date.tm_mday = 12;

  Etudiant etud("denonancourt","luc",date);

  Enseignant ens("brecourt","hugo",date);
  
  Administrateur admin("fornito","marvin",date);
  
  std::cout << etud << std::endl;
  std::cout << ens << std::endl;
  std::cout << admin << std::endl;

  return 0;
}
