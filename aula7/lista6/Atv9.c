// Gere uma matriz 6x6 com valores aleatórios decimais entre -1 e 1. Imprima a matriz. Multiplique todos os elementos por 2. Imprima a nova matriz. Subtraia de todos os elementos o valor 1 (um). Imprima a nova matriz.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    double matriz[6][6], x;
    int i, j;
    srand(time(NULL));
    printf("\nMatriz Original\n");
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            x = rand() % 200;
            matriz[i][j] = (x - 100) / 100;
            printf("%0.2lf ", matriz[i][j]);
            matriz[i][j] = matriz[i][j] * 2;
        }

        printf("\n");
    }
    printf("\n");
    printf("\nSegunda Matriz\n");
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("%0.2lf ", matriz[i][j]);
            matriz[i][j] = matriz[i][j] - 1;
        }

        printf("\n");
    }
    printf("\n");
    printf("\nTerceira Matriz\n");
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("%0.2lf ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}