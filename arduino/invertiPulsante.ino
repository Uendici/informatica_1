/*
  Implementare la classe LED e Pulsante e prendendo spunto dal codice d’esempio utilizzando la programmazione ad oggetti, 
  implementare il metodo press per la classe Pulsante che deve restituire true quando il pulsante risulta premuto e false altrimenti.
  Testare le classi create in modo che alla pressione del pulsante si accenda il led e venga spento quando rilasciato
*/


// Classe LED
class LED {
  private:
    int pin; // Pin del LED
    bool stato = false;
  public:
    // Costruttore: imposta la modalità del pin del LED come output
    LED(int p) {
      pin = p;
      pinMode(pin, OUTPUT);
    }
    accendi() {
      digitalWrite(pin, HIGH);
      stato = true;
    }
    spegni() {
      digitalWrite(pin, LOW);
      stato = false;
    }
};

  class PULSANTE{
  private:
    bool pressione = false;
  public:
    PULSANTE(int p){
      pinMode(p, INPUT);
    }
    bool press(){
      if(digitalRead(2) == HIGH){
        pressione = true;
      }else{
        pressione = false;
      }
      return pressione;
    }
  };
LED ledVerde(12);
LED ledBlue(13);
PULSANTE bottone(2);

void setup() {
  
}

void loop() {
  if(bottone.press()){
    ledVerde.accendi();
    ledBlue.spegni();
  }else{
    ledVerde.spegni();
    ledBlue.accendi();
  }
}