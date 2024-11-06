#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define N 3  // Costante per il numero di record

// Definizione della struttura Record
typedef struct {
    int id;
    char nome[50];
    int voti[5];
} Record;

// Dichiarazione delle funzioni
void scriviFile(FILE *file, Record records[]); // a)funzione per scrivere un file di N record con N costante posta a 10
void leggiFile(FILE *file, Record records[]); // b)funzione per leggere e stampare su monitor le informazioni del file di record
void caricaVoti(Record records[]); // Caricamento dei voti
int confrontoNome(Record records[]); // c)conta quante volte è presente uno studente che ha il cognome uguale alla stringa passata in output

int main() {

    int nomidoppio;
    FILE *file = fopen("prova1.dat", "ab");
    if (file == NULL) {
        perror("Errore nell'apertura del file");
        exit(1);
    }
    srand(time(NULL));
    Record records[N];

    caricaVoti(records);

    scriviFile(file, records);
    fclose(file); 

    file = fopen("prova1.dat", "rb");
    if (file == NULL) {
        perror("Errore nell'apertura del file");
        exit(1);
    }

    nomidoppio = confrontoNome(records);
    leggiFile(file, records);

    printf("I nomi uguali sono: %d\n", nomidoppio);

    fclose(file);
    return 0;
}

void scriviFile(FILE *file, Record records[]) {

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

void leggiFile(FILE *file, Record records[]) {
    Record recordvisualizzato;
    printf("CONTENUTO DEL FILE:\n");
    while (fread(&recordvisualizzato, sizeof(Record), 1, file) == 1) {
        printf("ID: %d, Nome: %s\n", recordvisualizzato.id, recordvisualizzato.nome);
        for (int j = 0; j < 5; j++) {
            printf("Voto %d: %d\n", j + 1, recordvisualizzato.voti[j]);
        }
        printf("\n");
    }
}

void caricaVoti(Record records[]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 5; j++) {
            records[i].voti[j] = rand() % 10 + 1; 
        }
    }
}

int confrontoNome(Record records[]) {
    int contatore = 0;
    char nomerichiesto[50];
    printf("Scrivi il nome da ricercare:\n");
    scanf("%s", nomerichiesto);

    for (int i = 0; i < N; i++) {
        if (strcmp(records[i].nome, nomerichiesto) == 0) {
            contatore++;
        }
    }

    return contatore;
}
