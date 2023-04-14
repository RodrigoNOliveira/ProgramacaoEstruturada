#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){

    srand(time(NULL));
    int tamanho, i, j;
    printf("Insira a altura do triangulo: ");
    scanf("%i", &tamanho);

    for (i = tamanho ; i > 0; i--){
        for (j = i; j > 0; j--){
                printf("%i ", j);  
        }
        printf("\n");
    }
}
    