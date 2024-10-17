#include <stdio.h>
int main(){
    char nomefile[] = { "test.txt" };
    char c;
    FILE *puntafile;
    puntafile = fopen(nomefile, "r");
    if(puntafile != NULL){
        while (!feof(puntafile)){
            c = fgetc(puntafile);
            printf("%c",c);
        }
    }
    else {
        printf("\n il file non può essere aperto! ");
        
    }
    fclose(puntafile);
    printf("\n");
    return 0;
}