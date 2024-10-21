//Scrivi un programma che conta i caratteri, le parole e le righe presenti in un file di testo (non gli spazi, tabulazioni e a capo)
#include <stdio.h>

int main() {
    char buffer[100];
    int caratteri = 0, parole = 0, righe = 0;
    int parola = 0; // flag per verificare se siamo in una parola

    // Apri il file in modalità lettura
    FILE *file = fopen("FileDiProva.txt", "r");
    if (file == NULL) {
        perror("Errore nell'apertura del file");
        return 1;
    }

    // Leggi il file riga per riga
    while (fgets(buffer, 100, file) != NULL) {
        for (int i = 0; buffer[i] != '\0'; i++) {
            char c = buffer[i];

            // Controlla se il carattere non è uno spazio, tabulazione o newline
            if (c != ' ' && c != '\t' && c != '\n') {
                caratteri++; // conta caratteri validi
            }

            // Controllo parole (considera parola una sequenza di caratteri non bianchi)
            if (c != ' ' && c != '\t' && c != '\n' && !parola) {
                parola = 1;
                parole++;
            } else if (c == ' ' || c == '\t' || c == '\n') {
                parola = 0;
            }
        }

        // Conta righe (ogni fgets corrisponde a una riga)
        righe++;
    }

    // Chiudi il file
    fclose(file);

    // Stampa i risultati
    printf("Caratteri: %d\n", caratteri);
    printf("Parole: %d\n", parole);
    printf("Righe: %d\n", righe);

    return 0;
}
