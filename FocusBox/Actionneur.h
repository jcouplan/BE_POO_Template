#ifndef ACTIONNEUR_H
#define ACTIONNEUR_H

#include "Composant.h"

class Actionneur : public Composant {
public:
    Actionneur(String nom, int broche);

    virtual void activer() = 0;
    virtual void desactiver() = 0;
};

#endif