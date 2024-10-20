//aggiungi altre scritte ad un file
#include <stdio.h>
int main(){
    char buffer[100];
    FILE *file = fopen("FileDiProva.txt","a");
    if(file == NULL){
        perror("file non trovato\n");
        return 1;
    }else{
        fgets(buffer,100,file);
        fprintf(file,"\nHolaaaa");
        printf("%s",buffer);
    }
    fclose(file);
    return 0;
}