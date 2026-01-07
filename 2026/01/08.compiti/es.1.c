#include <stdio.h>

int main() {
    const double PI = 3.141592653589793;
    int raggio;
    double circonferenza, area;

    printf("%-10s | %-20s | %-20s\n", "Raggio", "Circonferenza", "Area");
    printf("------------------------------------------------------------\n");

    for (raggio = 1; raggio <= 20; raggio++) {
        circonferenza = 2 * PI * raggio;
        area = PI * raggio * raggio;

        printf("%-10d | %-20.4f | %-20.4f\n", raggio, circonferenza, area);
    }

    return 0;
}
