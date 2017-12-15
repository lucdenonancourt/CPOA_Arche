#
# Makefile écrit par Hugo Brecourt
#

# fichiers utilisés pour le test dans la console et la documentation
TEST   = console.cpp
FILES  = Etudiant.hpp  Enseignant.hpp Administrateur.hpp Utilisateur.hpp UtilisateurConcreteFactory.hpp Cours.hpp\
	  $(TEST)

# pour compiler le test des wraps dans la console
verif: 	$(FILES)
	g++ -Wall -ansi -o $@ $(TEST)
