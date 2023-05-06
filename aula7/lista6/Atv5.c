// Gere uma matriz 10matriz[i][j]10 com números aleatórios entre 0 e 100. Encontre o maior, e o menor valor da matriz. Imprima a matriz, o maior e o menor valor.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int matriz[10][10], i, j, menor = 100, maior = 0;
    srand(time(NULL));
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            matriz[i][j]= rand() % 100;
            printf("%3d ", matriz[i][j]);
            if (matriz[i][j] < menor){
               menor = matriz[i][j];
            } 
            if(matriz[i][j]> maior){
               maior = matriz[i][j];
            }
        }
        printf("\n");
    }

    printf("Maior valor: %d\nMenor valor: %d", maior, menor);

    return 0;
}
