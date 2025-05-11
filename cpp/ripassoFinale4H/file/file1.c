#include <stdio.h>

int main(){

    FILE *fp = fopen("file.txt","w");

    fputs("cricieti", fp);

    fclose(fp);
    FILE *file = fopen("file.txt","r");

    char buffer[100];

    fgets(buffer,sizeof(buffer),fp);

    printf("ecco cosa c'era scritto nel file: %s \n",buffer);

    fclose(fp);
    return 0;
}