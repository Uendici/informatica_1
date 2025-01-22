#include "LED.h"
#include "PULSANTE.h"
/*
Implementare nella classe Pulsante il metodo longPress, che restituisce true in caso di pressione prolungata del pulsante (almeno 2 sec) altrimenti false.
Testare il metodo creato invertendo lo stato del led2 ad ogni pressione prolungata del pulsante

*/
// Creazione degli oggetti
LED ledVerde(13);
PULSANTE pulsanteVerde(12);
LED ledBlue(11);
PULSANTE pulsanteBlu(10);
LED ledYellow(11);
PULSANTE pulsanteYellow(10);
LED ledRed(11);
PULSANTE pulsanteRed(10);


void setup() {
  ledVerde.test(2);
}

void loop() {
  if(pulsanteBlu.longPress()){
    ledBlue.inverti();
  }
}
