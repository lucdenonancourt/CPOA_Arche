#ifndef ADMINISTRATEUR
#define ADMINISTRATEUR

/**
 * \file Administateur.hpp
 * \brief Classe administrateur
 * \version 1d
 * \date 10 decembre 2017
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
class Administrateur : public Utilisateur {

  std::string numAdmin; /*!< Numero d'administrateur */

public:

  /*!
   * \brief
   *
   * Constructeur de la classe
   *
   * \param n
   * \param p
   * \param d
   */
  Administrateur(std::string n, std::string p, struct tm d)
  :Utilisateur(n,p,d)
  {
    numAdmin =  "admin_" + n.substr(0,5) + p.substr(0,3);
  }

  /*!
   * \brief Destructeur
   *
   *
   */
   ~Administrateur();

  /*!
   * \brief Affiche des informations sur l'objet
   */
  void print(){
        std::cout << "Administrateur " <<  nom << " " << prenom <<'\n';
  }


};


#endif
