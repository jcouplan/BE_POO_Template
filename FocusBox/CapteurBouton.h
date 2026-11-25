#ifndef CAPTEURBOUTON_H
#define CAPTEURBOUTON_H

#include "Capteur.h"

class CapteurBouton : public Capteur {
public:
    CapteurBouton(String n, int b) : Capteur(n, b) {}
    void init();
    float lireValeur();
};

#endif