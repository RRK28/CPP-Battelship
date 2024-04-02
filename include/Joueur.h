#ifndef JOUEUR_H
#define JOUEUR_H

#include <string>
#include <vector>
#include "Bateau.h"  // Assurez-vous d'inclure votre classe Bateau

class Joueur {
public:
    Joueur(std::string nom);
    virtual ~Joueur();

    virtual std::pair<int, int> choisirCoup() = 0;
    bool tousLesNaviresCoules();

    std::string getNom() const;

protected:
    std::string nom;
    std::vector<Bateau> bateaux;  // Ajoutez une liste de bateaux
};

class JoueurHumain : public Joueur {
public:
    JoueurHumain(std::string nom);
    std::pair<int, int> choisirCoup() override;
};

#endif // JOUEUR_H