#include <iostream>

using namespace std;

typedef struct Nodo{

    Nodo *next;
    int info;
} nodo;

class lista{
    private:
        nodo *testa;
    public:
        lista(){
            testa = nullptr;
        }

        //riempi la lista

        nodo *inserimentoInTesta(int info ){
            nodo *l = new nodo;
            l->info = info;
            l->next = testa;
            testa = l;
            return l;            
        }
        void inserimentoInCoda(int info){
            nodo *l = new nodo;
            l->info = info;
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
        void calcellazione(int ndc){//numero da cancellare 

        }
        void visualizzaLista(){
            nodo *l = new nodo;
            l = testa;
            while(l != nullptr){
                cout << l->info << " ";
                l = l->next;
            }
        }
};

int main(){
    lista l1;
    int info;

    for(int i = 0; i < 3; i++){
        cout << i+1 << " nodo";
        cin >> info;
        l1.inserimentoInTesta(info);
    }
    l1.inserimentoInCoda(2);
    l1.visualizzaLista();
}