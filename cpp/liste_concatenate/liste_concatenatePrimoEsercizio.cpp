#include <iostream>
#include <string>
#include <ctime>
using namespace std;

struct Nodo {
    int dato;
    Nodo* next;
};

typedef struct Nodo nodo;

class Lista {
private:
    Nodo* head;
public:
    Lista() {
        head = nullptr;//nullptr sarebbe NULL ma in c++ 
    }

    // Inserisce un nodo in testa
    Nodo* testa() {
        Nodo* p = new Nodo;
        p->dato = rand() % 21;
        p->next = head;
        head = p;
        return p;
    }

    // Inserisce un nodo in coda
    void InserisciUltimo() {
        Nodo* p = new Nodo;
        int NDI; // Numero da inserire
        cout << "Inserisci il numero da inserire in coda: ";
        cin >> NDI;
        p->dato = NDI;
        p->next = nullptr;

        if (head == nullptr) {
            head = p;
        } else {
            Nodo* q = head;
            while (q->next != nullptr) {
                q = q->next;
            }
            q->next = p;
        }
    }

    // Elimina il primo nodo della lista
    void Elimina() {
        if (head != nullptr) {
            Nodo* p = head;
            head = head->next;
            delete p;
        } else {
            cout << "La lista è vuota. Nessun nodo da eliminare." << endl;
        }
    }

    // Visualizza tutti gli elementi della lista
    void Visualizza() {
        if (head == nullptr) {
            cout << "La lista è vuota." << endl;
            return;
        }

        Nodo* p = head;
        while (p != nullptr) {
            cout << p->dato << " ";
            p = p->next;
        }
        cout << endl;
    }

    // Ricerca un numero nella lista
    void Ricerca() {
        Nodo* p = head;
        int ndr; // numero da ricercare
        cout << "Inserisci il numero da ricercare: ";
        cin >> ndr;

        int posizione = 0;
        while (p != nullptr) {
            if (p->dato == ndr) {
                cout << "Il numero è stato trovato nella posizione: " << posizione << endl;
                return;
            }
            p = p->next;
            posizione++;
        }

        cout << "Numero non trovato nella lista." << endl;
    }
};

int main() {
    srand(time(nullptr));
    Lista l;

    for (int i = 0; i < 10; i++) {
        l.testa();
    }

    cout << "Lista iniziale: ";
    l.Visualizza();
    l.Ricerca();
    l.Elimina();
    cout << "Lista dopo eliminazione: ";
    l.Visualizza();
    l.InserisciUltimo();
    cout << "Lista dopo inserimento in coda: ";
    l.Visualizza();

    return 0;
}
