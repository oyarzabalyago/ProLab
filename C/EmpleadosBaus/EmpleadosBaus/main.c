#include <stdio.h>
#include <stdlib.h>
#define TAM (20)
str
int menu();
void inicializarEmpleados(eEmpleado lista[], int tam);
void mostrarEmpleado(eEmpleado unEmpleado);
void mostrarEmpleados(eEmpleado unEmpleado[], int tam);
int buscarLibre(eEmpleado lista[], int tam);
int buscarEmpleado(eEmpleado lista[], int tam, int legajo);
void altaEmpleado(eEmpleado lista[], int tam);

typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldo;
    int isEmpty;

}eEmpleado;



int main()
{
char seguir ='s';
eEmpleado empleado[TAM];
inicializarEmpleados(eEmpleados TAM);

 do {
         switch(menu()){
                 case 1:
                      printf("Alta\n\n");
                      system("pause");
                 break;

                 case 2:
                          printf("Baja\n\n");
                      system("pause");
                 break;

                  case 3:
                        printf("Modificacion\n\n");
                        system("pause");
                 break;

                  case 4:
                        printf("Listar\n\n");
                        system("pause");
                 break;

                  case 5:
                        printf("Ordenar\n\n");
                        system("pause");
                 break;

                  case 6:
                        printf("salir\n\n");
                        system("pause");
                 break;
         }


 }while(seguir=='s');


}



int menu(){
int opcion;

 system ("cls");
 printf("\n***Menu de Opciones ***\n\n");
 printf("1- Alta");
 printf("2- Baja");
 printf("3- Modificacion");
 printf("4- Listar");
 printf("5- Ordenar");
 printf("6- Salir/");
 printf("Su Opcion es");
 scanf("%d", &opcion);


 }


void inicializarEmpleados(eEmpleado lista[], int tam)
{
 for (int i=0; i< tam; i++)
 {
    lista[i].isEmpty=1;
 }

}


void mostrarEmpleado(eEmpleado unEmpleado)
{
    printf("%d, %s, %c, %.2f\n",unEmpleado.legajo, unEmpleado.nombre, unEmpleado.sexo, unEmpleado.sueldo);

}

void mostrarEmpleados(eEmpleado lista[], int tam)
{
    system ("cls");
    printf("Legajo nombre sexo sueldo \n\n");

    for(int i=0; i<tam; i++)
    {
        if(lista[i].isEmpty==0)
        {
            mostrarEmpleado(lista[i]);
        }
    }
}

int buscarLibre(eEmpleado lista[], int tam)
{
    int libre=-1;
    for (int i=o; i<tam;i++)
    {

        if(lista.isEmpty==1)
        {
            libre=i;
            break;
        }
    }
    return libre;
}


int buscarEmpleado(eEmpleado lista[], int tam, int legajo)
{
    int indice=-1;
    for (int i=o; i<tam;i++)
    {

        if(indice[i].legajo==legajo && lista[i].isEmpty==0)
        {
            libre=i;
            break;
        }
    }
    return indice;
}


void altaEmpleado(eEmpleado lista[], int tam)
{



}


void bajaEmpleado(eEmpleado lista[], int tam)
{
int legajo;
printf("Ingrese el legajo a eliminar");
scanf("%d", &legajo);
existe=buscarEmpleado(lista, tam, legajo);
if(existe==-1)
{
    lista[legajo].isEmpty=1;
    pintf("Operacion exitosa");

}


}
