#ifndef CAPTEURPOTENTIOMETRE_H
#define CAPTEURPOTENTIOMETRE_H

#include "Capteur.h"

class CapteurPotentiometre : public Capteur {
public:
    CapteurPotentiometre(String n, int b) : Capteur(n, b) {}
    void init();
    float lireValeur();
};

#endif