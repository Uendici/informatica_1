//Scrivi un programma che conta i caratteri, le parole e le righe presenti in un file di testo (non gli spazi, tabulazioni e a capo)
#include <stdio.h>

int main() {
    char buffer[100];
    int caratteri = 0, parole = 0, righe = 0, in_parola = 0;

    FILE *file = fopen("FileDiProva.txt", "r");
    if (file == NULL) {
        perror("Errore nell'apertura del file");
        return 1;
    }

    while (fgets(buffer, 100, file) != NULL) {
        for (int i = 0; buffer[i] != '\0'; i++) {
            if (buffer[i] != ' ' && buffer[i] != '\t' && buffer[i] != '\n') {
                caratteri++;
                if (!in_parola) {
                    parole++;
                    in_parola = 1;
                }
            } else {
                in_parola = 0; 
            }
        }
        righe++;  
    }

    fclose(file);

    printf("Caratteri: %d\n", caratteri);
    printf("Parole: %d\n", parole);
    printf("Righe: %d\n", righe);

    return 0;
}

