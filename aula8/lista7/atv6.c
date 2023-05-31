#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// void valores(int x, int x2)
// {
//     for (int i = x + 1; i < x2; i++)
//     {
//         printf("%d ", i);
//     }
// }

int main()
{

    int valor;
  

    int min, max;
    min = 1000;
    max = 9999;
    srand(time(NULL));
    valor = min + (rand() % (max - min + 1));

    printf("Insira o valor 1: %d", valor);


    return 0;
}
