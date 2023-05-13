#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){

    srand(time(NULL));
    int tamanho, i, j;
    printf("Insira a altura do triangulo: ");
    scanf("%i", &tamanho);

    for (i = 0; i <= tamanho; i++){
        for (j = 1; j <= i; j++){
                printf("%i", j);  
        }
        printf("\n");
    }
}
    