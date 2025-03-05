#include <iostream>
#include <string.h>
using namespace std;

typedef struct{
    string info;
}lista;

int main(){
    int i=0;
    string prodotto;
    lista *p = NULL;
    lista l1[9];
    p = l1;

    for(p = l1; p - l1 < 9;p++){
        i++;
        cout << "inserisci il prodotto n."<< i << endl;
        cin >> prodotto;
        p->info=prodotto;
        
    }
    for(p = l1; p - l1 < 9;p++){
        cout << p->info << endl;
    }
}

