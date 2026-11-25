#ifndef APPLICATION_H_
#define APPLICATION_H_

#include <Arduino.h>
#include <vector>
#include <stdexcept>
#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

// Capteurs
#include "CapteurTouch.h"
#include "CapteurUltrason.h"
#include "CapteurPotentiometre.h"
#include "CapteurBouton.h"

// Actionneurs
#include "Led.h"
#include "Buzzer.h"
#include "Servomoteur.h"

class Application {
private:
    CapteurBouton bouton;
    CapteurPotentiometre potentiometre;
    CapteurTouch touch;
    CapteurUltrason ultrason;

    Led led;
    Buzzer buzzer;
    Servomoteur servo;

    bool sessionEnCours;
    unsigned long debutSession;
    unsigned long dureeSession;
    
    std::vector<int> historiqueSessions;

public:
    Application();
    ~Application();

    void init();
    void run();
};

#endif