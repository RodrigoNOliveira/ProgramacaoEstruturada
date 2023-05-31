#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<stdbool.h>

void valores(int x){
    for (int i = 1; i < x; i++)
    {
        printf("%d ",i);
    }
    
}


int main(){

    int x;	
    
    printf("Insira o valor: ");
    scanf("%d", &x);
    printf("\n");
    valores(x);

        
    return 0;
}
