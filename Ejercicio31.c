#include <stdio.h>

int main(void)
{
    int numero;
    int contador =1 ;
    float suma = 0;
    do
    {
        printf("Ingrese los numeros que quiera y cuando quiera parar de escribir numeros escriba el 0.\n");
        scanf("%d", &numero);

        if (numero % 5 == 0 && numero % 10 != 0)
        {
            contador ++;
            suma = suma + numero;
        }
        
    } while (numero != 0);

    printf("El promedio de los numeros terminados en 5 es igual a: %f \n", suma/contador );

    return 0;
}