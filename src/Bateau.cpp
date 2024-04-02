#include "Bateau.h"

Bateau::Bateau(int taille) : taille(taille), coupsRecus(0) {}

Bateau::~Bateau() {}

bool Bateau::estCoule() const {
    return coupsRecus >= taille;
}

void Bateau::touche() {
    coupsRecus++;
}