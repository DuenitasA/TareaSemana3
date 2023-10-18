#include <stdio.h>

int main(void)
{

    int numero;
    int contador = 0;
    printf("Ingrese un numero.\n");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++)
    {
        if (i % 5 == 0)
        {
            contador++ ;
        printf("%d.\n",i);
        }
    }
    printf("Entre 1 y el numero %d existen %d multiplos de 5 que son los mostrados anteriormente.\n", numero, contador);
    return 0;
}