#include "CapteurUltrason.h"

void CapteurUltrason::init() {
    pinMode(broche, INPUT);
}

float CapteurUltrason::lireValeur() {
    pinMode(broche, OUTPUT);
    digitalWrite(broche, LOW);
    delayMicroseconds(2);
    digitalWrite(broche, HIGH);
    delayMicroseconds(10);
    digitalWrite(broche, LOW);

    pinMode(broche, INPUT);
    long duree = pulseIn(broche, HIGH, 30000);
    return duree * 0.034 / 2.0;
}