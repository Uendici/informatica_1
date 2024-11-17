#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[10];
    int numero;
}info;

int main(){

    int ch;
    info studente1;
    FILE *file = fopen("whaaaaa.dat","wb+");
    if(file == NULL){
        perror("nuh uh\n");
        return 1;
    }

    //chiedi un messaggio da scrivee all'utente nel file e poi visualizzalo nel terminale e correggi il nome cambiando le r in a 

    printf("nome e numero\n");
    scanf("%s",studente1.nome);
    scanf("%d",&studente1.numero);

    size_t eh = fwrite(&studente1,sizeof(FILE),1,file);
    if(eh == 0){
        perror("nuh uh\n");
        return 1;
    }

    fseek(file,0, SEEK_SET);

    while(fread(&studente1,sizeof(FILE),1,file) == 1){
        printf("nome: %s, numero: %d\n",studente1.nome,studente1.numero);
    }

    rewind(file);
    if()
    return 0;
}