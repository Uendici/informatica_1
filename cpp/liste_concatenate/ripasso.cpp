#include <iostream>
#include <ctime>
using namespace std;
//Implementare una lista concatenata semplice con le operazioni di base: inserimento in testa, in coda, eliminazione, ricerca e visualizzazione.
struct Nodo{
    int dato;
    Nodo *next;
};typedef struct Nodo nodo;

class LISTA{
    private:
        nodo *testa;

    public:
    nodo* IncrementoInTesta(){
        nodo *l;
        l = new nodo;
        l -> dato = rand() % 11;
        l -> next = testa;
        testa = l;
        return l;
    }
    void visualizza(){
        nodo *l;
        l = testa;
        while(l != NULL){
            cout << l ->dato << " ";
            l = l -> next;
        }
    }
};

int main(){
    srand(time(NULL));
    LISTA l;
    for(int i = 0; i < 10; i++) {
        l.IncrementoInTesta();
    }
    l.visualizza();
    cout << endl;
    return 0;
}