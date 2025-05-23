#include <iostream>

using namespace std; 

class moto{
    private:
        int marca;
    public:

        moto(int m){
            marca = m;
        }

        int getMarca(){
            return marca;
        }

        void setMarca(int marca){
            this->marca = marca;
        }
        void accensione(float a){
            cout << "Accensione moto" << endl;
        }

};
int main(){

    



}