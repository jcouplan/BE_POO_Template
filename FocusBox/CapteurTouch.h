#ifndef CAPTEURTOUCH_H
#define CAPTEURTOUCH_H

#include "Capteur.h"

class CapteurTouch : public Capteur {
public:
    CapteurTouch(String n, int b) : Capteur(n, b) {}
    void init();
    float lireValeur();
};

#endif