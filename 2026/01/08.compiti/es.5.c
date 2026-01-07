#include <stdio.h>

int main() {
    int x, y, i;
    int somma = 0;

    printf("Inserisci il numero di partenza (y): ");
    scanf("%d", &y);
    printf("Inserisci quanti numeri successivi considerare (x): ");
    scanf("%d", &x);

    for (i = 1; i <= x; i++) {
        int numeroCorrente = y + i;
        somma += numeroCorrente * numeroCorrente;
    }

    printf("La somma dei quadrati dei %d numeri successivi a %d e': %d\n", x, y, somma);

    return 0;
}
