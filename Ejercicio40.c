#include <stdio.h>

int main(void)
{
    int numero;
    int primero = 0;
    int segundo = 1;
    int temporal;

    printf("Ingrese un numero de dos digitos para verificar si pertenece a la serie de Fibonacci: ");
    scanf("%d", &numero);

    while (numero < 10 || numero < 0)
    {
        printf("Por favor, ingrese un numero positivo y mayor o igual a 10: ");
        scanf("%d", &numero);
    }

    while (primero < numero)
    {
        temporal = primero;
        primero = segundo;
        segundo = temporal + segundo;
    }

    if (primero == numero)
    {
        printf("El numero %d pertenece a la serie de Fibonacci.\n", numero);
    }
    else
    {
        printf("El numero %d no pertenece a la serie de Fibonacci.\n", numero);
    }

    return 0;
}
