#ifndef ETUDIANT
#define ETUDIANT

/**
 * \file
 * \brief
 * \version
 * \date
 *
 *
 */

#include "Utilisateur.hpp"
#include <string>
#include <ostream>
#include <iostream>

/*! \class
 * \brief
 *
 *
 */
class Etudiant : public Utilisateur {

  std::string numIne; /*!< Variable propre a l'étudiant (numero etudiant) */

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
  Etudiant(std::string n, std::string p, struct tm d)
  :Utilisateur(n,p,d)
  {
    numIne = "" + n.substr(0,5) + p.substr(0,3)+"3u";
  }

  /*!
   * \brief Destructeur
   *
   *
   */
   ~Etudiant();

  /*!
   * \brief Affiche des informations sur l'objet
   */
  void print(){
        std::cout << "Etudiant " <<  nom << " " << prenom <<'\n';
  }

};
#endif
