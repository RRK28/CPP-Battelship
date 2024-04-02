#ifndef ORDINATEUR_H
#define ORDINATEUR_H

#include "Joueur.h"
#include "Plateau.h"
#include <string>
#include <utility>

class Ordinateur : public Joueur {
public:
    Ordinateur(std::string nom);
    ~Ordinateur();
    std::pair<int, int> choisirCoup() override;
    void placerBateaux();

private:
    Plateau* plateau;
};

#endif // ORDINATEUR_H