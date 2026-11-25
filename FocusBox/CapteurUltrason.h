#ifndef CAPTEURULTRASON_H
#define CAPTEURULTRASON_H

#include "Capteur.h"

class CapteurUltrason : public Capteur {
public:
    CapteurUltrason(String n, int b) : Capteur(n, b) {}
    void init();
    float lireValeur();
};

#endif