#include <iostream>
#include "ripasso.h"
#include "ripasso.cpp"

using namespace std;

int main(){
    rettangolo r1;
    int a,b,c;

    cout << "inserisci la base"<< endl;
    cin >> a;
    cout << "inserisci l'altezza"<< endl;
    cin >> b;
    r1.setBase(a);
    r1.setAltezza(b);
    c = r1.Perimetro();
    cout << c;
    return 0;
}