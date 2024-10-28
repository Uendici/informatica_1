//Scrivi  un  programma  che  esegue  la  copia  di  un  file  di  testo.  
//Il  programma  legge  carattere per carattere il contenuto del file in.txt e lo ricopia nel file out.txt. 
#include <stdio.h>

int main() {
    char buffer[100];
    FILE *file = fopen("FileDiProva.txt", "r");
    if (file == NULL) {
        perror("File di origine non trovato");
        return 1;
    }
    FILE *file2 = fopen("copiato.txt", "w");
    if (file2 == NULL) {
        perror("File di destinazione non trovato");
        fclose(file);
        return 1;
    }

    while (fgets(buffer, 100, file) != NULL) {
        fputs(buffer, file2);
    }

    fclose(file);
    fclose(file2);

    printf("Copia completata con successo!\n");
    return 0;
}
