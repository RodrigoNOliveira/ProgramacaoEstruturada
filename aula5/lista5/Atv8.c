#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<math.h>

int main()
{   
    int a[5], b[5], i, x;

    srand(time(NULL));
    printf("\nValores iniciais:\n");   
    for ( i = 0; i < 5; i++){
        x = rand() % 10+1;
        a[i] = x;
        b[i] = pow(x,3);
       printf("%d ", a[i]);
    } 
    printf("\nValores ao cubo:\n");   
    for ( i = 0; i < 5; i++){
       printf("%d ", b[i]);
    }   
    
    return 0;
}
