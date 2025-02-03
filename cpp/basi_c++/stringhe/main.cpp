#include <iostream>
#include <string>
using namespace std;

class PERSONA {

    public:
        string nome;
        string cognome;    
};

int main(){

    string p2 = "Gertrude";
    string p3 = "Gambirasio";
    string p4 = "gertrude";
    string p5 = "gambirasio";
    string pcopia;
    PERSONA p1;

    cout << "Inserisci il nome e cognome: ";
    cin >> p1.nome;
    cin >> p1.cognome;
    if(p1.nome == p2 && p1.cognome == p3 || p1.nome == p4 && p1.cognome == p5){
        cout << "Ciao Gertrude Gambirasio" << endl;
    }else{
        cout << "Accesso negrato" << endl;
    }
        pcopia = p1.nome;
        cout << "Il nome copiato è: " << pcopia << endl;
}