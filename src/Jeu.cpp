#include "Jeu.h"
#include "Joueur.h"
#include "Ordinateur.h"
#include <iostream>

Jeu::Jeu(ModeJeu* mode) : mode(mode) {
    joueur1 = new JoueurHumain("Nom du joueur 1");
    char choix;
    std::cout << "Voulez-vous jouer contre un autre joueur (j) ou contre l'IA (i) ? ";
    std::cin >> choix;

    if (choix == 'j') {
        joueur2 = new JoueurHumain("Nom du joueur 2");
    } else {
        joueur2 = new Ordinateur("Nom de l'IA");
    }

    plateau1 = new Plateau();
    plateau2 = new Plateau();
}

Jeu::~Jeu() {
    delete mode;
    delete joueur1;
    delete joueur2;
    delete plateau1;
    delete plateau2;
}

void Jeu::jouer() {
    mode->initialiser();
    while (!estTermine()) {
        std::pair<int, int> coup;
        if (dynamic_cast<Ordinateur*>(joueur2)) {
            coup = joueur2->choisirCoup();
        } else {
            coup = joueur1->choisirCoup();
        }
        mode->jouerTour(coup); 
        mode->afficherPlateau();
    }
}

bool Jeu::estTermine() {
    return joueur1->tousLesNaviresCoules() || joueur2->tousLesNaviresCoules();
}