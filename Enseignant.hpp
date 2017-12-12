#ifndef ENSEIGNANT
#define ENSEIGNANT

/**
 * \file Enseignant.hpp
 * \brief Classe enseignant
 * \version 1d
 * \date 10 décembre 2017
 *
 *
 */

#include "Utilisateur.hpp"
#include "Cours.hpp"
#include <string>
#include <ostream>


/*! \class Enseignant
 * \brief Classe enseignant
 *
 * Permet d'instancier un enseignant avec un numEns spécifique
 */
class Enseignant : public Utilisateur {

  std::string numEns; /*!< Numéro de l'enseignant */

public:

  /*!
   * \brief Constructeur
   *
   * Constructeur de la classe Enseignant
   *
   * \param n nom de l'enseignant
   * \param p prenom de l'enseignant
   * \param d date de naissance de l'enseignant
   */
  Enseignant(std::string n, std::string pre, struct tm dateN)
  :Utilisateur(n,pre,dateN)
  {
    numEns = "enseig_"+nom;
    prenom = pre;
    nom = n;
    dateNaiss = dateN;
  }

  /*!
   * \brief Destructeur
   *
   *  Detruit un enseignant (appelè avant le déstructeur utilisateur)
   */
   ~Enseignant();

  /*!
   * \brief Permet a l'enseignant de creer un cours
   *
   * \param nomCours Nom du cours proposé
   * \param description Description du Cours
   * \param dateD date de début du Cours
   * \param dateF date de fin du cours
   * \param dateFinInsc Date de fin d'inscriptions
   * \param capa Capacité d'étudiant maximal du cours
   *
   * \return pointeur vers le cours créé
   */
  Cours* proposerCours(std::string nomCours, std::string description, struct tm dateDebut, struct tm dateFin, struct tm dateFinInsc, int nbPLaces){
    return new Cours(nomCours, description, dateDebut, dateFin, dateFinInsc, nbPLaces);
  }

  /*!
   * \brief Affiche des informations sur l'Enseignant
   */
  void print(){
        std::cout << "Enseignant " <<  nom << " " << prenom <<'\n';
  }

};


#endif
