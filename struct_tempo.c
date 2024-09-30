#include <stdio.h>

typedef struct {
    int ore;
    int minuti;
    int secondi;
} Ora;

Ora diffBetweenTimePeriod(Ora t1, Ora t2) {
    Ora diff;

    if (t1.secondi < t2.secondi) {
        t1.minuti--;
        t1.secondi += 60;
    }
    diff.secondi = t1.secondi - t2.secondi;

    if (t1.minuti < t2.minuti) {
        t1.ore--;
        t1.minuti += 60;
    }
    diff.minuti = t1.minuti - t2.minuti;

    diff.ore = t1.ore - t2.ore;

    return diff;
}

int main() {
    Ora ora1 = {5, 45, 30};
    Ora ora2 = {3, 50, 4};
    
    if (ora1.ore < ora2.ore) {
        printf("Errore: il primo orario deve essere maggiore o uguale al secondo.\n");
        return 0;
    }

    Ora differenza = diffBetweenTimePeriod(ora1, ora2);

    printf("Differenza orario: %d ore, %d minuti, %d secondi\n", differenza.ore, differenza.minuti, differenza.secondi);

    return 0;
}
