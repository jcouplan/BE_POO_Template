#include "CapteurPotentiometre.h"

void CapteurPotentiometre::init(){
    pinMode(broche,INPUT);
}

float CapteurPotentiometre::lireValeur(){
    return analogRead(broche);
}