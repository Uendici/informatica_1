#include <stdio.h>
#include <math.h>


#define RETTANGOLO_H

class rettangolo {

private:
int base;
int altezza;

public:
    void setbase(int base);
    void setaltezza(int altezza);
    double getbase();
    double getaltezza();


    //funzioni per i calcoli
    double calcolaPerimetro();
    double calcolaArea();
    double calcolaDiagonale();

    //stampa

    void stampa();
}; 