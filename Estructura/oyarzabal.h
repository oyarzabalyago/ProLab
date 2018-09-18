/** \brief definicion de estructura variable
 *
 * \param
 * \param
 * \return
 *
 */

typedef struct
{
    int legajo;
    char nombre[30];
    float promedio;
    int edad;
}sAlumno;


void mostrarUnAlumno(sAlumno);
sAlumno pedirUnAlumno();
void cargarListaDeAlumnos(sAlumno listado[], int tam);
void mostrarListaDeAlumnos(sAlumno listado[], int tam);
void OrdenaListaDeAlumnosPorNombre(sAlumno listado[], int tam);

