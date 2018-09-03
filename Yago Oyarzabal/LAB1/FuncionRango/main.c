#include <stdio.h>
#include <stdlib.h>
#include "myolib.h"

int main()
{

int     nummin=18;
int     nummax=65;

    printf("El valor ingresado es: %d\n\n\n", getInt("Ingrese una edad:\n ","Error, Reingrese una edad:\n ",nummin,nummax));

}


