// 04) Use a matriz do exercício 03 e calcule a soma de todos os números negativos, e calcule a soma de todos os números positivos. Imprima na tela a matriz, a soma dos negativos, e a soma dos positivos.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int matriz[5][5], i, j, x, neg = 0, pos = 0;
    srand(time(NULL));
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            matriz[i][j]= 10 - rand() % 20;
            printf("%3d ", matriz[i][j]);
            if (matriz[i][j]<0){
                neg = neg + matriz[i][j];
            } else{
                pos = pos + matriz[i][j];
            }
        }
        printf("\n");
    }

    printf("Soma dos negativos: %d\nSoma dos positivos: %d", neg, pos);

    return 0;
}
