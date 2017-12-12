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


/*! \class Administateur
 * \brief Classe concrete Administateur
 *
 * Permet d'instancier un utilisateur Administateur avec un numAdmin spécifique
 */
class Administrateur : public Utilisateur {

  std::string numAdmin; /*!< Numero d'administrateur */

public:

  /*!
   * \brief Constructeur de la classe Administateur
   *
   *
   * \param n Nom de l'Administateur
   * \param p Prénom de l'administrateur
   * \param d Date de naissance de l'administrateur
   */
  Administrateur(std::string n, std::string p, struct tm d)
  :Utilisateur(n,p,d)
  {
    numAdmin =  "admin_" + n.substr(0,5) + p.substr(0,3);
  }

  /*!
   * \brief Destructeur
   *
   * Destructeur de l'administrateur (appelè avant celui d'Utilisateur)
   */
   ~Administrateur();

  /*!
   * \brief Affiche des informations sur l'Administrateur
   */
  void print(){
        std::cout << "Administrateur " <<  nom << " " << prenom <<'\n';
  }


};


#endif
