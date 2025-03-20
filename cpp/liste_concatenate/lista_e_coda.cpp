#include <iostream>

using namespace std;

struct nodo{
    int info;
    nodo *next;
};

class lista{
    private:
    nodo *testa;
    public:
    lista(){
        testa = nullptr;
    }

    nodo *inserisci(int ndi){
        nodo *l;
        l = new nodo;
        l->info = ndi;
        l->next = testa;
        testa = l;
        return l;
    }
    void visualizza(){
        nodo *l;
        l = testa;
        while(l!= nullptr){
            cout << l->info;
            l = l->next;
        }
    }
};

int main(){
    lista l1;
    int ndi; //numero dainserire
    for(int i = 0; i < 3; i++){
        cout << "inserisci un numero";
        cin >> ndi;
        l1.inserisci(ndi);
    }
    l1.visualizza();
}

