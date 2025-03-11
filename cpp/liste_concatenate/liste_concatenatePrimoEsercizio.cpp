#include <iostream>
#include <string>
#include <ctime>
using namespace std;
//Implementare una lista concatenata semplice con le operazioni di base: inserimento in testa, in coda, eliminazione, ricerca e visualizzazione.
typedef struct {
    string dato;
    Nodo *next;
}Nodo;

class Lista {
    private:
        Nodo *head;
    public:
    Lista() {
        head = NULL;
    }
    Nodo* testa() {
        Nodo *p;
        p = new Nodo;
        p->dato = rand() % 21;
        p->next = head;
        head = p;
        return p;
    }
    void InserisciUltimo(){
        Nodo *p;
        p = new Nodo;
        int NDI; //Numero da inserire
        cout << "Inserisci il numero da inserire in coda: ";
        cin >> NDI;
        p->dato = NDI;
        p->next = NULL;
        if(head == NULL) {
            head = p;
        } else {
            Nodo *q;
            q = head;
            while(q->next != NULL) {
                q = q->next;
            }
            q->next = p;
        }
    }
    void Elimina() {
        Nodo *p;
        p = head;
        head = head->next;
        delete p;
    }
    void Visualizza() {
        Nodo *p;
        p = head;
        while(p != NULL) {
            cout << p->dato << " ";
            p = p->next;
        }
        cout << endl;
    }
};

int main() {
    srand(time(NULL));
    Lista l;
    for(int i = 0; i < 10; i++) {
        l.testa();
    }
    //l.InserisciUltimo();
    l.Visualizza();
}


