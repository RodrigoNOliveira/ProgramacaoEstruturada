#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(NULL));
    int tamanho, i, j, k;
    printf("Insira a altura do triangulo: ");
    scanf("%i", &tamanho);

    for (i = 0; i <= tamanho; i++)
    {
        for (k = (tamanho - i); k > 0; k--)
        {
            printf(" ");
        }
        for (j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
