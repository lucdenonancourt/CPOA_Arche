#ifndef UTILISATEURABSTRACTFACTORY
#define UTILISATEURABSTRACTFACTORY

#include <map>
#include <string>
#include "Utilisateur.hpp"


class UtilisateurAbstratFactory 
{
protected:
  
       static std::map<std::string,Utilisateur*> m_map;

public:
        //Fonction qui associe clé <=> Utilisateur
        virtual static void Register(const std::string& key,Utilisateur* obj);

        //Fonction qui créer les Utilisateur (en fonction du type key)
         virtual Utilisateur* Create(const std::string& key) const;
};

#endif