#include <iostream>
using namespace std;

class divisione {

    public:
        void getNumeratore(){
            cin >> numeratore;
        }
        void getDenominatore(){
            cin >> denominatore;
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
    cout << "inserisci il numeratore e poi il denominatore della prima divisione" << endl;
    d1.getNumeratore();
    d1.getDenominatore();
    cout << "inserisci il numeratore e poi il denominatore della seconda divisione" << endl;
    d2.getNumeratore();
    d2.getDenominatore();
    d1.calcoloFrazione();
    d2.calcoloFrazione();

}