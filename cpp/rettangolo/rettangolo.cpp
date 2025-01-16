#include <iostream>
#include <math.h>
#include "rettangolo.h"

using namespace std;

double rettangolo::getbase(){
    return base;
}
double rettangolo::getaltezza(){
    return altezza;
}
void rettangolo::setbase(int base){
    this ->base = base;
}
void rettangolo::setaltezza(int altezza){
    this ->altezza = altezza;
}

//funzioni per i calcoli

double rettangolo::calcolaPerimetro(){
    return 2*(base+altezza);
}
double rettangolo::calcolaDiagonale(){
    return base*altezza;
}
double rettangolo::calcolaDiagonale(){
    return sqrt(pow(base,2) + pow(altezza,2)); //sqrt = radice quadrata; pow = esponenziale;
}
void rettangolo::stampa(){
    cout << "perimetro: " << calcolaPerimetro() << endl; 
    cout << "area: " << calcolaArea() << endl;
    cout << "diagonale: " << calcolaDiagonale() << endl;
}


