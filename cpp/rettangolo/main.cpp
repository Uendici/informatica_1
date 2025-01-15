#include <iostream>
#include "rettangolo.h"

#define RETTANGOLO_H

using namespace std;
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