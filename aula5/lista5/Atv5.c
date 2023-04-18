#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{   
    int a[4], i;

    srand(time(NULL));
    printf("\nVetor:\n");   
    for ( i = 0; i < 4; i++){
       a[i] = rand() % 2;
       printf("%d ", a[i]);
    }   
    return 0;
}
