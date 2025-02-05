#include <iostream>
#include "rettangolo.h"

using namespace std;

int main() {
    rettangolo r1, r2;
    int a, b, c, d;

    cout << "Scrivi l'altezza e la base del primo rettangolo: ";
    cin >> a >> b;
    r1.setaltezza(a);
    r1.setbase(b);

    cout << "Scrivi l'altezza e la base del secondo rettangolo: ";
    cin >> c >> d;
    r2.setaltezza(c);
    r2.setbase(d);

    cout << "Il perimetro, l'area e la diagonale del rettangolo 1 sono:" << endl;
    r1.stampa();
    
    cout << "Il perimetro, l'area e la diagonale del rettangolo 2 sono:" << endl;
    r2.stampa();
    
    return 0;
}
