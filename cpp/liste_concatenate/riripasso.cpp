#include <iostream>
#include <ctime>

using namespace std;

struct Nodo{
    int info;
    Nodo *next;
};typedef struct Nodo nodo;

class lista{
    private:
        nodo *testa;
    public:
        lista(){
            testa = nullptr;
        }

        nodo *riempimento(){
            nodo *l;
            l = new nodo;
            l->info = rand() % 6;
            l->next = testa;
            testa = l;
            return l;
        }
        void visualizza(){
            nodo *l = testa;
            while(l != nullptr){
                cout << l->info << " ";
                l = l->next;
            }
            cout << endl;
        }
        void ricerca(int ndc){
            nodo *l = testa;
            int i = 1;
            while( l != nullptr){
                if(ndc == l->info){
                    cout << "il numero "<< ndc << " è stato trovato nella : " << i << " memoria" << endl;
                }
                l = l->next;
                i++;
            }
        }
        void elimina(int ndc){
            nodo *l = testa;
            nodo *precedente = nullptr;
            int i = 1;
            while( l != nullptr && ndc == l->info){
            precedente = l;
            delete l;
            l = l->next;
        }
    }
};

int main(){

    srand(time(nullptr));
    lista lista1;

    for(int i = 0; i < 5; i++){
        lista1.riempimento();
    }
    lista1.visualizza();
    lista1.ricerca(3);
    lista1.elimina(2);
    cout << "con il numero eliminato" << endl;
    lista1.visualizza();
}