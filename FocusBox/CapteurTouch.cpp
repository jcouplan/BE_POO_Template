#include "CapteurTouch.h"

void CapteurTouch::init(){
    pinMode(broche,INPUT);
}

float CapteurTouch::lireValeur(){
    return digitalRead(broche);
}