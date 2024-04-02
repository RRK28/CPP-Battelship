#include "Plateau.h"

Plateau::Plateau() : grille(10, std::vector<int>(10, 0)) {}

void Plateau::placerBateau(int x, int y) {
    grille[x][y] = 1;  // Place un bateau à la position (x, y)
}

bool Plateau::estOccupe(int x, int y) {
    return grille[x][y] == 1;
}

void Plateau::afficherGrille() {
    for (const auto& ligne : grille) {
        for (int caseGrille : ligne) {
            std::cout << caseGrille << ' ';
        }
        std::cout << '\n';
    }
}