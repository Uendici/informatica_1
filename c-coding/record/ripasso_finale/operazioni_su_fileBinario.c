#include <stdio.h>

typedef struct personale {
    char nome[10];
    int numero_persona;
} personale;

// Prototipi delle funzioni
void scrittura(struct personale *p1);
void lettura(struct personale *p1);
void stampa(const struct personale *p1);
void modifica(struct personale *p1);

int main() {
    struct personale impiegati[2];
    scrittura(impiegati);  // Passa per riferimento
    lettura(impiegati);    // Passa per riferimento
    stampa(impiegati);     // Passa per riferimento (const perché non modifica p1)
    modifica(impiegati);  // Passa per riferimento      
    return 0;
}

void scrittura(struct personale *p) {
    FILE *f = fopen("personale.dat", "wb");
    if (f == NULL) {
        perror("Errore nell'apertura del file");
        return;
    }

    printf("Scrivi il nome e il numero della persona:\n");
    for(int i = 0; i < 2; i++){
        scanf("%s", p[i].nome);
        scanf("%d", &p[i].numero_persona);
    }
    

    size_t buffer = fwrite(p, sizeof(struct personale), 1, f);
    if (buffer != 1) {
        printf("Errore nella scrittura dei dati\n");
    }

    fclose(f);
}

void lettura(struct personale *p) {
    FILE *f = fopen("personale.dat", "rb");
    if (f == NULL) {
        perror("Errore nell'apertura del file");
        return;
    }

    size_t buffer = fread(p, sizeof(struct personale), 1, f);
    if (buffer != 1) {
        printf("Errore nella lettura dei dati\n");
    }

    fclose(f);
}

void stampa(const struct personale *p) {
    for(int i = 0; i < 2; i++){
        printf("Nome: %s\n", p[i].nome);
        printf("Numero: %d\n", p[i].numero_persona);
    }
}

void modifica(struct personale *p){
    int impiegato_da_modificare;

    FILE *f = fopen("personale.dat","r+b");
    printf("Quale impiegato vuoi modificare?\n");
    scanf("%d", &impiegato_da_modificare);

/*
Modifica il numero_persona di un singolo impiegato nel file binario.
L'utente deve specificare l'indice (da 0 a 1, nel caso di 2 impiegati) dell'impiegato da aggiornare e fornire il nuovo valore.
 Utilizza fseek per posizionarti direttamente nella parte corretta del file per riscrivere solo i dati del numero di quell'impiegato, senza riscrivere tutto il file.
*/
    if(impiegato_da_modificare == 0){
        fseek(f,sizeof(personale), SEEK_SET);
        scanf("%d", &p[0].numero_persona);
    }else if(impiegato_da_modificare == 1){
        fseek(f,sizeof(personale)*2, SEEK_SET);
        scanf("%d", &p[1].numero_persona);
    }
    size_t buffer = fwrite(p, sizeof(struct personale), 1, f);
    
    stampa(p);

    fclose(f);
}
