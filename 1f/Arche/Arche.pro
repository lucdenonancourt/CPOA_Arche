#-------------------------------------------------
#
# Project created by QtCreator 2017-12-05T13:19:08
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Arche
TEMPLATE = app


SOURCES += main.cpp mainwindow.cpp inscription.cpp proposercours.cpp/

HEADERS  += mainwindow.h Administrateur.hpp Enseignant.hpp Etudiant.hpp Utilisateur.hpp UtilisateurConcreteFactory.hpp Cours.hpp inscription.h proposercours.h/

FORMS    += mainwindow.ui inscription.ui proposercours.ui/
