#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void stampa_numeri ()
{
    int num;
    int massimo,minimo;
    srand(time(o));
    rand();
    massimo=50;
    minimo=0;
    num=(rand()*(massimo-minimo+1)/RAND_MAX)+minimo;
    while(num != 0){
        printf("%d\n", num);
        num=(rand()*(massimo-minimo+1)/RAND_MAX)+minimo;
    }
}
int main(int argc, char *argv[]) {
    stampa_numeri();
    system("PAUSE");
    return 0;
}