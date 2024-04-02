#include "Joueur.h"

Joueur::Joueur(std::string nom) : nom(nom) {}

Joueur::~Joueur() {}

std::string Joueur::getNom() const {
    return nom;
}

JoueurHumain::JoueurHumain(std::string nom) : Joueur(nom) {}

std::pair<int, int> JoueurHumain::choisirCoup() {
    // Implémentation pour un joueur humain
}