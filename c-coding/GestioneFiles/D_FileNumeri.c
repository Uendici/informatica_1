//Scrivi un programma che legge il file numeri.txt (cifre numeriche ascii)composto da una sequenza di numeri 
//di una cifra separati da uno spazio bianco e successivamente scrive 2 file, pari.txt e dispari.txt, nei 
//quali dovrai inserire i numeri che hai letto a seconda del loro valore pari o dispari

#include <stdio.h>

int main(){

    char buffer[100];

    FILE *file = fopen("numeri.txt", "r");
    FILE *file2 = fopen("pari.txt", "w");
    FILE *file3 = fopen("dispari.txt", "w");

    if(file == NULL){
        perror("file non trovato");
        return 1;
    }

    while (fgets(buffer, 100, file) != NULL) {
        for (int i = 0; buffer[i] != '\0'; i++) {
            if (buffer[i] >= '0' && buffer[i] <= '9') { 
                int num = buffer[i] - '0'; 
                if (num % 2 == 0) {
                    fprintf(file2, "%d ", num);
                } else {
                    fprintf(file3, "%d ", num);
                }
            }
        }
    }

    
    fclose(file);
    fclose(file2);
    fclose(file3);

    return 0;
}