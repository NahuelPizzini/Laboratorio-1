#include <stdio.h>
#include <stdlib.h>


int main()
{
    int numero;
    int listadoDeNumeros[10];
    int i;
    for(i = 0; i<10 ; i++)
    {
        printf("ingrese edad:\n");
        scanf("%d ", &listadoDeNumeros[i]);
        //listadoDeNumeros[i]=0; //ESTO NO HACERLO MAS EN MI PUTA VIDA, HIJO DE PUTA
    }
      for(i=0; i<10; i++)
    {
    printf("las edades son: %d \n", listadoDeNumeros[i]);
    }
}

/*int main()
{
    int numero;
    int listadoDeNumeros[10];
    int i;
    for(i = 0; i<10 ; i++)
    {
        printf("ingrese edad:\n");
        scanf("%d ", &listadoDeNumeros[i]);
        listadoDeNumeros[i]=0;

    }
      for(i=0; i<10; i++)
    {
    printf("las edades son: %d \n", listadoDeNumeros[i]);
    }
}*/ //hasta aca esta



/*int main()
{
    int numero;
    int listadoDeNumeros[3];
    numero = 33;
    listadoDeNumeros[0]=66;
    int i;
       for(i=0; i<3; i++) //esto para todo arride cambiando la cantidad
    {
        listadoDeNumeros[i] = 0;
    }
    for(i=0; i<3; i++)
    {
        printf(" %d \n",listadoDeNumeros[i]);
    }
    return 0;
}*/
