#include <stdio.h>
#include <stdlib.h>

void mostrarOrdenarArray(char vec[], int tam);


int main()
{
    char letras[]={'a','A','b','B','c','C','d','D'};

    mostrarOrdenarArray(letras, 8);
    mostrarOrdenarArray(letras, 8);



    return 0;
}

void mostrarOrdenarArray(char vec[], int tam)
{
char aux;

    for(int i=0; i<tam-1; i++)
    {
        for(int j=i+1; j<tam; j++)
        {
            if(vec[i] > vec[j])
            {
                aux=vec[i];
                vec[i]=vec[j];
                vec[j]=aux;
            }
        }
    }

        printf("%c ", vec[tam]);

}



