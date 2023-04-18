#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{   
    int a[4], i, soma =0;

    srand(time(NULL));
    printf("\nVetor:\n");   
    for ( i = 0; i < 4; i++){
       a[i] = rand() % 2;
       printf("%d ", a[i]);
       if (i == 0 && a[0] !=0){
        soma = soma + 8;
       } else if (i == 1 && a[1] !=0){
        soma = soma + 4;
       }  else if (i == 2 && a[2] !=0){
        soma = soma + 2;
       }  else if (i == 3 && a[3] !=0){
        soma = soma + 1;
       }
    }   

    printf("\nO valor em decimal é: %d", soma);
    return 0;
}
