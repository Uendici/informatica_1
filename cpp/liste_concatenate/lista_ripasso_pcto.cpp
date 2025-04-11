#include <iostream>
#include <random>
#include <ctime>

using namespace std;
typedef struct Nodo{
    Nodo *next;
    int info;
} nodo;

class LISTA{
    private:                                                                                                
    nodo* testa;
    public:
    LISTA(){
        testa = nullptr;
    }
    void inserimentointesta(){
        nodo *l = new nodo;
        l->info = rand() % 100;
        l->next = testa;
        testa = l;
    }

    void inserimentoincoda(){
        nodo *l = new nodo;
        l->info = rand() % 100;
        l->next = nullptr;
        if(testa == nullptr){
            testa = l;
        }else{
            nodo *p = testa;
            while(p->next != nullptr){
                p = p->next;
            }
            p->next = l; 
        }
    }
    void stampa(){
        nodo *p = testa;
        while(p != nullptr){
            cout << p->info << " ";
            p = p->next;
        }
        cout << endl;
    }
};
int main(){
    srand(time(0));
    LISTA l;
    for(int i = 0; i < 10; i++){
        l.inserimentointesta();
    }
    l.stampa();
    for(int i = 0; i < 10; i++){
        l.inserimentoincoda();
    }
    l.stampa();
    cout << " " << endl;
    cout << "in tempo di guerra ogni buco è trincea... " << endl;
} 