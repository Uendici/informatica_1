
#include <iostream>

using namespace std;

class Animaletto{

    public:
    
    void mangia(){
        cout << "NOM NOM";
    }
};

class Canetto : public Animaletto{
    public:

    void abbaia(){
        cout << "wof wof";
    }
};

class Gatto : public Canetto{
    public:

    void miagolio(){
        cout<< "meow";
    }
};


int main(){

    Canetto cane1;
    Gatto gatto1;

    cane1.abbaia();
    cane1.mangia();
    gatto1.miagolio();
    gatto1.mangia();
    
}