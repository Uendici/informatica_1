#ifndef RETTANGOLO_H
#define RETTANGOLO_H

class rettangolo{
    private:
        double base;
        double altezza;
    public:
        rettangolo(double b, double a){
            base = b;
            altezza = a;
        }
        double getbase();
        double getaltezza();
        void setbase(int base);
        void setaltezza(int altezza);
        double area();
        double perimetro();
        double diagonale();
};

#endif