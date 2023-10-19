#include <stdio.h>

int main(void)
{

    int matriz[9][3];

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j == 0)
            {
                matriz[i][j] = i+1;
            }else if (j == 1)
            {
                matriz[i][j] = (i/3)+1;
            }
            
        }
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}