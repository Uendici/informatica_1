#ifndef PULSANTE_H
#define PULSANTE_H

#include <Arduino.h>

class PULSANTE {
  private:
    int pin; // Pin del pulsante
  public:
    PULSANTE(int pin);  // Costruttore
    bool press();       // Restituisce true se il pulsante è premuto
    bool longPress();
};

#endif
