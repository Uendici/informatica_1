//fai un programma in c che prenda un file binario contenente una 
//struttura personale con nome e numero_persona e permetta di modificare il numero_persona di un singolo impiegato.
#include <stdio.h>
typedef struct personale {
    char nome[20];
    int numero_persona;
} personale;

void letturaFile(personale *p){

    FILE *f = fopen("personale.dat", "rb");
    for(int i = 0; i < 2; i++){
        fread(&p,sizeof(personale),1,f);
    }
    fclose(f);
}


int main(){
    personale impiegati[2];
    letturaFile(impiegati);
    return 0;
}