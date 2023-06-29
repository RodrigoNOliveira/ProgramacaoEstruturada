#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void fibonacci(int x)
{
    int y, fibo, ant = 0,aux = 1;

    if (x < 2){
        fibo = x;
    }
    else{
    for (y = 2; y < x; y++)
    {
        fibo = aux + ant;
        ant = aux;
        aux = fibo;
    }}
    printf("\n%d", fibo);
}

int main()
{

    int x;
    printf("Insira o valor: ");
    scanf("%d", &x);
    fibonacci(x);

    return 0;
}
