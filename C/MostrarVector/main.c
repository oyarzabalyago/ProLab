#include <stdio.h>
#include <stdlib.h>

void mostrarCharArray(char vec[], int tam);
void mostrarOrdenarArray(char vec[], int tam);

int main()
{
    char letras[]={'a','A','b','B','c','C','d','D'};

    mostrarCharArray(letras, 8);
    mostrarOrdenarArray(letras, 8);
    mostrarCharArray(letras, 8);


    return 0;
}

void mostrarCharArray(char vec[], int tam)
{

    for(int i=0; i<tam; i++)
    {
        printf("%c ", vec[i]);
    }

printf("\n\n");

}


void mostrarOrdenarArray(char vec[], int tam, int criterio)
{
char aux;

    for(int i=0; i<tam-1; i++)
    {
        for(int j=i+1; j<tam; j++)
        {
            if(vec[i] > vec[j] && criterio == 1)
            {
                aux=vec[i];
                vec[i]=vec[j];
                vec[j]=aux;
            }

            if(vec[i] < vec[j] && criterio == 0)
            {
                aux=vec[i];
                vec[i]=vec[j];
                vec[j]=aux;
            }
        }
    }

}


