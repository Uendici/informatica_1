#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define N 3  

typedef struct {
    int id;
    char nome[50];
    int voti[5];
    float media;
} Record;

void scriviFile(FILE *file, Record records[]); // scrive un file di N record
void leggiFile(FILE *file); // legge e stampa le informazioni dei record dal file
void caricaVoti(Record records[]); // caricamento casuale dei voti
int confrontoNome(Record records[],FILE *file); // conta quante volte un nome è presente nei record
void calcolaMediaVoti(Record records[]); // calcola e assegna la media dei voti per ciascun record
void stampaDettagliVoti(Record records[]); // stampa il nome, la media, il voto più alto e il voto più basso

int main() {
    int nomidoppio;
    FILE *file = fopen("prova1.dat", "wb");
    if (file == NULL) {
        perror("Errore nell'apertura del file");
        return 1;
    }
    srand(time(NULL));
    Record records[N];

    caricaVoti(records);
    calcolaMediaVoti(records);
    scriviFile(file, records);
    fclose(file); 

    file = fopen("prova1.dat", "rb");
    if (file == NULL) {
        perror("Errore nell'apertura del file");
        return 1;
    }

    nomidoppio = confrontoNome(records,file);
    leggiFile(file);

    printf("I nomi uguali sono: %d\n", nomidoppio);

    stampaDettagliVoti(records);

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

void leggiFile(FILE *file) {
    Record recordvisualizzato;
    printf("CONTENUTO DEL FILE:\n");
    while (fread(&recordvisualizzato, sizeof(Record), 1, file) == 1) {
        printf("ID: %d, Nome: %s, Media: %.2f\n", recordvisualizzato.id, recordvisualizzato.nome, recordvisualizzato.media);
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

int confrontoNome(Record records[],FILE *file) {
    int contatore = 0;
    char nomerichiesto[50];
    Record record;

    printf("Scrivi il nome da ricercare:\n");
    scanf("%s", nomerichiesto);

    fseek(file, 0, SEEK_SET);

    while (fread(&record, sizeof(Record), 1, file)) {
        if (strcmp(record.nome, nomerichiesto) == 0) {
            contatore++;
        }
    }
    return contatore;
}

void calcolaMediaVoti(Record records[]) {
    for (int i = 0; i < N; i++) {
        int somma = 0;
        for (int j = 0; j < 5; j++) {
            somma += records[i].voti[j];
        }
        records[i].media = somma / 5.0;
    }
}

void stampaDettagliVoti(Record records[]) {
    for (int i = 0; i < N; i++) {
        int votoMassimo = records[i].voti[0];
        int votoMinimo = records[i].voti[0];

        // Trova il voto massimo e minimo
        for (int j = 1; j < 5; j++) {
            if (records[i].voti[j] > votoMassimo) {
                votoMassimo = records[i].voti[j];
            }
            if (records[i].voti[j] < votoMinimo) {
                votoMinimo = records[i].voti[j];
            }
        }

        printf("Studente: %s\n", records[i].nome);
        printf("Voto più alto: %d\n", votoMassimo);
        printf("Voto più basso: %d\n", votoMinimo);
        printf("\n");
    }
}
