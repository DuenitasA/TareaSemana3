#include <stdio.h>

int main(void)
{

    int numero;
    int comprobar = 0;
    int residuo;
    printf("Ingrese un numero.\n");
    scanf("%d", &numero);

    do
    {
        residuo = numero % 10;
        if (residuo == 1)
        {
           comprobar++;
        }
        
        numero = numero / 10;
    } while (numero != 0);

    printf("Este numero tiene %d veces el 1. \n", comprobar);

    return 0;
}