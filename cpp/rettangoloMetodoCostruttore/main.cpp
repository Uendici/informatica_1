#include "rettangolo.h"
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    rettangolo r(3,4);
    cout << "Area: " << r.area() << endl;
    cout << "Perimetro: " << r.perimetro() << endl;
    cout << "Diagonale: " << r.diagonale() << endl;
    return 0;
}