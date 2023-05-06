// 02) Gere uma matriz 6x6 com zeros. Imprima a matriz. Preencha a diagonal principal desta matriz com 1 (um). Imprima novamente.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[6][6], i, j, x;

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("0 ");
            if (i == j)
            {
                 matriz[i][j]= 1;
            }
            else
            {
                matriz[i][j]= 0;
            }
        }
        printf("\n");
    }
     printf("\n");
      printf("\n");
     for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("%d ",  matriz[i][j]);
            
        }
        printf("\n");
    }

    return 0;
}
