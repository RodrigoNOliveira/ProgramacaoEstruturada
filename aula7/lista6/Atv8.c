// 08) Gere uma matriz 6x6 com valores aleatórios decimais entre 0 e 1. Calcule a média dos valores da matriz. Imprima a matriz e a média encontrada.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    double matriz[7][7],x, media, soma = 0;
    int i, j;
    srand(time(NULL));
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            x = rand() % 100;
            matriz[i][j] = x/100;
            printf("%0.2lf ", matriz[i][j]);
            soma = soma + matriz[i][j];
        }

        printf("\n");
    }
    media = soma / 49;
     printf("\nA media é de: %0.2lf", media);
    return 0;
}