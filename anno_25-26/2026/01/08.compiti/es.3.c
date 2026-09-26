#include <stdio.h>

int main() {
    int a, b, i, temp;
    int contatore = 0;

    printf("Inserisci il primo estremo (a): ");
    scanf("%d", &a);
    printf("Inserisci il secondo estremo (b): ");
    scanf("%d", &b);

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    printf("Numeri pari tra %d e %d:\n", a, b);

    for (i = a; i <= b; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
            contatore++;
        }
    }

    printf("\nIn totale ci sono %d numeri pari.\n", contatore);

    return 0;
}
