#include <stdio.h>

typedef struct Persona{
    char nome[20];
    int eta;
}persona;


int main(){
    persona buffer;
    printf("inserisci il suo nome:\n");
    scanf("%s",buffer.nome);

    printf("inserisci la sua età:\n");
    scanf("%d",&buffer.eta);

    FILE *fp = fopen("file.txt","wb");


    if(fp == NULL){
        return 0;
    }

    fwrite(&buffer,sizeof(persona),1,fp);

    fclose(fp);

    FILE *file = fopen("file.txt","rb");

    fread(&buffer,sizeof(persona),1,file);

    fclose(file);

    printf("%d,%s", buffer.eta,buffer.nome);

}