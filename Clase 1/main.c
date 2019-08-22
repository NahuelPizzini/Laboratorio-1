#include <stdio.h>
#include <stdlib.h>

int main()
{

    char sexo;
    float altura;
    int edad;
    char seguir;
    char respuesta = 's';
    float alturaVieja = 0;
    float alturaMasJoven;
    int edadMasVieja = 0;
    int edadMenor;
    float promedioAlturaHombres;
    int acumuladorDeAlturas =0;
    int contadorDeAlturas =0;
    float promedioEdades;
    int acumuladorDeEdades =0;
    int contadorDeEdad = 0;


    do
    {
        printf("\n ingrese la edad:");
        scanf("%d", &edad);
        printf("\n ingrese la altura");
        scanf("%f", &altura) ;
        fflush(stdin);
        printf("\n ingrese el sexo (f/m):");
        scanf("%c", &sexo);
        fflush(stdin);
        printf("\n quiere cargar otro? (s/n)");
        scanf("%c", seguir);

        if (edadMasVieja < edad && sexo == 'f')
        {
            alturaVieja = altura;
            edadMasVieja = edad;
        }




    }
    while(respuesta == 's');









    /*scanf("%f", &altura);
    scanf("&d", &edad);
    fflush(stdin);
    scanf("%c", &sexo);

    printf("la altura es: %f la edad es: %d y el sexo es: %c",altura,edad,sexo);
    */




    /* if(edad < 13)
    {
        printf("es un niño");
    }
    else if(edad < 18)
    {
        printf("es un adolescente");
    }
    else
    {
        printf("es mayor");

    }*/
}
