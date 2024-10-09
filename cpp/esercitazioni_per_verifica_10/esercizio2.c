#include <stdio.h>
#include <string.h>

#define LUN_FRU 20
#define NUM_FRUT 3

typedef struct frutta {
    char frutto[LUN_FRU];  // Cambiato per gestire un solo frutto per struttura
} frutta;

void tabellaFrutta(frutta t[]);

int main() {
    frutta t[NUM_FRUT];

    tabellaFrutta(t);  // Chiamata alla funzione per riempire la tabella

    // Stampa i frutti per verificare l'input
    for (int i = 0; i < NUM_FRUT; i++) {
        printf("Frutto %d: %s\n", i + 1, t[i].frutto);
    }

    return 0;
}

void tabellaFrutta(frutta t[]) {
    for (int i = 0; i < NUM_FRUT; i++) {
        printf("Inserisci il nome del frutto %d: ", i + 1);
        scanf("%19s", t[i].frutto);  // Limita l'input a LUN_FRU - 1
    }
}