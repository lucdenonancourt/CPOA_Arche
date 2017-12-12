#ifndef COURS
#define COURS

/**
 * \file
 * \brief
 * \version
 * \date
 *
 *
 */

#include <string>
#include <ostream>

/*! \class
 * \brief
 *
 *
 */
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
  //Enseignant enseignant;


  friend std::ostream& operator<<(std::ostream&, const Cours&);


public:

  /*!
   * \brief Constructeur
   *
   * Constructeur de la classe
   *
   * \param n
   * \param p
   * \param d
   */
  Cours(std::string nomCours, std::string description, struct tm dateD, struct tm dateF, struct tm dateFinInsc, int capa)  {
    id_cours = nomCours;
    descr = description;
    ouvert = false;
    dateDebut = dateD;
    dateFin = dateF;
    dateFinInscription = dateFinInsc;
    nbPlaces = capa;
    enAttenteValidation = false;
    //enseignant = ens;
  }
  /*!
   * \brief Destructeur
   *
   *
   */
   ~Cours();

};

std::ostream& operator<<(std::ostream &strm, const Cours &c) {
  return strm << "Cours(" << c.id_cours << ")";
}

#endif
