#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file, *fileCopia;
    char ch;
    // apertura del file per poter leggere il contenuto e cambiarlo
    file = fopen("in.txt", "r");
    if (file == NULL) {
        perror("Errore dell'apertura del file ");
        return 1; 
    }
    // apertura del file nel quale verrà copiato il contenuto del primo file
    fileCopia = fopen("out.txt", "w");
    // copia effettivamente avvenuta
    while ((ch = fgetc(file)) != EOF) {
        if (fputc(ch, fileCopia) == EOF) {
            perror("copiatura del file non avvenuta");
            fclose(file);
            fclose(fileCopia);
            return 1;
        }
    }

    printf("copia del contenuto avvenuta\n");

    fclose(file);
    fclose(fileCopia);
    return 0;
}