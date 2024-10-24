#include <stdio.h>

int main(){
    char buffer[100];

    FILE *file = fopen("FileDiProva.txt" , "r");
    if(file == NULL){
        perror("upsi");
        return 1;
    }else{
    fgets(buffer, 100, file);
    printf("%s\n", buffer);
    }
    fclose(file);
    return 0;
}