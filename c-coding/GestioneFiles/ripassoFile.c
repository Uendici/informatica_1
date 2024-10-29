#include <stdio.h>
#include <stdlib.h>

int main (){

    char buffer[100];
    int c;
    FILE *filein = fopen("FileDiProva.txt","r");
    FILE *fileout = fopen("FileStampato.txt","w");

    while(fgets(buffer,100,filein)!=NULL){
        for(int i = 0; buffer[i] != '\0'; i++){
            if(buffer[i] >= 'a' && buffer[i] <= 'z'){
                buffer[i] = buffer[i] - 32;
            }
            if(buffer[i] < 'a' && buffer[i] > 'z'){
                buffer[i] = buffer[i] + 32;
            }
            fputc(buffer[i],fileout);
        }
    }
    fclose(filein);
    fclose(fileout);
    return 0;
}