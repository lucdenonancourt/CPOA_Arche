#ifndef COURS
#define COURS

#include <string>
#include <ostream>



class Cours {

  //Numéro du cours
  std::string id_cours;

  //Description du cours
  std::string descr;

  //Booléen etat du cours si il est ouvert ou fermé
  bool ouvert;

  //Date de début du cours
  struct tm dateDebut;

  //Date de fin du cours
  struct tm dateFin;

  //Date de fin des inscriptions
  struct tm dateFinInscription;

  //Capacité max de personne pour un cours
  int nbPlaces;

  //Boolean etat du cours si il est validé par l'admin ou non
  bool enAttenteValidation;


  friend std::ostream& operator<<(std::ostream&, const Cours&);


public:

  Cours(std::string nomCours, std::string description, struct tm dateD, struct tm dateF, struct tm dateFinInsc, int capa )  {
    id_cours = nomCours;
    descr = description;
    ouvert = false;
    dateDebut = dateD;
    dateFin = dateF;
    dateFinInscription = dateFinInsc;
    nbPlaces = capa;
    enAttenteValidation = false;
  }

};

std::ostream& operator<<(std::ostream &strm, const Cours &c) {
  return strm << "Cours(" << c.id_cours << ")";
}

#endif
