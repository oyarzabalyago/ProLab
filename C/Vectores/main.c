#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vector[5];
    int i;

    for (i=0; i<5; i++)
    {
        printf("Ingrese un valor!\n");
        scanf("%d",&vector[i] );
    }

     for (i=0; i<5; i++)
    {
        printf(" %d",&vector[i] );
    }


    return 0;
}
