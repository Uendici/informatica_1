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
LED ledYellow(9);
PULSANTE pulsanteYellow(8);
LED ledRed(7);
PULSANTE pulsanteRed(6);


void setup() {
  ledVerde.test(2);
  ledBlue.test(3);
  ledYellow.test(1);
  ledRed.test(4);
}

void loop() {
  if(pulsanteBlu.longPress()){
    ledBlue.inverti();
  }
}
