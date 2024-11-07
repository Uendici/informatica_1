#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 3
typedef struct{
    int numeretto;

}struttura;

void carica(struttura struttura1[],FILE *file);
void correggi(struttura struttura1[],FILE *file);

int main(){
     
    FILE *file = fopen("DaCorreggere.dat","r+b");
    if(file == NULL){
        perror("errore riscontrato\n");
        return 1;
    }
    struttura struttura1[N];
    carica(struttura1,file);
    for(int i = 0; i < N; i++){
        printf(" %d",struttura1[i].numeretto);
    }
    fclose(file);
    return 0;
}

void carica(struttura struttura1[], FILE *file) {
    printf("scrivi 3 numeri:\n");
    for (int i = 0; i < N; i++) {
        printf("%d> ",i+1);
        scanf("%d", &struttura1[i].numeretto);
    }
    fseek(file, 0, SEEK_SET); 
    fwrite(struttura1, sizeof(struttura), N, file);
}

void correggi(struttura struttura1[], FILE *file) {
    fseek(file, 0, SEEK_SET); 

    while (fread(struttura1, sizeof(struttura), N, file) == N) {
        int flag = 0;
        for (int i = 0; i < N; i++) {
            if (struttura1[i].numeretto < 4) {
                flag = 1;
                struttura1[i].numeretto = 5;
            }
        }

        if (flag == 1) {
            fseek(file, -((long)sizeof(struttura) * N), SEEK_CUR); 
            fwrite(struttura1, sizeof(struttura), N, file);
            fseek(file, 0, SEEK_CUR); 
        }
    }
}