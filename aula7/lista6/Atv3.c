// 03) Gere uma matriz 5x5 com números aleatórios entre -10 e 10. Imprima a matriz com 3 caracteres para cada elemento.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int matriz[5][5], i, j, x;
    srand(time(NULL));
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            matriz[i][j]= 10 - rand() % 20;
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
