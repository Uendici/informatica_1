#include <iostream>
#include <cmath> 
#include "rettangolo.h"

using namespace std;

// get
double rettangolo::getbase() {
    return base;
}

double rettangolo::getaltezza() {
    return altezza;
}

// set
void rettangolo::setbase(int base) {
    this->base = base;
}

void rettangolo::setaltezza(int altezza) {
    this->altezza = altezza;
}

// Funzioni per i calcoli
double rettangolo::calcolaPerimetro() {
    return 2 * (base + altezza);
}

double rettangolo::calcolaArea() {
    return base * altezza;
}

double rettangolo::calcolaDiagonale() {
    return sqrt(base * base + altezza * altezza);
}

// Stampa risultati
void rettangolo::stampa() {
    cout << "Perimetro: " << calcolaPerimetro() << endl;
    cout << "Area: " << calcolaArea() << endl;
    cout << "Diagonale: " << calcolaDiagonale() << endl;
}
