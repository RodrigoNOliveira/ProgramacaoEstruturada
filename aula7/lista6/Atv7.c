// 07) Gere uma matriz 7x7 com valores aleatórios entre 10 e 50. Imprima a matriz. Substitua todos os valores pares por zero. Imprima novamente a matriz. Substitua todos os valores ímpares por um. Imprima novamente a matriz.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int matriz[7][7], i, j, x, neg = 0, pos = 0;
    srand(time(NULL));
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            matriz[i][j] = 10 + rand() % 40;
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
 printf("\n");
  printf("\n");
   printf("\n");
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            if (matriz[i][j] % 2 == 0)
            {
                matriz[i][j] = 0;
            }
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

 printf("\n");
  printf("\n");
   printf("\n");
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            if (matriz[i][j] % 2 != 0)
            {
                matriz[i][j] = 1;
            }
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
