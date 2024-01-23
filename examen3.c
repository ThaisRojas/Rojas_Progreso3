#include <stdio.h>

//Estructura alumno modificada
struct alumno
{
    int matricula;
    char nombre[50];
    char direccion[50];
    char materia[50];
    float promedio;
};

void ingresarDatos(struct alumno *estudiante);
void mostrarDatos(const struct alumno *estudiante, int numEstudiantes);

