#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vector[5];
    int i;
    char rta;
    int indice;
    int valor;

    for (i=0; i<5; i++)
    {
        vector[i]=0;
    }

    do
    {
        printf("Ingrese un valor\n");
        scanf("%d", &valor);



        printf("Ingrese el indice\n");
        scanf("%d", &indice);

        if ( indice < 5)
        {
            vector[indice]=valor;
        }


        printf("desean continuar s/n \n");
        scanf("%d", &rta);

    }while(rta=='s');

     for (i=0; i<5; i++)
    {
        printf(" %d",&vector[i] );
    }

    return 0;
}


int buscarNumero(int vec[], int tam, int valor)
{
    int indice =-1;

    for (int i=0; i<tam; i++)
    {
        if(vec[i] == valor)
        {
            indice = i;
            break;
        }
    }
    return indice;
}


int buscarNumero(int vec[], int tam)
{
    int indice =-1;
    int valor;
    int valor2=0;

    for (int i=0; i<tam; i++)
    {
        valor=vec[i];

        if(valor<valor2)
        {
            valor=valor2
        }

    }
    return indice;
}




