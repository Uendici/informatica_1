#include <stdio.h>
#include <stdlib.h>

#define N 10  // Costante per il numero di record

// Definizione della struttura Record
typedef struct {
    int id;
    char nome[50];
} Record;

// Dichiarazione delle funzioni
void scriviFile(FILE *file, Record records[]);
void leggiFile(FILE *file);

int main() {
    // Apertura del file in modalità append binaria
    FILE *file = fopen("prova1.dat", "ab");
    if (file == NULL) {
        perror("Errore nell'apertura del file");
        exit(1);
    }

    Record records[N];

    // Scrittura dei record nel file
    scriviFile(file, records);
    fclose(file); // Chiudere il file dopo la scrittura

    // Riaprire il file in lettura per leggere i record
    file = fopen("prova1.dat", "rb");
    if (file == NULL) {
        perror("Errore nell'apertura del file");
        exit(1);
    }

    // Lettura e visualizzazione dei record
    leggiFile(file);
    fclose(file); // Chiudere il file dopo la lettura
    return 0;
}

// Funzione per scrivere N record in un file
void scriviFile(FILE *file, Record records[]) {
    // Acquisizione dei dati del record
    printf("Inserisci l'id e il nome per ciascuna persona.\n");
    for (int i = 0; i < N; i++) {
        printf("ID %d: ", i + 1);
        scanf("%d", &records[i].id); // Aggiunto l'operatore & per passare l'indirizzo
        printf("Nome %d: ", i + 1);
        scanf("%49s", records[i].nome); // Limita l'input a 49 caratteri per evitare overflow
    }

    // Scrittura dei dati nel file in binario
    size_t scritto = fwrite(records, sizeof(Record), N, file);
    if (scritto != N) {
        perror("Errore nella scrittura del file");
    } else {
        printf("File binario scritto con successo!\n");
    }
}

// Funzione per leggere e stampare su monitor le informazioni del file di record 
void leggiFile(FILE *file) {
    Record recordvisualizzato;
    printf("CONTENUTO DEL FILE:\n");
    while (fread(&recordvisualizzato, sizeof(Record), 1, file) == 1) { // Lettura del file
        printf("ID: %d, Nome: %s\n", recordvisualizzato.id, recordvisualizzato.nome);
    }
}
