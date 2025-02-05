#ifndef RETTANGOLO_H
#define RETTANGOLO_H

class rettangolo {
private:
    int base;
    int altezza;

public:
    // Metodi setter e getter
    void setbase(int base);
    void setaltezza(int altezza);
    double getbase();
    double getaltezza();

    // Funzioni per i calcoli
    double calcolaPerimetro();
    double calcolaArea();
    double calcolaDiagonale();

    // Stampa
    void stampa();
}; 

#endif
