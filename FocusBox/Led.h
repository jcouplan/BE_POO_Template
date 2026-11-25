#ifndef LED_H
#define LED_H

#include "Actionneur.h"

class Led : public Actionneur {
public:
    Led(int broche);

    void init() ;
    void activer() ;
    void desactiver() ;
};

#endif