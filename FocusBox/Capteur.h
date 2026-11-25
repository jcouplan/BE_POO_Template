#ifndef CAPTEUR_H
#define CAPTEUR_H

#include "Composant.h"
#include <Arduino.h>

class Capteur : public Composant {

public:
    Capteur(String n, int b) : nom(n), broche(b) {}
    virtual ~Capteur() {}

    virtual float lireValeur() = 0;

    String getNom() {return nom;}
};

#endif