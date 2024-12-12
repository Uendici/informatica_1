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

    // Metodo per accendere il LED
    void accendi() {
      digitalWrite(pin, HIGH);
      stato = true;
    }

    // Metodo per spegnere il LED
    void spegni() {
      digitalWrite(pin, LOW);
      stato = false;
    }
};

  class PULSANTE{
  private:
    bool pressione;
  public:
    PULSANTE(int p){
      pressione = p;
      pinMode(p, INPUT);
    }
    bool press(){
      return digitalWrite(pressione) == LOW;
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