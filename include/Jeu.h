#ifndef JEU_H
#define JEU_H

#include "Joueur.h"
#include "Plateau.h"
#include "ModeJeu.h"  // Incluez le fichier d'en-tête pour ModeJeu

class Jeu {
public:
    Jeu(ModeJeu* mode);  // Modifiez le constructeur pour prendre un ModeJeu*
    ~Jeu();
    bool estTermine();

    void jouer();  // Remplacez jouerJoueurVsJoueur et jouerJoueurVsOrdinateur par une seule méthode jouer

private:
    ModeJeu* mode;  // Ajoutez un membre pour le mode de jeu
    Joueur* joueur1;
    Joueur* joueur2;
    Plateau* plateau1;
    Plateau* plateau2;
};

#endif // JEU_H