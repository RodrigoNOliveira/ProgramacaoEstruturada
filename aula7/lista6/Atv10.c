// Gere uma matriz 3x3 com valores aleatórios inteiros entre 0 e 1. Imprima a matriz. Verifique se alguma linha ou coluna da matriz tem todos os valores iguais. Se sim, imprimir o número da linha, ou da coluna, e o valor contido nesta linha (ou coluna)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int matriz[3][3], x;
    int linha, coluna;
    int tLinha = 1;
    int tColuna = 1;


    srand(time(NULL));
    for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            matriz[linha][coluna] = rand() % 2;
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }

     for (linha = 0; linha < 3; linha++)
    {
        tLinha = 1;
        for (coluna = 1; coluna < 3; coluna++)
        {
            if(matriz[linha][coluna] == matriz[linha][coluna-1]){
                tLinha++;
            }
        }
        if(tLinha ==3){
            printf("\nValores iguais: linha: %d, valor: %d", linha+1, matriz[linha][coluna-1]);
        }
        printf("\n");
    }


    for (coluna = 0; coluna < 3; coluna++)
    {
        tColuna = 1;
        for (linha = 1; linha < 3; linha++)
        {
            if(matriz[linha][coluna] == matriz[linha-1][coluna]){
                tColuna++;
            }
        }
        if(tColuna ==3){
            printf("\nValores iguais: coluna: %d, valor: %d", coluna+1, matriz[linha-1][coluna]);
        }
        printf("\n");
    }
    


    return 0;
}