#include "rettangolo.h"
#include <iostream>
#include <cmath>

using namespace std;

double rettangolo::getbase() {
    return base;
}
double rettangolo::getaltezza() {
    return altezza;
}
void rettangolo::setaltezza(int altezza){
    this -> altezza = altezza;
}
void rettangolo::setbase(int base){
    this -> base = base;
}
double rettangolo::area(){
    return base*altezza;
}
double rettangolo::perimetro(){
    return 2*(base+altezza);
}
double rettangolo::diagonale(){
    return sqrt(base*base + altezza*altezza);
}
