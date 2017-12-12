#ifndef COURS
#define COURS

/**
 * \file Cours.hpp
 * \brief Classe cours
 * \version 1d
 * \date 10 décembre 2017
 *
 *
 */

#include <string>
#include <ostream>

/*! \class Cours
 * \brief Classe cours
 *
 * Permet de creer un cours en attente de validation, et par la suite de l'ajouter
 * a l'application
 *
 */
class Enseignant;
class Cours {

  std::string id_cours; /*!< Numéro du cours */

  std::string descr; /*!< Description du cours */

  bool ouvert; /*!< Booléen etat du cours si il est ouvert ou fermé */

  struct tm dateDebut; /*!< Date de début du cours */

  struct tm dateFin; /*!< Date de fin du cours */

  struct tm dateFinInscription; /*!< Date de fin des inscriptions */

  int nbPlaces; /*!< Capacité max de personne pour un cours */

  bool enAttenteValidation; /*!< Boolean etat du cours si il est validé par l'admin ou non */

  //Enseignant proposant le cours
  Enseignant* enseignant;


public:

  /*!
   * \brief Constructeur
   *
   * Constructeur de la classe COurs
   *
   * \param nomCours Nom du cours proposé
   * \param description Description du Cours
   * \param dateD date de début du Cours
   * \param dateF date de fin du cours
   * \param dateFinInsc Date de fin d'inscriptions
   * \param capa Capacité d'étudiant maximal du cours
   */
  Cours(std::string nomCours, std::string description, struct tm dateD, struct tm dateF, struct tm dateFinInsc, int capa, Enseignant* ens)  {
    id_cours = nomCours;
    descr = description;
    ouvert = false;
    dateDebut = dateD;
    dateFin = dateF;
    dateFinInscription = dateFinInsc;
    nbPlaces = capa;
    enAttenteValidation = false;
    enseignant = ens;
  }
  /*!
   * \brief Destructeur
   *
   * Détruit le cours
   */
   ~Cours();

   /*!
    * \brief Affiche des informations sur le cours
    */
   void print(){
         std::cout << "Cours " <<  id_cours << " " << descr << " " << enseignant <<'\n';
   }

};

#endif
