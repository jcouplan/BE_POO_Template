#ifndef LED_H
#define LED_H

#include "Actionneur.h"

class Led : public Actionneur {
public:
    Led(int broche);

    void init() override;
    void activer() override;
    void desactiver() override;
};

#endif