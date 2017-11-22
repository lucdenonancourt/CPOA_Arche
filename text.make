#
# Makefile écrit par Hugo Brecourt
#

# fichiers utilisés pour le test dans la console et la documentation
TEST   = console.cpp 
FILES  = Etudiant.hpp  Utilisateur.hpp \
	  $(TEST)

# pour compiler le test des wraps dans la console
verif: 	$(FILES)
	g++ -Wall -ansi -o $@ $(TEST)
