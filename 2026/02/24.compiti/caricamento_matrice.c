#include <stdio.h>
#include <stdlib.h>

#define NRMax 20
#define NCMax 30

void StampaPerRighe() {
    int mat[NRMax][NCMax], nr, nc, r, c;
    FILE *f = fopen("numeri.txt", "r");
    
    if (f == NULL) {
        printf("Errore nell'apertura del file\n");
        return;
    }

    fscanf(f, "%d %d", &nr, &nc);
    for (r = 0; r < nr; r++)
        for (c = 0; c < nc; c++)
            fscanf(f, "%d", &mat[r][c]);

    printf("Matrice di %d righe e %d colonne (stampa per righe):\n", nr, nc);
    for (r = 0; r < nr; r++) {
        for (c = 0; c < nc; c++)
            printf("%d\t", mat[r][c]);
        printf("\n");
    }
    fclose(f);
}

void StampaPerColonne() {
    int mat[NRMax][NCMax], nr, nc, r, c;
    FILE *f = fopen("numeri.txt", "r");
    
    if (f == NULL) {
        printf("Errore nell'apertura del file\n");
        return;
    }

    fscanf(f, "%d %d", &nr, &nc);
    for (r = 0; r < nr; r++)
        for (c = 0; c < nc; c++)
            fscanf(f, "%d", &mat[r][c]);

    printf("Matrice di %d righe e %d colonne (stampa per colonne):\n", nr, nc);
    for (c = 0; c < nc; c++) {
        for (r = 0; r < nr; r++)
            printf("%d\t", mat[r][c]);
        printf("\n");
    }
    fclose(f);
}

int main() {
    StampaPerRighe();
    printf("\n");
    StampaPerColonne();
    
    return 0;
}
