#include <stdio.h>
#include <stdlib.h>
void controllo ()
{
    char nome[15];
    int eta;
    printf("Inserire il nome");
    scanf("%s", nome);
    printf("Inserire l'eta'");
    scanf("%d", &eta);
    if (eta >=18)
    printf("%s" è maggiorenne\n", nome);
}
    int main(int argc, char *argv[]) {    
    controllo();
    system("pause");
    return 0;
    }