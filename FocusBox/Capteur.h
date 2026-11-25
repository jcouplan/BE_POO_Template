#ifndef CAPTEUR_H
#define CAPTEUR_H

#include "Composant.h"

class Capteur : public Composant {
public:
    Capteur(String n, int b) : Composant(n, b) {}
    virtual ~Capteur() {}

    virtual float lireValeur() = 0;
};

#endif