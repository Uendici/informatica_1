#ifndef RETTANGOLO_H
#define RETTANGOLO_H

class rettangolo{
    private:
        double base;
        double altezza;
    public:
        double getbase();
        double getaltezza();
        void setbase(int base);
        void setaltezza(int altezza);
        double area();
        double perimetro();
        double diagonale();
};

#endif