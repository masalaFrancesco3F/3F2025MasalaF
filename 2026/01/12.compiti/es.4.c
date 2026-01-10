#include <stdio.h>

int main() {
    FILE *file = fopen("voti.txt", "r");
    if (file == NULL) {
        return 1;
    }

    int voto;
    int max_suff = -1;
    int min_insuff = 31;

    while (fscanf(file, "%d", &voto) != EOF) {
        if (voto >= 18) {
            if (voto > max_suff) {
                max_suff = voto;
            }
        } else {
            if (voto < min_insuff) {
                min_insuff = voto;
            }
        }
    }

    fclose(file);

    if (max_suff != -1) {
        printf("Massimo sufficienze: %d\n", max_suff);
    } else {
        printf("Nessuna sufficienza presente.\n");
    }

    if (min_insuff != 31) {
        printf("Minimo insufficienze: %d\n", min_insuff);
    } else {
        printf("Nessuna insufficienza presente.\n");
    }

    return 0;
}
