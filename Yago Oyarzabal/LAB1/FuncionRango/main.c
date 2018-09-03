#include <stdio.h>
#include <stdlib.h>

//prototipo
int getInt(char msj[], char msjerr[], int nummin, int nummax);

int main()
{

int     nummin=18;
int     nummax=65;

    printf("El valor ingresado es: %d", getInt("Ingrese una edad:\n ","Error, Reingrese una edad:\n ",nummin,nummax));

}

//funcion
int getInt(char msj[], char msjerr[], int nummin, int nummax)
{
    int valor;

    printf("%s", msj);
    scanf("%d", &valor );

    while(valor > nummin || valor < nummax)
    {
        printf("%s", msjerr);
        scanf("%d", &valor );
    }

    return valor;
}








/*
tp1 7/9
tp2 5/10
tp3 5/11
tp4 16/11

parcial 1) 8-11/10
parcial 2)23-26/11
*/
