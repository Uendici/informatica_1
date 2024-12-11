#include <iostream>
using namespace std;

class divisione {

    public:
        double getNumeratore(){
            return numeratore;
        }
        double getDenominatore(){
            return denominatore;
        }
        void setNumeratore(double numeratore){
            this -> numeratore = numeratore;
        }
        void setDenominatore(double denominatore){
            this -> denominatore = denominatore;
        }
        double calcoloFrazione(){
            return numeratore / denominatore;
        }
        void stampa(){
            cout << "il risultato della frazione è: " <<   calcoloFrazione() << endl;
        }
    private:
        double numeratore;
        double denominatore;
};

int main(){
    
    divisione d1,d2;

    d1.setNumeratore(4);
    d1.setDenominatore(2);
    d2.setNumeratore(9);
    d2.setDenominatore(3);

    d1.calcoloFrazione();
    d2.calcoloFrazione();
    
    d1.stampa();
    d2.stampa();
}