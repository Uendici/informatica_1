#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUM_STUD 1
typedef struct{
    int giorno;
    int mese;
    int anno;
}data;

typedef struct{
    char nome[20];
    char cognome[20];
    data nascita;
}persona;

int main(){

    persona t[NUM_STUD];
    FILE *file = fopen("UAAAAAAH.dat", "rwb+");

    for(int i = 0; i < NUM_STUD; i++){
        printf("scrivi il tuo nome\n");
        scanf("%s",t[i].nome);
        printf("scrivi il tuo cognome\n");
        scanf("%s",t[i].cognome);
        printf("scrivi la tua data di nascita\n");
        scanf("%02d %02d %04d", &t[i].nascita.giorno,&t[i].nascita.mese,&t[i].nascita.anno);
        size_t scrittura = fwrite(t,sizeof(persona),NUM_STUD,file);
    }
    for(int i = 0; i < NUM_STUD; i++){
        fread(t, sizeof(persona), NUM_STUD,file);
        printf("Nome: %s, Cognome: %s, Data di nascita: %02d/%02d/%04d\n", t[i].nome, t[i].cognome, t[i].nascita.giorno, t[i].nascita.mese, t[i].nascita.anno);
    }
    return 0;
}