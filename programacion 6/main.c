#include <stdio.h>
#include <stdlib.h>


typedef struct //este es el bueno, el del apunte no
{
    //campos o atributos
    int legajo;
    char nombre[50];
    int nota;
}sAlumno;

void mostarAlumno(eAlumno );

int main()
{
    sAlumno miAlumno; // = (1000,"Pepe",7); harcodeado
    //se reserva esoacio en memmoria para guardar algo del tipo alumnno
    printf("ingrese legajo: ");
    scanf("%d", &miAlumno.legajo);
    printf("ingrese nombre: ");
    fflush(stdin);
    gets(miAlumno.nombre);
    printf("ingrese nota: ");
    scanf("%d", &miAlumno.nota);

    printf("%d -- %s -- %d \n",miAlumno.legajo, miAlumno.nombre, miAlumno.nota);
    return 0;
}


