#include "rettangolo.h"
#include <iostream>
using namespace std;

int main(){
    rettangolo r;
    int a,b;
    cout << "inserisci base e altezza del rettangolo: ";
    cin >> b >> a;
    r.setbase(b);
    r.setaltezza(a);
    r.area();
    r.perimetro();
    r.diagonale();
    cout << "Area: " << r.area() << endl;
    cout << "Perimetro: " << r.perimetro() << endl;
    cout << "Diagonale: " << r.diagonale() << endl;
    return 0;
}