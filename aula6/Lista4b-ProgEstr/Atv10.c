#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){

    srand(time(NULL));
    int tamanho, i, j;
    printf("Insira a altura do triangulo: ");
    scanf("%i", &tamanho);

    for (i = 0; i <= tamanho; i++){
        for (j = 0; j < i; j++){
                printf("%i", i);  
        }
        printf("\n");
    }
     for (i = tamanho-1;i >= 0; i--){
        for (j = i; j > 0; j--){
                printf("%i", i);  
        }
        printf("\n");
    }
}
    