#include "Application.h"

Application::Application()
    : bouton("Bouton", D5),
      potentiometre("Potentiometre", A0),
      touch("Touch", D6),
      ultrason("Ultrason", D7),

      led(D3),
      buzzer(D4),
      servo(D8),
      
      sessionEnCours(false),
      debutSession(0),
      dureeSession(0)
{
}

Application::~Application() {
}

void Application::init() {
    // 2. Demarre la liaison serie (Serial.begin)
    // 3. Appelle .init() sur chacun des 7 composants
    // 4. Ajoute un bloc try / catch pour verifier la coherence des capteurs au demarrage
}

void Application::run() {
    // 5. Mode attente (!sessionEnCours) :
    //    - Lire le potentiometre et convertir en duree (en ms)
    //    - Si bouton appuye : lancer la session (verrouiller servo, allumer led, noter millis())

    // 6. Mode travail (sessionEnCours) :
    //    - Verifier la distance ultrason (si trop loin -> activer buzzer, sinon desactiver)
    //    - Si temps ecoule (millis() - debutSession >= dureeSession) :
    //      deverrouiller servo, eteindre led, enregistrer dans historiqueSessions, repasser a false
}