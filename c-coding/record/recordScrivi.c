#include <stdio.h>

#define N 10

void stampa(const char *filename, int *elementi_scritti);
void carica(int dati_da_scrivere[], int *elementi_scritti);

int main() {
    int dati_da_scrivere[N], elementi_scritti;
    FILE *fileout = fopen("prova1.dat", "wb");
    if (fileout == NULL) {
        perror("sbagliato UwU");
        return 1;
    }
    carica(dati_da_scrivere, &elementi_scritti);
    fwrite(dati_da_scrivere, sizeof(int), N, fileout);
    fclose(fileout);
    stampa("prova1.dat", &elementi_scritti);
    return 0;
}

void carica(int dati_da_scrivere[], int *elementi_scritti) {
    printf("scrivi 10 numeri\n");
    for (int i = 0; i < N; i++) {
        printf("%d> ", i + 1);
        scanf("%d", &dati_da_scrivere[i]);
    }
    *elementi_scritti = N;
}

void stampa(const char *filename, int *elementi_scritti) {
    FILE *filein = fopen(filename, "rb");
    if (filein == NULL) {
        perror("Errore apertura file");
        return;
    }
    int buffer[N];
    size_t elementi_letti = fread(buffer, sizeof(int), N, filein);
    fclose(filein);

    printf("Elementi letti: %zu\n", elementi_letti);
    for (size_t i = 0; i < elementi_letti; i++) {
        printf("%d ", buffer[i]);
    }
    printf("\n");
}
