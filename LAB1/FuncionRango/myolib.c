#include "myolib.h"

//funcion
int getInt(char msj[], char msjerr[], int nummin, int nummax)
{
    int valor;

    printf("%s", msj);
    scanf("%d", &valor );

    while(valor < nummin || valor > nummax)
    {
        printf("%s", msjerr);
        scanf("%d", &valor );
    }

    system ("cls");
    return valor;
}
