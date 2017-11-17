
/** @example console.cpp
 **
 ** Ce programme teste les classes héritant de @ref Utilisateur.
 ** 
 ** @version 1a
 **
 ** @author Luc de Nonancourt
 **/

#include "Utilisateur.hpp"


int main(int argc, char *argv[]) {
  // Creation de toutes les sous-classes d'utilisateur
  Etudiant etud;
  Enseignant ens;
  Administrateur admin;
  // 
  etud.affiche(std::cout); //On vérifie l'étudiant
  ens.affiche(std::cout); //On verifie l'enseignant
  admin.affiche(std::cout); //On verifie l'administrateur

}
