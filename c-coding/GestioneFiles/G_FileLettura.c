//Scrivi  un  programma  che  esegue  la  copia  di  un  file  di  testo.  Il  programma  
//legge  carattere per carattere il contenuto del file “file_src” e lo ricopia nel file “file_dst”. “file_src” e “file_dst” vanno 
#include <stdio.h>
int main(){
    FILE *fileletto = fopen("file_src.txt","r");
    if(fileletto == NULL){
        perror("file non trovato");
        return 1;
    }
    
}