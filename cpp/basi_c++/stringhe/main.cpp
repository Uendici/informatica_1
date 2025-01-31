#include <iostream>
#include <string>
using namespace std;

class Persona {

    public:
        string nome;
        string cognome;    
};

int main(){

    string p2 = "Gertrude";
    Persona p1;
    cout << "Inserisci il nome: ";
    cin >> p1.nome;
    //cout << "Inserisci il cognome: ";
    //cin >> p1.cognome;
    cout << "Ciao " << p1.nome << " " << p1.cognome << endl;
    if(p1.nome == p2){
        cout << "Ciao Gertrude" << endl;
    }else{
        cout << "Accesso negrato" << endl;
    }

}