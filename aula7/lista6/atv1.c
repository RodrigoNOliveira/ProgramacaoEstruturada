// 01) Gere uma matriz 10x10 com números aleatórios entre 10 e 99.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int matriz[10][10], j, i, x;
    srand(time(NULL));

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            matriz[i][j] = 10 + rand() % 89 + 1;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
