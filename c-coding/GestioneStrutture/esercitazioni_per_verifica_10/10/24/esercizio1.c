//Definisci una struttura chiamata Persona con i seguenti campi: nome, età e altezza.
//Crea una funzione che prenda in input i dati di una persona e un'altra funzione che li stampi a schermo.

#include <stdio.h>
#define LUNG_NOM 20

typedef struct{
    char nome[LUNG_NOM];
    int eta;
    float altezza;
} persona;
persona dati(persona p);
persona stampaDati(persona p);
int main(){
    persona p;
    p = dati(p);
    p = stampaDati(p);
    return 0;
}

persona dati(persona p){
    printf("inserisci il nome della persona: ");
    scanf("%s",p.nome);
    printf("inserisci l'eta' della persona: ");
    scanf("%d",&p.eta);
    printf("inserisci l'altezza della persona: ");
    scanf("%f",&p.altezza);
    return p;
}

persona stampaDati(persona p){
    printf(" il nome è: %s\n ",p.nome);
    printf("anni dell'utente: %d\n ",p.eta);
    printf("altezza dell'utente: %.2f\n ",p.altezza);
    return p;
}