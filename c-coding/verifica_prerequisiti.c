#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define C 10
#define R 10

int pari(int x);
void inserisci(int v[],int x);
int sostituisci(int v[]);
void CaricaMatrice(int m[][C]);
int somma(int m[][C],int y);
int cerca(int m[][C],int h,int k);
int ContaCompresi (int m [][C],int h, int k );

int main(){

    srand(time(NULL));
    int x,v[R],m[R][C],somma_colonna,intero_da_cercare,minimo_numeri_compresi,sostituzioni,somma_pari,trovato,conto;
    printf("Inserisci un numero per il vettore: ");
    scanf("%d",&x);

    inserisci(v,5);
    sostituzioni = sostituisci(v);
    CaricaMatrice(m);
    printf("Inserisci la colonna da sommare (0-9): ");
    scanf("%d",&somma_colonna);
    somma_pari = somma(m, somma_colonna);
    printf("Inserisci il numero da cercare: ");
    scanf("%d", &intero_da_cercare);
    trovato = cerca(m, 1, intero_da_cercare);
    printf("Inserisci i valori minimi e massimi da contare nella matrice: ");
    scanf("%d %d", &minimo_numeri_compresi, &intero_da_cercare);
    conto = ContaCompresi(m, minimo_numeri_compresi, intero_da_cercare);

    printf("Numero di sostituzioni: %d\n", sostituzioni);
    printf("Somma dei numeri pari nella colonna %d: %d\n", somma_colonna, somma_pari);
    if (trovato) {
        printf("Il numero %d è stato trovato nella riga 1.\n", intero_da_cercare);
    } else {
        printf("Il numero %d non è stato trovato nella riga 1.\n", intero_da_cercare);
    }
    printf("Ci sono %d numeri che sono compresi tra %d e %d.\n", conto, minimo_numeri_compresi, intero_da_cercare);
    return 0;
}

int pari(int x){
    if(x % 2==0){
        return 1;
    }else{
        return 0;
    }
}
void inserisci(int v[],int x){
    v[0] = x;
    for(int i = 1; i < R; i++){
        v[i] = x + i;
    }
}
int sostituisci(int v[]){
    int contatore;
    for(int i = 0; i < R; i++){
        if (v[i] % 2 != 0){
            v[i] = 0;
            contatore ++;
        }
    }
    return contatore;
}
void CaricaMatrice(int m[][C]){
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            m[i][j] = rand() % 150 + 50;
        }
    }
}
int somma(int m[][C], int y){
    int somma = 0;
    for (int i = 0; i < R; i++) {
        if (pari(m[i][y])) {
            somma += m[i][y];
        }
    }
    return somma;
}
int cerca(int m[][C],int x,int k){

    for(int i = 0; i < C; i++){
        if(m[x][i] == k){
            return 1;
        }
    }
    return 0;
}
int ContaCompresi (int m [][C],int h, int k ){
    int contatore;
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            if(m[i][j] >= h && m[i][j] <= k){
                contatore ++;
            }
        }
    }
    return contatore;
}