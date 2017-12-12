#ifndef ENSEIGNANT
#define ENSEIGNANT

/**
 * \file
 * \brief
 * \version
 * \date
 *
 *
 */

#include "Utilisateur.hpp"
#include "Cours.hpp"
#include <string>
#include <ostream>


/*! \class
 * \brief
 *
 *
 */
class Enseignant : public Utilisateur {

  std::string numEns; /*!< Numéro de l'enseignant */

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
   *
   */
   ~Enseignant();

  /*!
   * \brief Affiche des informations sur l'objet
   *
   * \param
   *
   * \return
   */
  Cours* proposerCours(std::string nomCours, std::string description, struct tm dateDebut, struct tm dateFin, struct tm dateFinInsc, int nbPLaces){
    return new Cours(nomCours, description, dateDebut, dateFin, dateFinInsc, nbPLaces);
  }

  /*!
   * \brief Affiche des informations sur l'objet
   */
  void print(){
        std::cout << "Enseignant " <<  nom << " " << prenom <<'\n';
  }

};


#endif
