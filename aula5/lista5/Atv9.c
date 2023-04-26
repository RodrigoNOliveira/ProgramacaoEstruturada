#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{   
  
    int a[10], i, x;

    srand(time(NULL));
    printf("\nValores:\n");   
    for ( i = 0; i <= 10; i++){
        a[i] = i+10;
       printf("%d ", a[i]);
    }
    printf("\nValores pares de tras para frente:\n");   
    for ( i = 10; i >= 0; i--){
        if(a[i]%2 ==0){
            printf("%d ", a[i]);  
        }
    }   
    printf("\nValores impares de tras para frente:\n");   
    for ( i = 10; i > 0; i--){
        if(a[i]%2 !=0){
            printf("%d ", a[i]);  
        }
    }   
    
    return 0;
}
