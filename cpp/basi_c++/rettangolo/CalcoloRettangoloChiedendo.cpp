#include <iostream>
using namespace std;

class rettangolo {
public:
    void getbase(){
        cin >> base;
    }
    void getaltezza(){
        cin >> altezza;
    }
    double calcolaPerimetro(){
        return 2*(base+altezza);
    }
    double calcolaArea(){
        return base*altezza;
    }
    void stampa(){
        cout << "perimetro: " << calcolaPerimetro() << endl; 
        cout << "area: " << calcolaArea() << endl;
    }
    private:
    int base;
    int altezza;
}; 


int main(){
    rettangolo r1,r2;
    cout << "inserisci la base e l'altezza del primo rettangolo" << endl;
    r1.getbase();
    r1.getaltezza();
    cout << "inserisci la base e l'altezza del secondo rettangolo" << endl;
    r2.getbase();
    r2.getaltezza();

    r1.calcolaPerimetro();
    r2.calcolaPerimetro();

    r1.calcolaArea();
    r2.calcolaArea();
    cout << "il perimetro e l'area del rettangolo 1 sono:" << endl;
    r1.stampa();
    cout << "il perimetro e l'area del rettangolo 2 sono:" << endl;
    r2.stampa();
    return 0;
}