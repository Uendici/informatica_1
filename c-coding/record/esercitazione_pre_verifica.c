#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];  
} nani;

void carica(nani *persona);  
void stampa(nani *persona);
int main() {
    nani persona;
    carica(&persona);  
    stampa(&persona);
    return 0;
}

void carica(nani *persona) {
    FILE *file = fopen("verica.dat", "ab");
    if (file == NULL) {
        perror("file non aperto\n");
        return;
    }

    printf("Inserisci il nome: ");
    scanf("%49s", persona->nome);  

    fwrite(persona, sizeof(nani), 1, file);
    fclose(file); 
}
void stampa(nani *persona) {
    printf("Nome: %s\n", persona->nome);
}