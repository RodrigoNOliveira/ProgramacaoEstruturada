// Gere uma matriz 10x10 onde as linhas/colunas de 0 a 8 serão preenchidas aleatoriamente com valores entre 0 e 9. A linha 9 e a coluna 9, devem conter a soma dos elementos. Imprima a matriz. Exemplo: O elemento matriz[0][9] deve ter a soma de todos os elementos da primeira linha. O elemento matriz[9][0] deve ter a soma de todos os elementos da primeira coluna. E assim sucessivamente. Veja o exemplo abaixo para uma matriz 3x3.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int matriz[10][10], x;
    int linha, coluna, soma;

    srand(time(NULL));
    for (linha = 0; linha < 9; linha++)
    {
        for (coluna = 0; coluna < 9; coluna++)
        {
           
            matriz[linha][coluna] = rand() % 10;
            soma = soma + matriz[linha][coluna];
            if (coluna == 8)
            {
                matriz[linha][coluna + 1] = soma;
            }
        }
        soma = 0;
    }


    for (coluna = 0; coluna < 10; coluna++)
    {
        for (linha = 0; linha < 10; linha++)
        {
            soma = soma + matriz[linha][coluna];
            if (linha == 8)
            {
                matriz[linha+1][coluna] = soma;
            }
        }
        soma = 0;
    }


     for (linha = 0; linha < 10; linha++)
    {
        for (coluna = 0; coluna < 10; coluna++)
        {
            printf("%.2d ", matriz[linha][coluna]);
        }

        printf("\n");
    }

    return 0;
}