#ifndef RETTANGOLO_H
#define RETTANGOLO_H

class quadrilateri{

    private:
        int lato1;
        int lato2;
        int lato3;
        int lato4;
    public:
        quadrilateri(){
            lato1 = 5;
            lato2 = 5;
            lato3 = 5;
            lato4 = 5;
        }
        int getlato1();
        int getlato2();
        int getlato3();
        int getlato4();
};

class quadrato:public quadrilateri{

    public:
        quadrato():quadrilateri(){}
        int calcolaPerimetro();
};

class rettangolo:public quadrilateri{

    public:
        
        int calcolaPerimetro();
        int calcolaArea();
};


#endif