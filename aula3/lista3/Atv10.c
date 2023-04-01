#include <stdio.h>

int main()
{
    int soma = 0;
    for ( int i = 0; i <= 100; i = i+2){
        printf("\n%i", i);
        soma = soma + i;
    }
    printf("\nValor total: %i", soma);
    return 0;
}
