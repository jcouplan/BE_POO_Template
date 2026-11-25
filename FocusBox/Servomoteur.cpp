#include "Servomoteur.h"

Servomoteur::Servomoteur(int broche)
    : Actionneur("Servomoteur", broche) {
}

void Servomoteur::init() {
    servo.attach(broche);
    deverrouiller();
}

void Servomoteur::activer() {
    verrouiller();
}

void Servomoteur::desactiver() {
    deverrouiller();
}

void Servomoteur::verrouiller() {
    servo.write(90);
}

void Servomoteur::deverrouiller() {
    servo.write(0);
}