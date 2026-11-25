#include "Buzzer.h"
#include <Arduino.h>

Buzzer::Buzzer(int broche)
    : Actionneur("Buzzer", broche) {
}

void Buzzer::init() {
    pinMode(broche, OUTPUT);
    desactiver();
}

void Buzzer::activer() {
    digitalWrite(broche, HIGH);
}

void Buzzer::desactiver() {
    digitalWrite(broche, LOW);
}