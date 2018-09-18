#include "oyarzabal.h"


void mostrarUnAlumno(sAlumno miAlumno)
{
    printf("Legajo: %d\nAlumno: %s\nPromedio: %.2f\nEdad: %d\n",miAlumno.legajo, miAlumno.nombre, miAlumno.promedio, miAlumno.edad);
}


sAlumno pedirUnAlumno()
{
    sAlumno alumnito;

    printf("Ingrese legajo: ");
    scanf("%d", &alumnito.legajo);

    printf("Ingrese nombre: ");
    scanf("%s", alumnito.nombre);

    printf("Ingrese promedio: ");
    scanf("%f", &alumnito.promedio);

    printf("Ingrese edad: ");
    scanf("%d", &alumnito.edad);

    return alumnito;
}


//cargar el listado
void cargarListaDeAlumnos(sAlumno listado[], int tam)
{
    int i;

        for(i=0; i<tam; i++)
    {
        listado[i]=pedirUnAlumno();
    }
}


//mostrar el listado
void mostrarListaDeAlumnos(sAlumno listado[], int tam)
{
    int i;

        for(i=0; i<tam; i++)
    {
        mostrarUnAlumno(listado[i]);
    }
}


void OrdenaListaDeAlumnosPorNombre(sAlumno listado[], int tam)
{
sAlumno auxAlumno;
int i;
int j;

    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(strcmp(listado[i].nombre,listado[j].nombre)>0)
            {
                auxAlumno = listado[i];
                listado[i] = listado[j];
                listado[j] = auxAlumno;

            }
        }
    }

}
