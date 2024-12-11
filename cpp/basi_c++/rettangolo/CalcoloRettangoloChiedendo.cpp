#include <iostream>
#include <cmath>
using namespace std;

class rettangolo {
public:
    double getbase(){
        return base;
    }
    double getaltezza(){
        return altezza;
    }
    void setbase(int base){
        this ->base = base;
    }
    void setaltezza(int altezza){
        this ->altezza = altezza;
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
    int a,b,c,d;
    cout << "scrivi l'altezza e la base del primo rettangolo: " << endl;
    cin >> a;
    cin >> b;
    r1.setaltezza(a);
    r1.setbase(b);
    cout << "scrivi l'altezza e la base del secondo rettangolo: " << endl;
    cin >> c;
    cin >> d;
    r2.setaltezza(c);
    r2.setbase(d);
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