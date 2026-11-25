#ifndef SERVOMOTEUR_H
#define SERVOMOTEUR_H

#include "Actionneur.h"
#include <Servo.h>

class Servomoteur : public Actionneur {
private:
    Servo servo;

public:
    Servomoteur(int broche);

    void init() override;
    void activer() override;
    void desactiver() override;

    void verrouiller();
    void deverrouiller();
};

#endif