#include "rettangolo.h"
#include <iostream>
#include <cmath>

using namespace std;

double rettangolo::getbase(){
    return base;
}
double rettangolo::getaltezza(){
    return altezza;
}
void rettangolo::setbase(int b){
    base = b;
}
void rettangolo::setaltezza(int a){
    altezza = a;
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

