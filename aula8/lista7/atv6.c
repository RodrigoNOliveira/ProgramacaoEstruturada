#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void decompor(int x)
{

    int  m, c,d, u;
    m= (x/1000)*1000 ;
    printf("\nMilhar: %d", m);
    c = ((m-x)/100)*-100;
    printf("\nCentena: %d", c);
    d = ((m+c-x)/10)*-10;
    printf("\nDezena: %d", d);
    u = (m+c+d-x)*-1;
    printf("\nUnidade: %d", u);
}

int main()
{

    int valor;
    int min, max;
    min = 1000;
    max = 9999;
    srand(time(NULL));
    valor = min + rand() % (max - min + 1);

    printf("Valor para ser decomposto: %d", valor);
    decompor(valor);

    return 0;
}
