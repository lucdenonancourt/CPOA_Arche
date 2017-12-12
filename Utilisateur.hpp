#ifndef UTILISATEUR
#define UTILISATEUR

/**
 * \file Utilisateur.hpp
 * \brief Classe abstraite utilisateur
 * \version 1d
 * \date 10 décembre 2017
 *
 *
 */
#include <ctime>
#include <string>
#include <iostream>

/*! \class Utilisateur
 * \brief Classe utilisateur
 *
 *  Cette classe permet de creer un utilisateur (nom/prenom/date naissance)
 */
class Utilisateur {

protected:

  std::string nom; /*!< Nom de l'utilisateur */
  std::string prenom; /*!< Prenom de l'utilisateur */
  struct tm dateNaiss; /*!< Date de naissance de l'utilisateur */

  /*!
   * \brief Constructeur
   *
   * Constructeur de la classe Utilisateur
   *
   * \param n Nom de l'utilisateur
   * \param p Prénom de l'utilisateur
   * \param d Date de naissance de l'utilisateur
   */
  Utilisateur(std::string n, std::string p, struct tm d){
    nom = n;
    prenom = p;
    dateNaiss = d;
  }

public:
  /*!
   * \brief Destructeur
   *
   * Detruit un utilisateur (appelé apres le destructeur de la sous classe)
   */
  ~Utilisateur() {}

  /*!
   * \brief Affiche des informations sur l'objet
   */
  virtual void print() = 0;

};

#endif
