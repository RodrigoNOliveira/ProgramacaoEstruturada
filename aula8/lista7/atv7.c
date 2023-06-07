#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int fatorial(int x)
{
    int fator = 1, y;

    for (y = x; y > 0; y--){
        fator = fator * y;
    }

    return fator;

}

int main()
{

    int valor, d;
    printf("Insira o numero para calcular seu fatorial: ");
    scanf("%d", &valor);
    d = fatorial(valor);
    printf("O fatorial de %d é: %d", valor, d);

    return 0;
}
