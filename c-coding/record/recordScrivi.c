#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3  // Costante per il numero di record

// Definizione della struttura Record
typedef struct {
    int id;
    char nome[50];
    int voti[5];
} Record;

// Dichiarazione delle funzioni
void scriviFile(FILE *file, Record records[]);
void leggiFile(FILE *file);
void caricaVoti(FILE *file, Record records[]);

int main() {
    // Apertura del file in modalità append binaria
    FILE *file = fopen("prova1.dat", "ab");
    if (file == NULL) {
        perror("Errore nell'apertura del file");
        exit(1);
    }
    srand(time(NULL));
    Record records[N];

    // scrittura dei record nel file
    scriviFile(file, records);
    fclose(file); 

    file = fopen("prova1.dat", "rb");
    if (file == NULL) {
        perror("Errore nell'apertura del file");
        exit(1);
    }

    leggiFile(file);
    fclose(file);
    return 0;
}
// Funzione per scrivere N record in un file
void scriviFile(FILE *file, Record records[]) {
    // acquisizione dei dati del record
    printf("Inserisci l'id e il nome per ciascuna persona.\n");
    for (int i = 0; i < N; i++) {
        printf("ID %d: ", i + 1);
        scanf("%d", &records[i].id);
        printf("Nome %d: ", i + 1);
        scanf("%49s", records[i].nome);
    }

    size_t scritto = fwrite(records, sizeof(Record), N, file);
    if (scritto != N) {
        perror("Errore nella scrittura del file");
    } else {
        printf("File binario scritto con successo!\n");
    }
}

// funzione per leggere e stampare su monitor le informazioni del file di record 
void leggiFile(FILE *file) {
    Record recordvisualizzato;
    printf("CONTENUTO DEL FILE:\n");
    while (fread(&recordvisualizzato, sizeof(Record), 1, file) == 1) {
        printf("ID: %d, Nome: %s\n", recordvisualizzato.id, recordvisualizzato.nome);
    }
}

void carocaVoti(FILE *file, Record records[]){

}