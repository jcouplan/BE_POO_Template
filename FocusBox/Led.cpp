#include "Led.h"
#include <Arduino.h>

Led::Led(int broche)
    : Actionneur("LED", broche) {
}

void Led::init() {
    pinMode(broche, OUTPUT);
    desactiver();
}

void Led::activer() {
    digitalWrite(broche, HIGH);
}

void Led::desactiver() {
    digitalWrite(broche, LOW);
}