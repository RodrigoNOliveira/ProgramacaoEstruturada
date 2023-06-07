#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

double vetor(int x, int y)
{
    double res;

    res = sqrt((double)(pow(x, 2) + pow(y, 2),2));
    return res;
}

int main()
{

    int p, s;
    double nV;
    printf("Insira dois valores inteiros");
    printf("\nInsira o primeiro: ");
    scanf("%d", &p);
    printf("\nInsira o segundo: ");
    scanf("%d", &s);
    nV = vetor(p,s);
    printf("A norma do vetor é de: %lf", nV);


    return 0;
}
