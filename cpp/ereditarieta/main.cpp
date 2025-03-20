#include "rettangolo.h"
#include "rettangolo.cpp"
#include <iostream>

using namespace std;
int main(){
    quadrato q1;
    rettangolo r1;

    int a,b,c;

    a = q1.calcolaPerimetro();
    cout << "il perimetro del quadrato è: " << a << endl;
    b = r1.calcolaPerimetro();
    c = r1.calcolaArea();
    cout << "il perimetro e l'area del rettangolo sono: " << endl << "perimetro: " << b << endl << "area: " << c << endl;
    return 0;
}