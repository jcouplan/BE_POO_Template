#include "CapteurBouton.h"

void CapteurBouton::init(){
    pinMode(broche,INPUT);
}

float CapteurBouton::lireValeur(){
    return digitalRead(broche);
}