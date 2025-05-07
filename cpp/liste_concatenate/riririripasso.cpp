#include <iostream>

using namespace std;

struct Nodo{
    int info;
    Nodo* next;
}; typedef struct Nodo nodo;

class lista{
    private:
        Nodo *testa;
    public:
    
    Nodo *MettInTesta(int ndi){
        
        Nodo *l = new Nodo;
        l->info = ndi;
        l->next = testa;
        testa = l;
        return l;
    }
    void incrementoInCoda(int ndi){
            nodo *l = testa;
            l->info = ndi;
            l->next = nullptr;

            if(testa == nullptr){
                testa = l;
            }

            nodo *k = testa;
            
            while(k->next != nullptr){
                k = k->next;
            }
            k->next = l;
    }

    void stampa(){
        nodo *l = testa;

        while(l != l->next ){
            cout << l->info << " ";
            l = l->next;
        }
    }
};

int main(){
    lista l1;
    int ndi;
    for(int i = 0; i < 3; i++){
        cout << "inserisci il numero nella lista";
        cin >> ndi;
        l1.MettInTesta(ndi);
    }
    cout << "inserisci in coda";
    cin >> ndi;
    l1.incrementoInCoda(ndi);

    l1.stampa();
}

