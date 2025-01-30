#include "LED.h"
#include "PULSANTE.h"

// Implementazione della classe LED
LED::LED(int pin) {
  this->pin = pin;
  pinMode(pin, OUTPUT);
}

void LED::accendi() {
  digitalWrite(pin, HIGH);
  stato = true;
}

void LED::spegni() {
  digitalWrite(pin, LOW);
  stato = false;
}

// Implementazione della classe PULSANTE
PULSANTE::PULSANTE(int pin) {
  this->pin = pin;
  pinMode(pin, INPUT_PULLUP);
}

bool PULSANTE::press() {
  return digitalRead(pin) == LOW;
}

void LED::lampeggio(int numero,int durata){
  for(int i = 0; i < numero; i++){
    accendi();
    delay(durata);
    spegni();
    delay(durata);
  }
}

void LED::accendi(int durata){
  accendi();
  delay(durata);
  spegni();
}
void LED::spegni(int durata){
  delay(durata);
  spegni();
}

void LED::inverti(){
  if(stato == true){
    spegni();
  }else if(stato == 0) {
      accendi();
      delay(1000);
      }
}

bool PULSANTE::longPress() {
  if(press()) {
    long start = millis();
    while(press()) {
      long ending = millis();
      if(ending - start >= 2000) {
        return true;
      }
    }
  }
  return false;
}

void LED::test(int scelta){
  switch(scelta){
    case 1:
            accendi();
            break;
    case 2:
            lampeggio(3,200);
            break;
    case 3:
            spegni();
            break;
    case 4:
            accendi(3000);
            break;
  }

}