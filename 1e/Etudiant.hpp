#ifndef ETUDIANT
#define ETUDIANT

/**
 * \file Etudiant.hpp
 * \brief Classe Etudiant
 * \version 1d
 * \date 10 décembre 2017
 *
 *
 */

#include "Utilisateur.hpp"
#include <string>
#include <ostream>
#include <iostream>

/*! \class Etudiant
 * \brief Classe Etudiant
 *
 *  Permet d'instancier un étudiant avec un numIne spécifique
 */
class Etudiant : public Utilisateur {

  std::string numIne; /*!< Variable propre a l'étudiant (numero etudiant) */

public:

  /*!
   * \brief Constructeur
   *
   * Constructeur de la classe Etudiant
   *
   * \param n Nom de l'étudiant
   * \param p Prénom de l'étudiant
   * \param d Date de naissance de l'étudiant
   */
  Etudiant(std::string n, std::string p, struct tm d)
  :Utilisateur(n,p,d)
  {
    numIne = "" + n.substr(0,5) + p.substr(0,3)+"3u";
  }

  /*!
   * \brief Destructeur
   *
   * Détruit un étudiant (appelé avant le déstructeur d'utilisateur)
   */
   ~Etudiant(){}

  /*!
   * \brief Affiche des informations sur l'Etudiant
   */
  void print(){
        std::cout << "Etudiant " <<  nom << " " << prenom <<'\n';
  }

};
#endif
