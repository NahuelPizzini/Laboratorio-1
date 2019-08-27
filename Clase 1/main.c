#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    float altura;
    char sexo;
    char seguir = 's';
    float alturaVieja;
    int edadVieja;
    int flag1 = 0;
    int flag2 = 0;
    int flag3 =0;
    int personaJoven;
    char sexoViejo;
    float alturaJoven;
    float promedioAHombres;
    int contadorHombres = 0;
    float acumuladorAHombres = 0;
    float promedioDeEdades;
    int contadorDePersonas = 0;
    int acumuladorDeEdades = 0;

    do
    {
        printf("Ingrese la edad de la persona: ");
        scanf("%d", &edad);
        while(edad < 1 || edad> 110)
        {
            printf("Edad no valida, reingrese la edad de la persona: ");
            scanf("%d", &edad);
        }

        printf("Ingrese la altura de la persona: ");
        scanf("%f", &altura);
        while(altura < 1 || altura > 2)
        {
            printf("Altura no valida, reingrese la altura de la persona: ");
            scanf("%f", &altura);
        }

        printf("Ingrese el sexo de la persona (m/f): ");
        fflush(stdin);
        scanf("%c", &sexo);
        while(sexo != 'f' && sexo != 'm')
        {
            printf("Sexo no valido, reingrese el sexo de la persona (m/f): ");
            fflush(stdin);
            scanf("%c", &sexo);
        }

        printf("\n Quiere seguir ingresando datos? (s/n): ");
        fflush(stdin);
        scanf("%c", &seguir);
        while(seguir != 'n' && seguir != 's')
        {
            printf("\n Quiere seguir ingresando datos? (utilice s para si / utilice n para no): ");
            fflush(stdin);
            scanf("%c", &seguir);
        }

        if (flag1 == 0 || edad > edadVieja && sexo == 'f')
        {
            alturaVieja = altura;
            flag1 = 1;
        }

        if(flag2 == 0 || edad < personaJoven)
        {
            personaJoven = edad;
            alturaJoven = altura;
            flag2 = 1;
        }

        if(flag3 ==0 || edad > edadVieja)
        {
            sexoViejo = sexo;
        }

        if(sexo == 'm')
        {
            contadorHombres ++;
            acumuladorAHombres += altura;
        }

        if(edad !=0)
        {
            contadorDePersonas ++;
            acumuladorDeEdades += edad;
        }
    }
    while(seguir == 's');

    promedioAHombres = acumuladorAHombres / contadorHombres;
    promedioDeEdades = acumuladorDeEdades / contadorDePersonas;

    printf("La altura de la mujer mas vieja es: %f \n", alturaVieja);
    printf("La edad de la persona mas joven es: %d \n", personaJoven);
    printf("La altura de la persona mas joven es: %f \n", alturaJoven);
    printf("El sexo de la persona mas vieja es: %c \n", sexoViejo);
    printf("El promedio de la altura de los hombres es: %f \n", promedioAHombres);
    printf("El promedio de las edades es: %f \n", promedioDeEdades);
}
