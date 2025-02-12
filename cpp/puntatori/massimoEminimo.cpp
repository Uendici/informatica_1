#include <iostream>
#include <time.h>

#define N 10

using namespace std;
void caricaVettore(int *p);
int trovaMaggiore(int *p);
void stampaMaggiore(int *p);
void stampaVettore(int *p);

int main(){
    int a,vet[N];
    int *pmax = NULL, *pmin = NULL;
    pmax = vet;
    srand(time(NULL));
    caricaVettore(vet);
    *pmax = trovaMaggiore(vet);
    stampaVettore(vet);
    stampaMaggiore(pmax);
}


void caricaVettore(int *p){
    for(int i = 0; i < N; i++){
        *(p + i) = rand() % 99 + 1;
    }
}
int trovaMaggiore(int *p){
    int max = *p;
    for(int i = 1; i < N; i++){
        if(*(p + i) > max){
            max = *(p + i);
        }
    }
    return max;
}
void stampaVettore(int *p){
    for(int i = 0; i < N; i++){
        cout << *(p + i) << " ";
    }
    cout << endl;
}
void stampaMaggiore(int *p){
    cout << "Il valore massimo è: " << *p << endl;
}
