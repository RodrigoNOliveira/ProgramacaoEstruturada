#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<stdbool.h>

void valores(int x, int x2){
    for (int i = x+1; i < x2; i++)
    {
        printf("%d ",i);
    }
    
}


int main(){

    int x, x2;	
    
    printf("Insira o valor 1: ");
    scanf("%d", &x);
    printf("\n");
    printf("Insira o valor 2: ");
    scanf("%d", &x2);
    printf("\n");
    valores(x, x2);

        
    return 0;
}
