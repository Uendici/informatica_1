#ifndef LED_H
#define LED_H

#include <Arduino.h>

class LED {
  private:
    int pin; // Pin del LED
    bool stato = false;
  public:
    LED(int pin);       // Costruttore
    void lampeggio(int numero, int durata);
    void accendi(); 
    void spegni(); 
    void accendi(int durata);
    void spegni(int durata);
    void test(int scelta);
    void inverti();
    
};

#endif
