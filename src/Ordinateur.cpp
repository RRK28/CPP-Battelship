#include "Ordinateur.h"
#include <random>
#include "Plateau.h"

Ordinateur::Ordinateur(std::string nom) : Joueur(nom) {
    plateau = new Plateau();
    placerBateaux();
}

Ordinateur::~Ordinateur() {
    delete plateau;
}

std::pair<int, int> Ordinateur::choisirCoup() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 9);

    int x = dis(gen);
    int y = dis(gen);

    return std::make_pair(x, y);
}

void Ordinateur::placerBateaux() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 9);

    for (int i = 0; i < 5; i++) {
        int x, y;
        do {
            x = dis(gen);
            y = dis(gen);
        } while (plateau->estOccupe(x, y));
        plateau->placerBateau(x, y);
    }
}