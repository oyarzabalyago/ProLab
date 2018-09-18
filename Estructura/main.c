#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "oyarzabal.h"
//cantidad alumnos
#define A 3



int main()
{
    //array de alumnos
    sAlumno listadoMain[A];

    cargarListaDeAlumnos(listadoMain, A);

    mostrarListaDeAlumnos(listadoMain, A);

    printf("Ordenado: \n");

    OrdenaListaDeAlumnosPorNombre(listadoMain, A);

    mostrarListaDeAlumnos(listadoMain, A);

    return 0;
}



