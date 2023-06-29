#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double vetor(int x, int y)
{
    double res, prov;
	prov = (pow(x, 2) + pow(y, 2));
    res = sqrt(prov);
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
    printf("A norma do vetor e de: %lf", nV);


    return 0;
}
