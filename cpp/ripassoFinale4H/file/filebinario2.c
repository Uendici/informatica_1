#include <stdio.h>

typedef struct Persona{
    char nome[20];
    int eta;
}persona;


int main(){
    persona buffer[3];
    for(int i=0; i < 3; i ++){
        printf("inserisci il suo nome:\n");
        scanf("%s",buffer[i].nome);

        printf("inserisci la sua età:\n");
        scanf("%d",&buffer[i].eta);
    }


    FILE *fp = fopen("file.txt","wb");


    if(fp == NULL){
        return 0;
    }

    fwrite(&buffer,sizeof(persona),1,fp);

    fclose(fp);

    FILE *file = fopen("file.txt","rb");

    fread(&buffer,sizeof(persona),1,file);

    fclose(file);

    for(int i = 0; i < 3; i++){
        printf("%d,%s", buffer[i].eta,buffer[i].nome);
    }
    

}