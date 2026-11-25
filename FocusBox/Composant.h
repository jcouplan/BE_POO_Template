#ifndef COMPOSANT_H
#define COMPOSANT_H

#include <Arduino.h>

class Composant {
protected:
    String nom;
    int broche;

public:
    Composant(String n, int b) : nom(n), broche(b) {}
    virtual ~Composant() {}

    virtual void init() = 0;

    String getNom() {return nom;}
};

#endif