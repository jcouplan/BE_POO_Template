#ifndef BUZZER_H
#define BUZZER_H

#include "Actionneur.h"

class Buzzer : public Actionneur {
public:
    Buzzer(int broche);

    void init() override;
    void activer() override;
    void desactiver() override;
};

#endif