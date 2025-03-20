#include <cmath>
#include "ripasso.h"


// Costruttore
rettangolo::rettangolo() {
    base;
    altezza;
}

int rettangolo::getBase(){
    return base;
}

int rettangolo::getAltezza(){
    return altezza;
}

void rettangolo::setBase(int base){
    this->base = base;
}

void rettangolo::setAltezza(int altezza){
    this->altezza = altezza;
}

double rettangolo::Perimetro(){
    int perimetro;
    perimetro = (2 * (base + altezza));
    return perimetro;
}

