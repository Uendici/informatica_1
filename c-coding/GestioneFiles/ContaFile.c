//Scrivi un programma che conta i caratteri, le parole e le righe presenti in un file di testo (non gli spazi, tabulazioni e a capo)
#include <stdio.h>

int main(){
    char buffer[100];
    FILE *file = fopen("FileDiProva.txt" , "w");
    if(file == NULL){
        perror("file non trovato");
    }

    fgets(buffer,100,file);

    
}