#include <iostream>

using namespace std;

struct Nodo{
    int dato;
    Nodo* next;
};


typedef struct Nodo nodo;

class Lista{
private:
    Nodo* head;
public:
    Nodo* testa(){
        nodo* p = new nodo;
        p->dato = 4;
        p->next = head;
        head = p;
        return p;
    }
    void inserimento(){
        int ndi;
        Nodo* p = new Nodo;
        cout << "inserimento" << endl;
        cin >> ndi;
        p->dato = ndi;
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
};