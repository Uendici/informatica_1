#include <iostream>
#define N 3

using namespace std;
int main(){
    int *p = NULL,a,vet[N];

    p=&a;


    for(p=vet; p - vet < N; p++){
        cout << "riempi il vettore" << endl;
        cin >> *p;
    }

    cout << "Vettore inserito: ";
    for (int i = 0; i < N; i++) {
        cout << vet[i] << " ";
    }
    cout << endl;

}