#ifndef UTILISATEURCONCRETEFACTORY
#define UTILISATEURCONCRETEFACTORY


#include <iostream>
#include <iterator>

#include "UtilisateurAbstractFactory.hpp"

class UtilisateurConcreteFactory : public UtilisateurAbstractFactory {
  
public:
  
  //Fonction qui associe clé <=> Utilisateur
  static void Register(const std::string& key,Utilisateur* obj){
     if(m_map.find(key)==m_map.end())
     {
	//on ajoute l'objet dans la map
	m_map[key]=obj;
     }
  }

  //Fonction qui créer les Utilisateur (en fonction du type key)
  Utilisateur* Create(const std::string& key) const
  {
    Figure* tmp=0;
    std::map<string, Figure*>::const_iterator it=m_map.find(key);
    
    //si l'itérateur ne vaut pas map.end(), cela signifie que que la clé à été trouvée
    if(it!=m_map.end())
    {
      tmp=((*it).second)->Clone();
    }

     //on pourrait lancer une exeption si la clé n'a pas été trouvée

    return tmp;
  }
  
  
  
}

