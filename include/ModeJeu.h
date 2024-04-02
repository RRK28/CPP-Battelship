#ifndef MODEJEU_H
#define MODEJEU_H

#include <utility>

class ModeJeu {
public:
    virtual ~ModeJeu() = default;
    virtual void initialiser() = 0;
    virtual void jouerTour(std::pair<int, int> coup) = 0;
    virtual void afficherPlateau() = 0;
};

#endif // MODEJEU_H