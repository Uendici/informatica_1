#include <stdio.h>

int main (void){
    char buffer[100];

    FILE* fileprimo = fopen("fileprimo", "a");

    if(fileprimo==NULL){
        perror("il file non è stato creato");
        return 1;
    }

    FILE* filedue = fopen("filedue", "a");

    if(filedue==NULL){
         perror("il file non è stato creato");
        return 1;
    }


    while(fgetc(buffer,100,fileprimo)!=EOF){
        for(int i=0;buffer[i] < 100;i++){
            if(buffer[i]<='a'&& buffer[i]>='z'){
                buffer[i]=buffer[i]-32;
            }
        }


    }
    fclose(fileprimo);
    fclose(filedue);
    return 0;
}