/*
  Implementare la classe LED e Pulsante e prendendo spunto dal codice d’esempio utilizzando la programmazione ad oggetti, 
  implementare il metodo press per la classe Pulsante che deve restituire true quando il pulsante risulta premuto e false altrimenti.
  Testare le classi create in modo che alla pressione del pulsante si accenda il led e venga spento quando rilasciato
*/


// Classe LED
class LED {
  private:
    int pin; // Pin del LED
  public:
    // Costruttore: imposta la modalità del pin del LED come output
    LED(int pin) {
      this->pin = pin;
      pinMode(pin, OUTPUT);
    }
    accendi() {
      digitalWrite(pin, HIGH);
    }
    spegni() {
      digitalWrite(pin, LOW);
    }
};

  class PULSANTE{
  private:
    int pin;
  public:
      PULSANTE(int pin){
        this->pin = pin;
        pinMode(pin, INPUT_PULLUP);
      }
      bool press(){
        return digitalRead(pin) == LOW;
      }
  };
LED ledVerde(12);
LED ledBlue(13);
PULSANTE pulsante(2);

void setup() {
    //esegue il codice solo una volta
}

void loop() {
  if(pulsante.press()){
    ledVerde.spegni();
    ledBlue.accendi();
  }else{
    ledVerde.accendi();
    ledBlue.spegni();
  }
}
