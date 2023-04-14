#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){

    srand(time(NULL));
    int tamanho, valor = 0, i, j;
    printf("Insira a altura do triangulo: ");
    scanf("%i", &tamanho);

    for (i = 0; i <= tamanho; i++){
        for (j = 0; j < i; j++){
            valor++;
                printf("%i ", valor);  
        }
        printf("\n");
    }
}
    