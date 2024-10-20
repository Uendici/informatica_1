#include <stdio.h>


typedef struct persona {
    char nome[150];
    char cognome[150];
    char provincia[150];
} info;


typedef struct indirizzo {
    char nomeIndirizzo[150];
    int numeroIndirizzo;
} indirizzo;


typedef struct nascita {
    int giorno;
    int mese;
    int anno;
} dn; // data di nascita


int main() {
    info p1; // persona 1
    indirizzo ip1; // indirizzo persona 1
    dn dnp1; // data di nascita persona 1


    printf("Inserisci il tuo nome:\t");
    scanf("%149s", p1.nome);  // Modificato da %150s a %149s
    printf("Inserisci il tuo cognome:\t");
    scanf("%149s", p1.cognome);  // Modificato da %150s a %149s
    printf("Inserisci il nome della via in cui vivi e il numero civico (ad esempio roma 42):\t");
    scanf("%149s %d", ip1.nomeIndirizzo, &ip1.numeroIndirizzo);  // Modificato da %150s a %149s
    printf("Inserisci la provincia in cui vivi:\t");
    scanf("%149s", p1.provincia);  // Modificato da %150s a %149s
    printf("Inserisci la tua data di nascita (ad esempio 11 03 2006):\t");
    scanf("%d %d %d", &dnp1.giorno, &dnp1.mese, &dnp1.anno);  // Aggiunti gli indirizzi per le variabili


    printf("Nome: %s\n", p1.nome);
    printf("Cognome: %s\n", p1.cognome);
    printf("Indirizzo: via %s %d\n", ip1.nomeIndirizzo, ip1.numeroIndirizzo);
    printf("Provincia: %s\n", p1.provincia);
    printf("Data di nascita: %d/%d/%d\n", dnp1.giorno, dnp1.mese, dnp1.anno);  // Modificato per formattare con zeri iniziali


    return 0;
}


