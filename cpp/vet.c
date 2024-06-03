#include <stdio.h>

int main() {
    int N;

    do {
        printf("Inserisci N (dimensione del vettore): ");
        scanf("%d", &N);
    } while (N <= 0);

    int v[N];

    for (int i = 0; i < N; i++) {
        printf("Inserisci un numero: ");
        scanf("%d", &v[i]);
    }

    for (int i = 1; i < N; i++) {
        int j = i;
        int temp = v[i];
        while (j > 0 && temp < v[j - 1]) {
            v[j] = v[j - 1];
            j--;
        }
        v[j] = temp;
    }

    printf("Vettore ordinato: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}


