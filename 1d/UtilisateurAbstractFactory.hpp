#ifndef UTILISATEURABSTRACTFACTORY
#define UTILISATEURABSTRACTFACTORY

/**
 * \file
 * \brief
 * \version
 * \date
 *
 *
 */

#include <string>

/*! \class
 * \brief
 *
 *
 */
class UtilisateurAbstractFactory
{

  public:
    virtual Utilisateur *creerUtilisateur(std::string nom, std::string prenom) = 0;

};
class EtudiantConcreteFactory : public UtilisateurAbstractFactory {

public:

    Utilisateur *creerUtilisateur(std::string nom, std::string prenom){
      struct tm date;
      date.tm_year = 95;
      date.tm_mon = 1;
      date.tm_mday = 12;
      return new Etudiant(nom, prenom, date);
    };

};

class AdministrateurConcreteFactory : public UtilisateurAbstractFactory {

public:

    Utilisateur *creerUtilisateur(std::string nom, std::string prenom){
      struct tm date;
      date.tm_year = 95;
      date.tm_mon = 1;
      date.tm_mday = 12;
      return new Administrateur(nom, prenom, date);
    };

};

class EnseignantConcreteFactory : public UtilisateurAbstractFactory {

public:

    Utilisateur *creerUtilisateur(std::string nom, std::string prenom){
      struct tm date;
      date.tm_year = 95;
      date.tm_mon = 1;
      date.tm_mday = 12;
      return new Enseignant(nom, prenom, date);
    };

};


#endif
