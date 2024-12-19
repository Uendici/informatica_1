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
    // metodo che inverte lo stato del led
    void inverti(){
      //se il led è acceso allora aspetta 1 secondo e poi spegnilo 
      if(stato == true){
        delay(1000);
        spegni();
      }else{
        //se il led è spento allora aspetta 1 secondo e poi accendilo 
          delay(1000);
          accendi();        
      }
    }
    // Metodo per fare lampeggiare il led
    void lampeggio( int nrLampeggi){
      for(int i = 0; i < nrLampeggi; i++){
        accendi();
        delay(500);
        spegni();
        delay(500);
      }
    }

    // Metodo per decidere quale test fare
    void test(int numeroTest){
      switch(numeroTest){
        case 1:
          accendi();
          break;
        case 2:
          spegni();
          break;
        case 3:
          inverti();
          break;
        case 4:
          lampeggio(5);
          break;
        default:
          break;
      }
    }
};

LED led(11);

void setup() {
  led.test(4);
}

void loop() {
  led.test(1);

}