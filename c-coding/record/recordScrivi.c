#include <stdio.h>
#include <stdlib.h>

#define N 10  // costante per il numero di record

void scriviFile(FILE *file);
void leggiFile(FILE *file);

//record
typedef struct {
    int id;
    char nome[50];
} Record;

int main() {
    FILE *file = fopen("prova1.dat", "a");
    if (file == NULL) {
        perror("Errore nell'apertura del file");
        exit(1);
    }

    scriviFile(file);
    leggiFile(file); 

    fclose(file);
    return 0;
}

// funzione per scrivere un file di N record con N costante posta a 10
void scriviFile(FILE *file) {
    Record records[N];

    //dati del record
    printf("Inserisci l'id e il nome per ciascuna persona.\n");
    for (int i = 0; i < N; i++) {
        printf("ID %d: ", i + 1);
        scanf("%d", &records[i].id);
        printf("Nome %d: ", i + 1);
        scanf("%s", records[i].nome);
    }

     //dati scritti nel file in binario
    size_t scritto = fwrite(records, sizeof(Record), N, file);
    if (scritto != N) {
        perror("Errore nella scrittura del file");
    } else {
        printf("File binario scritto con successo!\n");
    }

    printf("File scritto con successo!\n");
}

//funzione per leggere e stampare su monitor le informazioni del file di record 
//(si usi il controllo di fine file e non il ciclo for con N perché la funzione 
//sia valida quale che sia il numero di record del file (quindi anche diverso da N))

void leggiFile(FILE *file){
    char ch;
    while (fread(&Record, sizeof(Record), 1, file) == 1){
        
    }
}

