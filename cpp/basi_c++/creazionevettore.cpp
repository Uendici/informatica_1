//creazione di un vettore
#include <iostream>
using namespace std;
int main(){
    
    int v[4];
    cout << "inserisci 4 numeri:\n";
    for(int i = 0; i < 4; i++){
        cin >> v[i];
    }
    cout << "i numeri inseriti sono:" << endl;
    for(int i = 0; i < 4; i++){
        cout << v[i];
    }
    cout << "\n";

    return 0;
}