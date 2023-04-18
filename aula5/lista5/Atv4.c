#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{   
    int a[8], i, soma30 =0, soma = 0;

    srand(time(NULL));
    printf("\nVetor:\n");   
    for ( i = 0; i < 8; i++){
       a[i] = rand() % 51;
       soma = soma + a[i];
       printf("%d ", a[i]);
       if (a[i]>30){
        soma30 = soma30 + a[i];
       }
    }   
    

    printf("\nO valor da soma de todos: %d\nValor da soma dos numeros acima de 30: %i", soma, soma30);
    
    return 0;
}
