#ifndef PLATEAU_H
#define PLATEAU_H

#include <vector>
#include <random>
#include <iostream>

class Plateau {
public:
    Plateau();
    void placerBateau(int x, int y);
    bool estOccupe(int x, int y);
    void afficherGrille();

private:
    std::vector<std::vector<int>> grille;
};

#endif // PLATEAU_H