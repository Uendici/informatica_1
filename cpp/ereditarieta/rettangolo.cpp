#include "rettangolo.h"
#include <iostream>

using namespace std;

int quadrilateri::getlato1(){
    return lato1;
}
int quadrilateri::getlato2(){
    return lato2;
}
int quadrilateri::getlato3(){
    return lato3;
}
int quadrilateri::getlato4(){
    return lato4;
}

int quadrato::calcolaPerimetro(){

    return getlato1()*4;
}
int rettangolo::calcolaPerimetro(){
    return 2*( getlato1() + getlato2());
}
int rettangolo::calcolaArea(){
    return getlato1() * getlato2();
}