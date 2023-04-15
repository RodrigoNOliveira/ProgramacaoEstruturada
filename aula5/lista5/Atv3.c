#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int a[10], b[10], j =0, k=0, soma =0;

    printf("\nVetor A:\n");   
    for ( int i = 2; i <= 20; i = i +2){
       a[j] = i;
       soma = soma + a[j];
       printf("%d ", a[j]);
        j++;
        
    }   
    printf("\nVetor B:\n");
    for ( int i = 10; i < 20; i++){
       b[k] = i;
       soma = soma + b[k];
       printf("%d ", b[k]);
       k++;

    }
    printf("\nO valor da soma: %d", soma);
    
    return 0;
}
