// 06) Gere uma matriz 5x5 com valores aleatórios entre 100 e 999. Encontre o segundo maior valor, e o segundo menor valor. Imprima a matriz e os segundos maior e menor.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int matriz[5][5], i, j, y, menor = 999, maior = 100, menor2=999, maior2=100;
    srand(time(NULL));
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            matriz[i][j]= 100 + rand() % 899;
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

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (matriz[i][j] < menor2 && matriz[i][j] > menor){
                menor2 = matriz[i][j];
            } 
            if(matriz[i][j] > maior2 && matriz[i][j]  < maior){
                maior2 = matriz[i][j];
            }
        }
    }

    

    printf("Maior valor: %d\nMenor valor: %d\nSegundo maior valor: %d\nSegundo menor valor: %d", maior, menor, maior2, menor2);

    return 0;
}