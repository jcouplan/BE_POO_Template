#include "Servomoteur.h"

Servomoteur::Servomoteur(int broche)
    : Actionneur("Servomoteur", broche) {
}

void Servomoteur::init() {
    servo.attach(broche);
    deverrouiller();
}
void Servomoteur::activer() {
    servo.write(90);  // verrouille
}

void Servomoteur::desactiver() {
    servo.write(0);   // déverrouille
}