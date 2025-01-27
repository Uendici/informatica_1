#define FRAZIONE_H
#ifndef FRAZIONE_H
class frazione{

    private:
            int numeratore;
            int denominatore;
    public:
            frazione(int numeratore = 2, int denominatore = 1){
                this -> numeratore = numeratore;
                this -> denominatore = denominatore;
            }
            int setnumeratore(){
                return numeratore;
            }
            int setdenominatore(){
                return denominatore;
            }
            double calcolo();
            void stampa();

};
#endif