#
# Makefile écrit par Johnny Sins
#

# fichiers utilisés pour le test dans la console et la documentation
TEST   = console.cpp 
FILES  = Administrateur.hpp  Enseignant.hpp  Etudiant.hpp  Utilisateur.hpp \
	  $(TEST)

# pour compiler le test des wraps dans la console
verif: 	$(FILES)
	g++ -Wall -ansi -o $@ $(TEST)
