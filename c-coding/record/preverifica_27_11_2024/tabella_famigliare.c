#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include <string.h>
#define N 3

typedef struct{
    char nome[10];
    float altezza;
}informazioni;

void visualizzafamiglia(informazioni famiglia[]);

int main(){
    informazioni famiglia[N];
    visualizzafamiglia(famiglia);
}

void visualizzafamiglia(informazioni famiglia[]){
    FILE *file = fopen("personefamiglia.dat","rb");
    size_t leggi_contenuto = fread(famiglia,sizeof(informazioni),N,file);
    if(leggi_contenuto != N){
        perror("il file non si è aperto correttamene");
    }
    printf("\n............\n");
    for(int i = 0; i < N; i ++){
        printf("\n-%s",famiglia[i].nome);
        printf("\t%.2fcm\n",famiglia[i].altezza);
    }
    printf("\n............\n");
    fclose(file);
}