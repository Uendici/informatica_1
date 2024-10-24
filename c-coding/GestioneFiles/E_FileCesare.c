//Scrivere le funzioni cesareCrypt e cesareDecrypt che criptano o decriptano un file in input di una chiave key, usando l’algoritmo di Cesare. 
#include <stdio.h>
char cesare(char c, int key);

int main() {
    int key,scelta;
    char c;
    FILE *inputFile = fopen("input.txt", "r");
    FILE *outputFile = fopen("output.txt", "w");

    if (inputFile == NULL || outputFile == NULL) {
        perror("file non trovato");
        return 1;
    }

    printf("Inserisci la chiave di criptazione/decriptazione: ");
    scanf("%d", &key);
    printf("desideri:\n 1) cryptare\n 2) decryptare\n> ");
    scanf("%d",&scelta);
    if(scelta == 1){
        printf("\nfile criptato!\n");
        while ((c = fgetc(inputFile)) != EOF) {
        fputc(cesare(c, key), outputFile);
        }
    }
    if(scelta == 2){
        printf("\nfile decriptato!\n");
        while ((c = fgetc(inputFile)) != EOF) {
        fputc(cesare(c,-key), outputFile);
        }
    }


    fclose(inputFile);
    fclose(outputFile);

    return 0;
}

char cesare(char c, int key) {
    if (c >= 'A' && c <= 'Z') {
        return (c - 'A' + key) % 26 + 'A';
    }
    else if (c >= 'a' && c <= 'z') {
        return (c - 'a' + key) % 26 + 'a';
    }
    return c;
}
