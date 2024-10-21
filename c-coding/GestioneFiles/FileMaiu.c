
//Scrivi  un  programma  che  legge  il  file  nomi.txt e  scrive  un  file  NOMI2.TXT,  dove  tutti  i  nomi  sono stati trasformati in caratteri maiuscoli. 
#include <stdio.h>
int main(){
    char buffer[100];
    char buffer2[100];
    FILE *file = fopen("nomi.txt", "r");
    FILE *file2 = fopen("nomi2.txt", "w");

    if(file == NULL){
        perror("file non presente\n");
        return 1;
    }else{
        while(fgets(buffer, 100, file)!=NULL){
            for (int i = 0; buffer[i] != '\0'; i++) {
                if (buffer[i] >= 'a' && buffer[i] <= 'z') {
                    buffer[i] = buffer[i] - 32;
                }
            }
            fputs(buffer,file2);
        }
        
        printf("%s\n", buffer);
    }
    fclose(file);
    fclose(file2);
    return 0;
}