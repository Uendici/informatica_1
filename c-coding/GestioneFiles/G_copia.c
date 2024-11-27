#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Scrivi  un  programma  che  esegue  la  copia  di  un  file  di  testo.  Il  programma  legge  carattere per carattere il contenuto del file “file_src” 
//e lo ricopia nel file “file_dst”. “file_src” e “file_dst” vanno passati al main come parametri. Gestire eventuali errori o utilizzi non corretti del programma.
void letturafile();

int main(){
    letturafile();

    return 0;
}

void letturafile(){
    char ch;
    FILE *fileleggi = fopen("file_src.txt","w+");
    if(fileleggi == NULL){
        perror("errore nell'apertura del file");
    }
    FILE *filescrivi = fopen("file_dst.txt","w");
    if(filescrivi == NULL){
        perror("errore nell'apertura del file");
    }
    
    fputs("whaaaaa\nwhiii",fileleggi);
    fseek(fileleggi,0,SEEK_SET);
    while((ch = fgetc(fileleggi))!=EOF){
        fputc(ch,filescrivi);
    }
    printf("copia avvenuta con successo!\n");
}