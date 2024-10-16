#include <stdio.h>
int main(){
    char nomefile[] = { "/workspace/informatica_1/l_file/test.txt" };
    char c;
    FILE *puntafile;
    puntafile = fopen(nomefile, "r");
    if(puntafile == 0){
        while (!feof(puntafile)){
            c = fgetc(puntafile);
            printf("%c",c);
        }
    }
    else{
        printf("\n il file non può essere aperto! ");
        
    }
    fclose(puntafile);
    printf("\n");
    return 0;
}