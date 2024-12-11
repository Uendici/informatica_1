#include <iostream>
#include <cmath>
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
    
    double diagonale() {
        return sqrt(pow(base,2) + pow(altezza,2));
    }
    void stampa(){
        cout << "perimetro: " << calcolaPerimetro() << endl; 
        cout << "area: " << calcolaArea() << endl;
        cout << "diagonale: " << diagonale() << endl;
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
    cout << "il perimetro, l'area e la diagonale del rettangolo 1 sono:" << endl;
    r1.stampa();
    cout << "il perimetro, l'area e diagonale del rettangolo 2 sono:" << endl;
    r2.stampa();
    return 0;
}