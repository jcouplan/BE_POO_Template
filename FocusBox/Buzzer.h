#ifndef BUZZER_H
#define BUZZER_H

#include "Actionneur.h"

class Buzzer : public Actionneur {
public:
    Buzzer(int broche);

    void init() ;
    void activer() ;
    void desactiver() ;
};

#endif