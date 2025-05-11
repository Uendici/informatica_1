//un utente inserisce 3 numeri in una lista

#include <iostream>

using namespace std;
struct Nodo{

    int info;
    Nodo* next;

}; typedef struct Nodo nodo;

class Lista{

    private:
        nodo *testa;
        int ndi;
    public:

    Lista(){
        testa = nullptr;
    }

    int get(){ return ndi; }
    void set(int ndi){ this-> ndi = ndi; }

    nodo *InserimentoInTesta(int ndi){
        nodo *l;
        l = new nodo;
        l->info = ndi;
        l->next = testa;
        testa = l;
        return l;
    }

    void InserisciInCoda(int ndi){
        Nodo *l;
        l = new nodo;
        l->info = ndi;
        l->next = nullptr;

        if(testa == nullptr){
            testa = l;
        }else{
            Nodo *p;
            p = testa;
            while(p->next != nullptr){
                p = p->next;
            }
            p->next = l;
        }
    }
    int TrovaNumeriPari(){
        Nodo *l;
        l = testa;
        int i = 0;
        while(l != nullptr){
            if(l->info % 2 == 0){
                i++;
            }
            l = l->next;
        }
        return i;
    }
    void StampaLista(){
        Nodo *l;
        l = testa;
        while(l->next != nullptr){
            cout << l->info << " ";
            l = l->next;
        }
        cout << endl;
    }
};

int main(){

    int ndi,PariTrovati;
    Lista l1;

    for(int i = 0; i < 3; i++){
        cout << "inserisci un numero" << endl;
        cin >> ndi;
        l1.InserimentoInTesta(ndi);
    }
    cout << "inserisci un numero in coda" << endl;
    cin >> ndi;
    l1.InserisciInCoda(ndi);
    cout << "ecco la lista:"<< endl;
    l1.StampaLista();
    PariTrovati = l1.TrovaNumeriPari();
    cout << "i numeri pari sono: " << PariTrovati;
    return 0;
}