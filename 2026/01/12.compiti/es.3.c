#include <stdio.h>

int main() {
    FILE *fp;
    int numero, max, min, primo = 1;

    fp = fopen("numeri.txt", "r");

    if (fp == NULL) {
        return 1;
    }

    while (fscanf(fp, "%d", &numero) != EOF) {
        if (primo) {
            max = numero;
            min = numero;
            primo = 0;
        } else {
            if (numero > max) max = numero;
            if (numero < min) min = numero;
        }
    }

    fclose(fp);

    if (primo == 0) {
        printf("Differenza: %d\n", max - min);
    }

    return 0;
}
