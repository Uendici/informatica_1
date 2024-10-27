#include <stdio.h>

int main(){
    char buffer[100];
    FILE *file = fopen("FileDiProva2.txt", "a");

    if(file == NULL){
        perror("file non trovato");
        return 1;
    }

    fputs("i'm covering my ears like a kid, when your words came out then i go la la la",file);
    
    printf("\nfine file");
    fclose(file);
    return 0;
}