#ifndef UTILISATEUR
#define UTILISATEUR

/**
 * \file
 * \brief
 * \version
 * \date
 *
 *
 */

#include <ctime>
#include <string>
#include <iostream>

/*! \class
 * \brief
 *
 *
 */
class Utilisateur {

protected:

  std::string nom; /*!< Nom de l'utilisateur */
  std::string prenom; /*!< Prenom de l'utilisateur */
  struct tm dateNaiss; /*!< Date de naissance de l'utilisateur */

  /*!
   * \brief Constructeur
   *
   * Constructeur de la classe
   *
   * \param n
   * \param p
   * \param d
   */
  Utilisateur(std::string n, std::string p, struct tm d){
    nom = n;
    prenom = p;
    dateNaiss = d;
  }

public:
  /*!
   * \brief Destructeur
   */
  ~Utilisateur() {}
  /*!
   * \brief Affiche des informations sur l'objet
   */
  virtual void print() = 0;

};

#endif
