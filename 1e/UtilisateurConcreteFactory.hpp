#ifndef UTILISATEURCONCRETEFACTORY
#define UTILISATEURCONCRETEFACTORY

/**
 * \file UtilisateurConcreteFactory.hpp
 * \brief Classe UtilisateurConcreteFactory
 * \version 1e
 * \date 14/12/2017
 *
 *
 */

#include <string>

/*! \class UtilisateurConcreteFactory
 * \brief Permet de creer des utilisateurs sans faire appel au classes 
 *
 *
 */

class UtilisateurConcreteFactory{

public:

  static Etudiant *creerEtudiant(std::string nom, std::string prenom){
    struct tm date;
    date.tm_year = 95;
    date.tm_mon = 1;
    date.tm_mday = 12;
    return new Etudiant(nom, prenom, date);
  };

  static Administrateur *creerAdministrateur(std::string nom, std::string prenom){
    struct tm date;
    date.tm_year = 95;
    date.tm_mon = 1;
    date.tm_mday = 12;
    return new Administrateur(nom, prenom, date);
  };

  static Enseignant *creerEnseignant(std::string nom, std::string prenom){
    struct tm date;
    date.tm_year = 95;
    date.tm_mon = 1;
    date.tm_mday = 12;
    return new Enseignant(nom, prenom, date);
  };

};
#endif
