//copia un file in un altro invertendo le lettere minuscole in maiuscole 
#include <stdio.h>
int main(){
    char c;
    FILE *puntafile;
    FILE *puntafile2;
    puntafile = fopen("test.txt", "w");
    puntafile2 = fopen("test2.txt", "w");
    if(puntafile != NULL){
        while (!feof(puntafile)){
            c = fgetc (puntafile);
            fputc (c, puntafile2);
            printf("%c", c);
            if(puntafile < 'A' && puntafile > 'Z'){
                puntafile = 'a' - 32;
            }
        }
    }else{
        perror ("\n il file 1 non può essere aperto! ");
    }

    if(puntafile2 != NULL){
        while (!feof(puntafile2)){
            if(puntafile2 < 'A' && puntafile2 > 'Z'){
                puntafile2 = 'a' - 32;
            }
        }
    }else{
        perror ("\n il file 2 non può essere aperto! ");
    }

    fclose(puntafile2);
    fclose(puntafile);
    printf("\n");
    return 0;
}