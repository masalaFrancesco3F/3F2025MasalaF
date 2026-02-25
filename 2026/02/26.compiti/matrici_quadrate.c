#include <stdio.h>
#include <stdlib.h>

#define N 4

void Trasposta(int m[N][N], int mt[N][N]);
int SommaDiagonale(int m[N][N]);
void Stampa(int m[N][N]);

int main() {
    int mat[N][N] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int matt[N][N];
    int tot;
    int scelta;

    do {
        printf("\n1. Somma diagonale principale\n");
        printf("2. Matrice trasposta\n");
        printf("0. Esci\n");
        printf("Fai una scelta: ");
        scanf("%d", &scelta);

        switch(scelta) {
            case 1:
                tot = SommaDiagonale(mat);
                printf("Somma diagonale principale = %d\n", tot);
                break;
            case 2:
                Trasposta(mat, matt);
                printf("\nMatrice data:\n");
                Stampa(mat);
                printf("\nMatrice trasposta:\n");
                Stampa(matt);
                break;
            case 0:
                break;
            default:
                printf("Scelta non valida!\n");
        }
    } while (scelta != 0);

    return 0;
}

void Stampa(int m[N][N]) {
    int i, j;
    for(i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
}

void Trasposta(int m[N][N], int mt[N][N]) {
    int i, j;
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            mt[j][i] = m[i][j];
        }
    }
}

int SommaDiagonale(int m[N][N]) {
    int i, tot = 0;
    for (i = 0; i < N; i++) {
        tot = tot + m[i][i];
    }
    return tot;
}
