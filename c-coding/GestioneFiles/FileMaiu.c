//trasforma tutte le lettere minuscole del file in lettere maiuscole 
#include <stdio.h>
int main(){
    char buffer[100];
    FILE *file = fopen("FileDiProva.txt", "r");

    if(file == NULL){
        perror("file non presente\n");
        return 1;
    }else{
        while(fgets(buffer, 100, file)!=NULL){
            for (int i = 0; buffer[i] != '\0'; i++) {
                if (buffer[i] >= 'a' && buffer[i] <= 'z') {
                    buffer[i] = buffer[i] - 32; // Trasforma il carattere in maiuscolo
                }
            }
        }
        printf("%s\n", buffer);
    }
    fclose(file);
    return 0;
}