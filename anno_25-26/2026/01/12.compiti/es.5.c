#include <stdio.h>

int main() {
    int n, i;
    float a, b, media, max_media;
    float max_a, max_b;

    printf("Inserisci il numero di coppie: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Inserisci coppia %d (due numeri): ", i + 1);
        scanf("%f %f", &a, &b);
        
        media = (a + b) / 2.0;

        if (i == 0 || media > max_media) {
            max_media = media;
            max_a = a;
            max_b = b;
        }
    }

    printf("La coppia con la media maggiore è: %.2f e %.2f (Media: %.2f)\n", max_a, max_b, max_media);

    return 0;
}
