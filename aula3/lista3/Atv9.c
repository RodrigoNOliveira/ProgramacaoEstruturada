#include <stdio.h>

int main()
{
    int soma = 0;
    for ( int i = 1; i <= 10; i++){
        printf("\n%i", i);
        soma = soma + i;
    }
    printf("\nValor total: %i", soma);
    return 0;
}
