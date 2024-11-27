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

//funzione per scrivere un file di N record con N costante posta a 10;
void scrittura_file(informazioni famiglia[]);
void visualizza_famiglia(informazioni famiglia[]);

int main(){
    informazioni famiglia[N];
    scrittura_file(famiglia);
    visualizza_famiglia(famiglia);
}

void scrittura_file(informazioni famiglia[]){

    FILE *fileinfo = fopen("personefamiglia.dat","wb");

    for(int i = 0; i < N; i++){
        printf("nome familiare %d: ",i+1);
        scanf("%s",famiglia[i].nome);
        printf("altezza familiare %d: ",i+1);
        scanf("%f",&famiglia[i].altezza);
    }
    fwrite(famiglia,sizeof(informazioni),N,fileinfo);
    fclose(fileinfo);
}

void visualizza_famiglia(informazioni famiglia[]){
    FILE *file = fopen("personefamiglia.dat","rb"); 
    printf("\n............\n");
    size_t elementi_letti = fread(famiglia,sizeof(informazioni),N,file);
        for(int i = 0; i < N; i++){
            printf("\n-%s",famiglia[i].nome);
            printf("\t%.2fcm\n",famiglia[i].altezza);
        }  

    fclose(file);
}
