#ifndef CAPTEURSON_H
#define CAPTEURSON_H

#include "Capteur.h"

class CapteurSon : public Capteur {
public:
    CapteurSon(String n, int b) : Capteur(n, b) {}
    void init();
    float lireValeur();
};

#endif