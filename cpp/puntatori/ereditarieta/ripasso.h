#ifndef RIPASSO_H
#define RIPASSO_H

class rettangolo{
    private:
        int base;
        int altezza;
    public:
        rettangolo();
        int
         getBase();
        int getAltezza();

        void setBase(int base);
        void setAltezza(int altezza);

        double Perimetro();

};
#endif
