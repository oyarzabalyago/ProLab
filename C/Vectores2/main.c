#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vector[5];
    int i;
    int indice;
    int valor;

    for (i=0; i<5; i++)
    {
        vector[i]=0;
    }

    for (i=0; i<3; i++)
    {
        printf("Ingrese un valor\n");
        scanf("%d", &valor);

        printf("Ingrese el indice\n");
        scanf("%d", &indice);

        vector[indice]=valor;
    }

     for (i=0; i<5; i++)
    {
        printf(" %d",&vector[i] );
    }

    return 0;
}
