#ifndef BATEAU_H
#define BATEAU_H

class Bateau {
public:
    Bateau(int taille);
    ~Bateau();

    bool estCoule() const;
    void touche();

private:
    int taille;
    int coupsRecus;
};

#endif // BATEAU_H